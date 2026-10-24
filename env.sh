# Source me: `. env.sh`. Sets up Xcelium + license + OpenTitan Python venv.
PERSEUS=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)

# Europractice kit; must live in /eda (paths are hard-coded by the kit). Override for other installs.
XCELIUM_SETUP=${XCELIUM_SETUP:-/eda/cadence/2023-24/scripts/XCELIUM_23.03.007_RHELx86.sh}
[ -f "$XCELIUM_SETUP" ] && . "$XCELIUM_SETUP" || echo "WARNING: $XCELIUM_SETUP missing; install the kit into /eda" >&2

# univr license server (Cadence port 5280), reachable only with the VPN on.
export CDS_LIC_FILE=${CDS_LIC_FILE:-5280@157.27.6.46}
export CDS_AUTO_64BIT=ALL

. "$PERSEUS/.venv/bin/activate"
