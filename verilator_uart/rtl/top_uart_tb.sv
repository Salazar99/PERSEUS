`timescale 1ns/1ps

module top_uart_tb;
  import tlul_pkg::*;
  import uart_reg_pkg::*;       // UART_*_OFFSET, types, depths
  import prim_alert_pkg::*;
  import top_racl_pkg::*;

  // -----------------------------------------------------------------------
  // Clock / reset (100 MHz default)
  // -----------------------------------------------------------------------
  logic clk, rst_n;
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end
  initial begin
    rst_n = 1'b0;
    repeat (8) @(posedge clk);
    rst_n = 1'b1;
  end

  // TL-UL records
  tl_h2d_t tl_h2d;
  tl_d2h_t tl_d2h;

  // UART pins: loopback TX -> RX
  logic cio_rx_i, cio_tx_o, cio_tx_en_o;
  assign cio_rx_i = cio_tx_o;

  // Alerts + RACL tie-offs
  localparam int NumAlerts = uart_reg_pkg::NumAlerts; // 1 in your reg_pkg
  alert_rx_t [NumAlerts-1:0] alert_rx_i = '{default: '0};
  alert_tx_t [NumAlerts-1:0] alert_tx_o;


top_racl_pkg::racl_policy_t racl_policy_one = '{read_perm:'1, write_perm:'1};

/*verilator tracing_off*/
top_racl_pkg::racl_policy_vec_t racl_policies_i;
/*verilator tracing_on*/

assign racl_policies_i = '{default: racl_policy_one};


  racl_error_log_t  racl_error_o;

  // DUT interrupts (unused in this TB)
  logic intr_tx_watermark_o, intr_tx_empty_o, intr_rx_watermark_o, intr_tx_done_o;
  logic intr_rx_overflow_o, intr_rx_frame_err_o, intr_rx_break_err_o, intr_rx_timeout_o, intr_rx_parity_err_o;
  logic lsio_trigger_o;

  uart #(
    .EnableRacl(1'b0)  // logic pruned, types still needed for ports
  ) u_dut (
    .clk_i(clk),
    .rst_ni(rst_n),
    .tl_i(tl_h2d),
    .tl_o(tl_d2h),

    .alert_rx_i(alert_rx_i),
    .alert_tx_o(alert_tx_o),

    .racl_policies_i(racl_policies_i),
    .racl_error_o   (racl_error_o),
    .lsio_trigger_o (lsio_trigger_o),

    .cio_rx_i(cio_rx_i),
    .cio_tx_o(cio_tx_o),
    .cio_tx_en_o(cio_tx_en_o),

    .intr_tx_watermark_o(intr_tx_watermark_o),
    .intr_tx_empty_o    (intr_tx_empty_o),
    .intr_rx_watermark_o(intr_rx_watermark_o),
    .intr_tx_done_o     (intr_tx_done_o),
    .intr_rx_overflow_o (intr_rx_overflow_o),
    .intr_rx_frame_err_o(intr_rx_frame_err_o),
    .intr_rx_break_err_o(intr_rx_break_err_o),
    .intr_rx_timeout_o  (intr_rx_timeout_o),
    .intr_rx_parity_err_o(intr_rx_parity_err_o)
  );

  // Tiny TL-UL host
  tlul_host #(.TL_AW(32), .TL_DW(32)) u_host (
    .clk_i  (clk),
    .rst_ni (rst_n),
    .tl_h2d (tl_h2d),
    .tl_d2h (tl_d2h)
  );

  // ---------------------------
  //  Scenario A: sanity check
  // ---------------------------
  task automatic sanity_intr();
    logic [31:0] r;
    // Clear W1C intr bits (write 1s to clear)
    u_host.tl_write32(UART_INTR_STATE_OFFSET, 32'h1FF);
    // Force: tx_done(bit2), rx_timeout(bit6) via INTR_TEST
    u_host.tl_write32(UART_INTR_TEST_OFFSET, 32'h0000_0044);
    // Read back
    u_host.tl_read32(UART_INTR_STATE_OFFSET, r);
    $display("[%0t] INTR_STATE = 0x%08x", $time, r);
  endtask

  // ------------------------------------
  //  Scenario B: real TX/RX with loopback
  // ------------------------------------
  // CTRL fields (from uart_reg_top mapping):
  //   [0]=tx, [1]=rx, [2]=nf, [4]=slpbk, [5]=llpbk, [6]=parity_en, [7]=parity_odd,
  //   [9:8]=rxblvl, [31:16]=nco  (WDATA is 0x1C, RDATA is 0x18, STATUS bits [5:0])
  // Ref: your uart_reg_top.sv and uart_reg_pkg.sv
 task automatic tx_rx_demo_hello();
  // --- Declarations first ---
  int unsigned f_clk_hz;
  int unsigned baud;
  int unsigned NCO;
  logic [31:0] r;
  string msg;
  int unsigned i;
  int received;
  byte b;
  int tries;
  int  max_tries = 50000; // ~20ms at 100MHz

  // --- Assign/init values ---
  f_clk_hz = 100_000_000;       // match TB clock
  baud     = 115200;
  NCO      = ((1<<16) * 16 * baud + (f_clk_hz/2)) / f_clk_hz; // rounded
  msg      = "HELLO\n";
  received = 0;
  tries    = 0;

  // Reset FIFOs
  u_host.tl_write32(UART_FIFO_CTRL_OFFSET, 32'h0000_0003);

  // Program CTRL (tx=1, rx=1, NCO)
  u_host.tl_write32(UART_CTRL_OFFSET, {16'(NCO), 6'h0, 2'b00, 1'b0,1'b0,1'b0, 1'b1,1'b1});

  repeat (10) @(posedge clk);

  $display("[%0t] Preparing to send: %s \n", $time, msg);

  // Write bytes to WDATA
  foreach (msg[i]) begin
    $display("[%0t] TX sent byte: %s \n", $time, msg[i]);
    u_host.tl_write32(UART_WDATA_OFFSET, {24'h0, msg[i]});
  end

  // Read back via loopback

  while (received < $size(msg) && tries < max_tries) begin
    tries++;
    u_host.tl_read32(UART_STATUS_OFFSET, r);
    // $display("[%0t] RX STATUS = 0x%08x \n", $time, r);
    if (r[5] == 1'b0) begin // rxempty==0
      u_host.tl_read32(UART_RDATA_OFFSET, r);
      b = r[7:0];
      $write("%c", b);
      received++;
    end
    @(posedge clk);
  end
  $display("\n[%0t] RX done: %0d bytes", $time, received);

endtask
  initial begin
    @(posedge rst_n);
    repeat (5) @(posedge clk);

    sanity_intr();       // quick bus sanity (INTR_TEST/STATE)
    tx_rx_demo_hello();  // send/receive "HELLO\n"

    repeat (200) @(posedge clk);
    $finish;
  end
endmodule

