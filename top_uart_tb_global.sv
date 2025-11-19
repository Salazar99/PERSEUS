`timescale 1ns/1ps

module uart_tx_min_tb;
  import tlul_pkg::*;
  import uart_reg_pkg::*;
  import prim_alert_pkg::*;
  import top_racl_pkg::*;

  // -----------------------------------------------------------------------
  // Clock / reset (100 MHz)
  // -----------------------------------------------------------------------
  logic clk, rst_n;
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk; // 100 MHz
  end

  initial begin
    rst_n = 1'b0;
    repeat (8) @(posedge clk);
    rst_n = 1'b1;
  end

  // -----------------------------------------------------------------------
  // TL-UL bus
  // -----------------------------------------------------------------------
  tl_h2d_t tl_h2d;
  tl_d2h_t tl_d2h;

  // -----------------------------------------------------------------------
  // UART pins: TX observed, RX held idle high, TX enable pin observed
  // -----------------------------------------------------------------------
  logic cio_rx_i, cio_tx_o, cio_tx_en_o;
  assign cio_rx_i = 1'b1;  // no loopback; keep RX line idle high

  // Alerts + RACL tie-offs
  localparam int NumAlerts = uart_reg_pkg::NumAlerts;
  alert_rx_t [NumAlerts-1:0] alert_rx_i = '{default: '0};
  alert_tx_t [NumAlerts-1:0] alert_tx_o;

  top_racl_pkg::racl_policy_t racl_policy_one = '{read_perm:'1, write_perm:'1};
  top_racl_pkg::racl_policy_vec_t racl_policies_i = '{default: racl_policy_one};
  racl_error_log_t racl_error_o;

  // Unused IRQs
  logic intr_tx_watermark_o, intr_tx_empty_o, intr_rx_watermark_o, intr_tx_done_o;
  logic intr_rx_overflow_o, intr_rx_frame_err_o, intr_rx_break_err_o, intr_rx_timeout_o, intr_rx_parity_err_o;
  logic lsio_trigger_o;

  // -----------------------------------------------------------------------
  // DUT
  // -----------------------------------------------------------------------
  uart #(.EnableRacl(1'b0)) u_dut (
    .clk_i               (clk),
    .rst_ni              (rst_n),
    .tl_i                (tl_h2d),
    .tl_o                (tl_d2h),
    .alert_rx_i          (alert_rx_i),
    .alert_tx_o          (alert_tx_o),
    .racl_policies_i     (racl_policies_i),
    .racl_error_o        (racl_error_o),
    .lsio_trigger_o      (lsio_trigger_o),
    .cio_rx_i            (cio_rx_i),
    .cio_tx_o            (cio_tx_o),
    .cio_tx_en_o         (cio_tx_en_o),
    .intr_tx_watermark_o (intr_tx_watermark_o),
    .intr_tx_empty_o     (intr_tx_empty_o),
    .intr_rx_watermark_o (intr_rx_watermark_o),
    .intr_tx_done_o      (intr_tx_done_o),
    .intr_rx_overflow_o  (intr_rx_overflow_o),
    .intr_rx_frame_err_o (intr_rx_frame_err_o),
    .intr_rx_break_err_o (intr_rx_break_err_o),
    .intr_rx_timeout_o   (intr_rx_timeout_o),
    .intr_rx_parity_err_o(intr_rx_parity_err_o)
  );

  // -----------------------------------------------------------------------
  // Tiny TL-UL host BFM
  // -----------------------------------------------------------------------
  tlul_host #(.TL_AW(32), .TL_DW(32)) u_host (
    .clk_i (clk),
    .rst_ni(rst_n),
    .tl_h2d(tl_h2d),
    .tl_d2h(tl_d2h)
  );

  // -----------------------------------------------------------------------
  // Parameters (clock/baud) and helpers
  // -----------------------------------------------------------------------
  localparam int unsigned F_CLK_HZ = 100_000_000;
  localparam int unsigned BAUD     = 115200;

  function automatic int unsigned calc_nco(int unsigned f_clk, int unsigned baud);
    // NCO ≈ round(baud * 2^16 / f_clk)
    return ((1<<16) * baud + (f_clk/2)) / f_clk;
  endfunction

  // -----------------------------------------------------------------------
  // Minimal TX sequence:
  //   1) reset FIFOs
  //   2) program CTRL (NCO + tx_enable=1, rx_enable=0, loopback off)
  //   3) write one byte to TX WDATA
  //   4) observe cio_tx_o start bit
  // -----------------------------------------------------------------------
  initial begin
    // VCD for Verilator
    `ifdef VERILATOR
      $dumpfile("uart_tx_min.vcd");
      $dumpvars(0, uart_tx_min_tb);
    `endif

    @(posedge rst_n);
    repeat (5) @(posedge clk);

    // 1) Reset FIFOs (W1C-like bits for reset)
    u_host.tl_write32(UART_FIFO_CTRL_OFFSET, 32'h0000_0003);
    // Optionally release resets by clearing the bits if required by your UART version
    u_host.tl_write32(UART_FIFO_CTRL_OFFSET, 32'h0000_0000);

    // 2) Program CTRL
    logic [31:0] ctrl_wr, ctrl_rb;
    ctrl_wr = '0;
    ctrl_wr[31:16] = calc_nco(F_CLK_HZ, BAUD)[15:0]; // NCO
    ctrl_wr[0]     = 1'b1;  // tx_enable = 1
    ctrl_wr[1]     = 1'b0;  // rx_enable = 0 (TX-only)
    // ctrl_wr[5]  = 1'b0;  // internal loopback off (bit index depends on your reggen; unused here)
    u_host.tl_write32(UART_CTRL_OFFSET, ctrl_wr);
    u_host.tl_read32(UART_CTRL_OFFSET, ctrl_rb);
    $display("[%0t] CTRL wr=0x%08x rb=0x%08x", $time, ctrl_wr, ctrl_rb);

    // 3) Write one byte to TX FIFO (WDATA/TXDATA offset depending on your reg package)
    byte unsigned b = "A"; // 0x41
    u_host.tl_write32(UART_WDATA_OFFSET, {24'h0, b});
    $display("[%0t] Wrote TX byte 0x%02x", $time, b);

    // 4) Observe start bit on cio_tx_o: wait for falling edge within timeout
    int unsigned timeout_cycles = F_CLK_HZ / 1000; // ~1 ms timeout at 100 MHz
    int unsigned t = 0;
    // The TX output is enabled when cio_tx_en_o==1. Wait for line to go low (start bit).
    fork
      begin : timeout_blk
        repeat (timeout_cycles) @(posedge clk);
        $fatal(1, "[%0t] Timeout waiting for TX start bit (cio_tx_o never went low)", $time);
      end
      begin : wait_start
        // Wait until enabled, then a falling edge
        wait (cio_tx_en_o === 1'b1);
        wait (cio_tx_o === 1'b0);
        disable timeout_blk;
      end
    join_any
    disable fork;

    $display("[%0t] Detected TX start bit (cio_tx_o=0)", $time);

    // Optional: sample the 8 data bits at BAUD intervals (center sampling)
    int unsigned bit_cycles = (F_CLK_HZ + (BAUD/2)) / BAUD; // rounded
    // Move to the middle of the start bit + 1 bit period
    repeat (bit_cycles + (bit_cycles/2)) @(posedge clk);
    bit [7:0] sampled;
    for (int i = 0; i < 8; i++) begin
      sampled[i] = cio_tx_o;  // LSB first per UART
      repeat (bit_cycles) @(posedge clk);
    end
    $display("[%0t] Sampled data bits (LSB..MSB) = 0x%02x ('%s')",
             $time, sampled, (sampled >= 8'h20 && sampled < 8'h7F) ? {sampled} : "?");

    // Optional: check stop bit high
    if (cio_tx_o !== 1'b1) begin
      $error("[%0t] Stop bit not high after data bits", $time);
    end

    // Let it finish
    repeat (2000) @(posedge clk);
    $finish;
  end
endmodule
