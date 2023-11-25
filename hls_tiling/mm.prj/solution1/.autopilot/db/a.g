#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/yz2797/ECE-6775-Final/hls_tiling/mm.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
