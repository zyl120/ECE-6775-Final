<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="mm.prj" top="mm_mult">
    <includePaths/>
    <libraryFlag/>
    <files>
        <file name="../../mm_mult_testbench.cc" sc="0" tb="1" cflags=" -std=c++11 -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="mm_mult.cc" sc="0" tb="false" cflags="-std=c++11" csimflags="" blackbox="false"/>
    </files>
    <solutions>
        <solution name="solution1" status=""/>
    </solutions>
    <Simulation argv="">
        <SimFlow name="csim" setup="false" optimizeCompile="true" clean="false" ldflags="" mflags=""/>
    </Simulation>
</AutoPilot:project>

