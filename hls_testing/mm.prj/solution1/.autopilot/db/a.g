#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ks977/ECE-6775-Final/hls_testing/mm.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
