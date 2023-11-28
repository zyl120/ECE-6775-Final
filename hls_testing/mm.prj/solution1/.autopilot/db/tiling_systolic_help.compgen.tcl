# This script segment is generated automatically by AutoPilot

set id 1
set name dut_mux_1007_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 0
set din9_width 16
set din9_signed 0
set din10_width 16
set din10_signed 0
set din11_width 16
set din11_signed 0
set din12_width 16
set din12_signed 0
set din13_width 16
set din13_signed 0
set din14_width 16
set din14_signed 0
set din15_width 16
set din15_signed 0
set din16_width 16
set din16_signed 0
set din17_width 16
set din17_signed 0
set din18_width 16
set din18_signed 0
set din19_width 16
set din19_signed 0
set din20_width 16
set din20_signed 0
set din21_width 16
set din21_signed 0
set din22_width 16
set din22_signed 0
set din23_width 16
set din23_signed 0
set din24_width 16
set din24_signed 0
set din25_width 16
set din25_signed 0
set din26_width 16
set din26_signed 0
set din27_width 16
set din27_signed 0
set din28_width 16
set din28_signed 0
set din29_width 16
set din29_signed 0
set din30_width 16
set din30_signed 0
set din31_width 16
set din31_signed 0
set din32_width 16
set din32_signed 0
set din33_width 16
set din33_signed 0
set din34_width 16
set din34_signed 0
set din35_width 16
set din35_signed 0
set din36_width 16
set din36_signed 0
set din37_width 16
set din37_signed 0
set din38_width 16
set din38_signed 0
set din39_width 16
set din39_signed 0
set din40_width 16
set din40_signed 0
set din41_width 16
set din41_signed 0
set din42_width 16
set din42_signed 0
set din43_width 16
set din43_signed 0
set din44_width 16
set din44_signed 0
set din45_width 16
set din45_signed 0
set din46_width 16
set din46_signed 0
set din47_width 16
set din47_signed 0
set din48_width 16
set din48_signed 0
set din49_width 16
set din49_signed 0
set din50_width 16
set din50_signed 0
set din51_width 16
set din51_signed 0
set din52_width 16
set din52_signed 0
set din53_width 16
set din53_signed 0
set din54_width 16
set din54_signed 0
set din55_width 16
set din55_signed 0
set din56_width 16
set din56_signed 0
set din57_width 16
set din57_signed 0
set din58_width 16
set din58_signed 0
set din59_width 16
set din59_signed 0
set din60_width 16
set din60_signed 0
set din61_width 16
set din61_signed 0
set din62_width 16
set din62_signed 0
set din63_width 16
set din63_signed 0
set din64_width 16
set din64_signed 0
set din65_width 16
set din65_signed 0
set din66_width 16
set din66_signed 0
set din67_width 16
set din67_signed 0
set din68_width 16
set din68_signed 0
set din69_width 16
set din69_signed 0
set din70_width 16
set din70_signed 0
set din71_width 16
set din71_signed 0
set din72_width 16
set din72_signed 0
set din73_width 16
set din73_signed 0
set din74_width 16
set din74_signed 0
set din75_width 16
set din75_signed 0
set din76_width 16
set din76_signed 0
set din77_width 16
set din77_signed 0
set din78_width 16
set din78_signed 0
set din79_width 16
set din79_signed 0
set din80_width 16
set din80_signed 0
set din81_width 16
set din81_signed 0
set din82_width 16
set din82_signed 0
set din83_width 16
set din83_signed 0
set din84_width 16
set din84_signed 0
set din85_width 16
set din85_signed 0
set din86_width 16
set din86_signed 0
set din87_width 16
set din87_signed 0
set din88_width 16
set din88_signed 0
set din89_width 16
set din89_signed 0
set din90_width 16
set din90_signed 0
set din91_width 16
set din91_signed 0
set din92_width 16
set din92_signed 0
set din93_width 16
set din93_signed 0
set din94_width 16
set din94_signed 0
set din95_width 16
set din95_signed 0
set din96_width 16
set din96_signed 0
set din97_width 16
set din97_signed 0
set din98_width 16
set din98_signed 0
set din99_width 16
set din99_signed 0
set din100_width 7
set din100_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    din97_width ${din97_width} \
    din97_signed ${din97_signed} \
    din98_width ${din98_width} \
    din98_signed ${din98_signed} \
    din99_width ${din99_width} \
    din99_signed ${din99_signed} \
    din100_width ${din100_width} \
    din100_signed ${din100_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    din97_width ${din97_width} \
    din97_signed ${din97_signed} \
    din98_width ${din98_width} \
    din98_signed ${din98_signed} \
    din99_width ${din99_width} \
    din99_signed ${din99_signed} \
    din100_width ${din100_width} \
    din100_signed ${din100_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 13
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 14
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 15
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 16
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 17
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 18
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 19
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 20
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 21
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 22
set name dut_mux_164_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 1
set din9_width 16
set din9_signed 1
set din10_width 16
set din10_signed 1
set din11_width 16
set din11_signed 1
set din12_width 16
set din12_signed 1
set din13_width 16
set din13_signed 1
set din14_width 16
set din14_signed 1
set din15_width 16
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 113
set name dut_mac_muladd_16bkb
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 16
set in0_signed 1
set in1_width 16
set in1_signed 1
set in2_width 16
set in2_signed 0
set out_width 16
set exp i0*i1+i2
set arg_lists {i0 {16 1 +} i1 {16 1 +} m {16 1 +} i2 {16 0 +} p {16 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name A_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_0_read \
    op interface \
    ports { A_0_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name A_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_1_read \
    op interface \
    ports { A_0_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name A_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_2_read \
    op interface \
    ports { A_0_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name A_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_3_read \
    op interface \
    ports { A_0_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name A_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_4_read \
    op interface \
    ports { A_0_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name A_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_5_read \
    op interface \
    ports { A_0_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name A_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_6_read \
    op interface \
    ports { A_0_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name A_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_7_read \
    op interface \
    ports { A_0_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name A_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_8_read \
    op interface \
    ports { A_0_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name A_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_0_9_read \
    op interface \
    ports { A_0_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name A_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_0_read \
    op interface \
    ports { A_1_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name A_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_1_read \
    op interface \
    ports { A_1_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name A_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_2_read \
    op interface \
    ports { A_1_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name A_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_3_read \
    op interface \
    ports { A_1_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name A_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_4_read \
    op interface \
    ports { A_1_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name A_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_5_read \
    op interface \
    ports { A_1_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name A_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_6_read \
    op interface \
    ports { A_1_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name A_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_7_read \
    op interface \
    ports { A_1_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name A_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_8_read \
    op interface \
    ports { A_1_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name A_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_1_9_read \
    op interface \
    ports { A_1_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name A_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_0_read \
    op interface \
    ports { A_2_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name A_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_1_read \
    op interface \
    ports { A_2_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name A_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_2_read \
    op interface \
    ports { A_2_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name A_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_3_read \
    op interface \
    ports { A_2_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name A_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_4_read \
    op interface \
    ports { A_2_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name A_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_5_read \
    op interface \
    ports { A_2_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name A_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_6_read \
    op interface \
    ports { A_2_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name A_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_7_read \
    op interface \
    ports { A_2_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name A_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_8_read \
    op interface \
    ports { A_2_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name A_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_2_9_read \
    op interface \
    ports { A_2_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name A_3_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_0_read \
    op interface \
    ports { A_3_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name A_3_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_1_read \
    op interface \
    ports { A_3_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name A_3_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_2_read \
    op interface \
    ports { A_3_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name A_3_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_3_read \
    op interface \
    ports { A_3_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name A_3_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_4_read \
    op interface \
    ports { A_3_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name A_3_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_5_read \
    op interface \
    ports { A_3_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name A_3_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_6_read \
    op interface \
    ports { A_3_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name A_3_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_7_read \
    op interface \
    ports { A_3_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name A_3_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_8_read \
    op interface \
    ports { A_3_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name A_3_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_3_9_read \
    op interface \
    ports { A_3_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name A_4_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_0_read \
    op interface \
    ports { A_4_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name A_4_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_1_read \
    op interface \
    ports { A_4_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name A_4_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_2_read \
    op interface \
    ports { A_4_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name A_4_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_3_read \
    op interface \
    ports { A_4_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name A_4_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_4_read \
    op interface \
    ports { A_4_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name A_4_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_5_read \
    op interface \
    ports { A_4_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name A_4_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_6_read \
    op interface \
    ports { A_4_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name A_4_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_7_read \
    op interface \
    ports { A_4_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name A_4_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_8_read \
    op interface \
    ports { A_4_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name A_4_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_4_9_read \
    op interface \
    ports { A_4_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name A_5_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_0_read \
    op interface \
    ports { A_5_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name A_5_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_1_read \
    op interface \
    ports { A_5_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name A_5_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_2_read \
    op interface \
    ports { A_5_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name A_5_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_3_read \
    op interface \
    ports { A_5_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name A_5_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_4_read \
    op interface \
    ports { A_5_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name A_5_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_5_read \
    op interface \
    ports { A_5_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name A_5_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_6_read \
    op interface \
    ports { A_5_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 186 \
    name A_5_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_7_read \
    op interface \
    ports { A_5_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 187 \
    name A_5_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_8_read \
    op interface \
    ports { A_5_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
    name A_5_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_5_9_read \
    op interface \
    ports { A_5_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name A_6_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_0_read \
    op interface \
    ports { A_6_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name A_6_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_1_read \
    op interface \
    ports { A_6_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name A_6_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_2_read \
    op interface \
    ports { A_6_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name A_6_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_3_read \
    op interface \
    ports { A_6_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name A_6_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_4_read \
    op interface \
    ports { A_6_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name A_6_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_5_read \
    op interface \
    ports { A_6_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name A_6_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_6_read \
    op interface \
    ports { A_6_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name A_6_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_7_read \
    op interface \
    ports { A_6_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name A_6_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_8_read \
    op interface \
    ports { A_6_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name A_6_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_6_9_read \
    op interface \
    ports { A_6_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name A_7_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_0_read \
    op interface \
    ports { A_7_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name A_7_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_1_read \
    op interface \
    ports { A_7_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name A_7_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_2_read \
    op interface \
    ports { A_7_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name A_7_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_3_read \
    op interface \
    ports { A_7_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name A_7_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_4_read \
    op interface \
    ports { A_7_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name A_7_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_5_read \
    op interface \
    ports { A_7_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name A_7_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_6_read \
    op interface \
    ports { A_7_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name A_7_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_7_read \
    op interface \
    ports { A_7_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name A_7_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_8_read \
    op interface \
    ports { A_7_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name A_7_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_7_9_read \
    op interface \
    ports { A_7_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name A_8_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_0_read \
    op interface \
    ports { A_8_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name A_8_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_1_read \
    op interface \
    ports { A_8_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name A_8_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_2_read \
    op interface \
    ports { A_8_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name A_8_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_3_read \
    op interface \
    ports { A_8_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name A_8_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_4_read \
    op interface \
    ports { A_8_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name A_8_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_5_read \
    op interface \
    ports { A_8_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name A_8_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_6_read \
    op interface \
    ports { A_8_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name A_8_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_7_read \
    op interface \
    ports { A_8_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name A_8_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_8_read \
    op interface \
    ports { A_8_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name A_8_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_8_9_read \
    op interface \
    ports { A_8_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name A_9_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_0_read \
    op interface \
    ports { A_9_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name A_9_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_1_read \
    op interface \
    ports { A_9_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name A_9_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_2_read \
    op interface \
    ports { A_9_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name A_9_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_3_read \
    op interface \
    ports { A_9_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name A_9_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_4_read \
    op interface \
    ports { A_9_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name A_9_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_5_read \
    op interface \
    ports { A_9_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name A_9_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_6_read \
    op interface \
    ports { A_9_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name A_9_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_7_read \
    op interface \
    ports { A_9_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name A_9_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_8_read \
    op interface \
    ports { A_9_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name A_9_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_9_9_read \
    op interface \
    ports { A_9_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name B_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_0_read \
    op interface \
    ports { B_0_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name B_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_1_read \
    op interface \
    ports { B_0_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name B_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_2_read \
    op interface \
    ports { B_0_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name B_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_3_read \
    op interface \
    ports { B_0_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name B_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_4_read \
    op interface \
    ports { B_0_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name B_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_5_read \
    op interface \
    ports { B_0_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 235 \
    name B_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_6_read \
    op interface \
    ports { B_0_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name B_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_7_read \
    op interface \
    ports { B_0_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 237 \
    name B_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_8_read \
    op interface \
    ports { B_0_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 238 \
    name B_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_0_9_read \
    op interface \
    ports { B_0_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 239 \
    name B_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_0_read \
    op interface \
    ports { B_1_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 240 \
    name B_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_1_read \
    op interface \
    ports { B_1_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 241 \
    name B_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_2_read \
    op interface \
    ports { B_1_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 242 \
    name B_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_3_read \
    op interface \
    ports { B_1_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 243 \
    name B_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_4_read \
    op interface \
    ports { B_1_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 244 \
    name B_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_5_read \
    op interface \
    ports { B_1_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 245 \
    name B_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_6_read \
    op interface \
    ports { B_1_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 246 \
    name B_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_7_read \
    op interface \
    ports { B_1_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 247 \
    name B_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_8_read \
    op interface \
    ports { B_1_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 248 \
    name B_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_1_9_read \
    op interface \
    ports { B_1_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 249 \
    name B_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_0_read \
    op interface \
    ports { B_2_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 250 \
    name B_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_1_read \
    op interface \
    ports { B_2_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 251 \
    name B_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_2_read \
    op interface \
    ports { B_2_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 252 \
    name B_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_3_read \
    op interface \
    ports { B_2_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 253 \
    name B_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_4_read \
    op interface \
    ports { B_2_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 254 \
    name B_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_5_read \
    op interface \
    ports { B_2_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 255 \
    name B_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_6_read \
    op interface \
    ports { B_2_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 256 \
    name B_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_7_read \
    op interface \
    ports { B_2_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 257 \
    name B_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_8_read \
    op interface \
    ports { B_2_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 258 \
    name B_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_2_9_read \
    op interface \
    ports { B_2_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 259 \
    name B_3_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_0_read \
    op interface \
    ports { B_3_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 260 \
    name B_3_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_1_read \
    op interface \
    ports { B_3_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 261 \
    name B_3_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_2_read \
    op interface \
    ports { B_3_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 262 \
    name B_3_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_3_read \
    op interface \
    ports { B_3_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 263 \
    name B_3_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_4_read \
    op interface \
    ports { B_3_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 264 \
    name B_3_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_5_read \
    op interface \
    ports { B_3_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 265 \
    name B_3_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_6_read \
    op interface \
    ports { B_3_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 266 \
    name B_3_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_7_read \
    op interface \
    ports { B_3_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 267 \
    name B_3_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_8_read \
    op interface \
    ports { B_3_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 268 \
    name B_3_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_3_9_read \
    op interface \
    ports { B_3_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 269 \
    name B_4_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_0_read \
    op interface \
    ports { B_4_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 270 \
    name B_4_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_1_read \
    op interface \
    ports { B_4_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 271 \
    name B_4_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_2_read \
    op interface \
    ports { B_4_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 272 \
    name B_4_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_3_read \
    op interface \
    ports { B_4_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 273 \
    name B_4_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_4_read \
    op interface \
    ports { B_4_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 274 \
    name B_4_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_5_read \
    op interface \
    ports { B_4_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
    name B_4_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_6_read \
    op interface \
    ports { B_4_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 276 \
    name B_4_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_7_read \
    op interface \
    ports { B_4_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 277 \
    name B_4_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_8_read \
    op interface \
    ports { B_4_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 278 \
    name B_4_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_4_9_read \
    op interface \
    ports { B_4_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 279 \
    name B_5_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_0_read \
    op interface \
    ports { B_5_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 280 \
    name B_5_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_1_read \
    op interface \
    ports { B_5_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 281 \
    name B_5_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_2_read \
    op interface \
    ports { B_5_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 282 \
    name B_5_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_3_read \
    op interface \
    ports { B_5_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 283 \
    name B_5_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_4_read \
    op interface \
    ports { B_5_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 284 \
    name B_5_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_5_read \
    op interface \
    ports { B_5_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 285 \
    name B_5_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_6_read \
    op interface \
    ports { B_5_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 286 \
    name B_5_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_7_read \
    op interface \
    ports { B_5_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 287 \
    name B_5_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_8_read \
    op interface \
    ports { B_5_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 288 \
    name B_5_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_5_9_read \
    op interface \
    ports { B_5_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 289 \
    name B_6_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_0_read \
    op interface \
    ports { B_6_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 290 \
    name B_6_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_1_read \
    op interface \
    ports { B_6_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 291 \
    name B_6_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_2_read \
    op interface \
    ports { B_6_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 292 \
    name B_6_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_3_read \
    op interface \
    ports { B_6_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 293 \
    name B_6_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_4_read \
    op interface \
    ports { B_6_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 294 \
    name B_6_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_5_read \
    op interface \
    ports { B_6_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 295 \
    name B_6_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_6_read \
    op interface \
    ports { B_6_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 296 \
    name B_6_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_7_read \
    op interface \
    ports { B_6_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 297 \
    name B_6_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_8_read \
    op interface \
    ports { B_6_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 298 \
    name B_6_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_6_9_read \
    op interface \
    ports { B_6_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 299 \
    name B_7_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_0_read \
    op interface \
    ports { B_7_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 300 \
    name B_7_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_1_read \
    op interface \
    ports { B_7_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 301 \
    name B_7_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_2_read \
    op interface \
    ports { B_7_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 302 \
    name B_7_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_3_read \
    op interface \
    ports { B_7_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 303 \
    name B_7_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_4_read \
    op interface \
    ports { B_7_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 304 \
    name B_7_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_5_read \
    op interface \
    ports { B_7_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 305 \
    name B_7_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_6_read \
    op interface \
    ports { B_7_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 306 \
    name B_7_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_7_read \
    op interface \
    ports { B_7_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 307 \
    name B_7_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_8_read \
    op interface \
    ports { B_7_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 308 \
    name B_7_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_7_9_read \
    op interface \
    ports { B_7_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 309 \
    name B_8_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_0_read \
    op interface \
    ports { B_8_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 310 \
    name B_8_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_1_read \
    op interface \
    ports { B_8_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 311 \
    name B_8_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_2_read \
    op interface \
    ports { B_8_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 312 \
    name B_8_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_3_read \
    op interface \
    ports { B_8_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 313 \
    name B_8_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_4_read \
    op interface \
    ports { B_8_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 314 \
    name B_8_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_5_read \
    op interface \
    ports { B_8_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 315 \
    name B_8_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_6_read \
    op interface \
    ports { B_8_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 316 \
    name B_8_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_7_read \
    op interface \
    ports { B_8_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 317 \
    name B_8_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_8_read \
    op interface \
    ports { B_8_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 318 \
    name B_8_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_8_9_read \
    op interface \
    ports { B_8_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 319 \
    name B_9_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_0_read \
    op interface \
    ports { B_9_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 320 \
    name B_9_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_1_read \
    op interface \
    ports { B_9_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 321 \
    name B_9_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_2_read \
    op interface \
    ports { B_9_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 322 \
    name B_9_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_3_read \
    op interface \
    ports { B_9_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 323 \
    name B_9_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_4_read \
    op interface \
    ports { B_9_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 324 \
    name B_9_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_5_read \
    op interface \
    ports { B_9_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
    name B_9_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_6_read \
    op interface \
    ports { B_9_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 326 \
    name B_9_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_7_read \
    op interface \
    ports { B_9_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
    name B_9_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_8_read \
    op interface \
    ports { B_9_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 328 \
    name B_9_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_9_9_read \
    op interface \
    ports { B_9_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 329 \
    name out_0_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_0_read \
    op interface \
    ports { out_0_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 330 \
    name out_0_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_1_read \
    op interface \
    ports { out_0_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 331 \
    name out_0_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_2_read \
    op interface \
    ports { out_0_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 332 \
    name out_0_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_3_read \
    op interface \
    ports { out_0_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 333 \
    name out_0_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_4_read \
    op interface \
    ports { out_0_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 334 \
    name out_0_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_5_read \
    op interface \
    ports { out_0_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 335 \
    name out_0_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_6_read \
    op interface \
    ports { out_0_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 336 \
    name out_0_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_7_read \
    op interface \
    ports { out_0_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 337 \
    name out_0_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_8_read \
    op interface \
    ports { out_0_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 338 \
    name out_0_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_0_9_read \
    op interface \
    ports { out_0_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 339 \
    name out_1_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_0_read \
    op interface \
    ports { out_1_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 340 \
    name out_1_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_1_read \
    op interface \
    ports { out_1_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 341 \
    name out_1_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_2_read \
    op interface \
    ports { out_1_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 342 \
    name out_1_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_3_read \
    op interface \
    ports { out_1_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 343 \
    name out_1_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_4_read \
    op interface \
    ports { out_1_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 344 \
    name out_1_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_5_read \
    op interface \
    ports { out_1_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 345 \
    name out_1_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_6_read \
    op interface \
    ports { out_1_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 346 \
    name out_1_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_7_read \
    op interface \
    ports { out_1_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 347 \
    name out_1_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_8_read \
    op interface \
    ports { out_1_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 348 \
    name out_1_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_1_9_read \
    op interface \
    ports { out_1_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 349 \
    name out_2_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_0_read \
    op interface \
    ports { out_2_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 350 \
    name out_2_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_1_read \
    op interface \
    ports { out_2_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 351 \
    name out_2_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_2_read \
    op interface \
    ports { out_2_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 352 \
    name out_2_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_3_read \
    op interface \
    ports { out_2_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 353 \
    name out_2_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_4_read \
    op interface \
    ports { out_2_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 354 \
    name out_2_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_5_read \
    op interface \
    ports { out_2_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 355 \
    name out_2_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_6_read \
    op interface \
    ports { out_2_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 356 \
    name out_2_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_7_read \
    op interface \
    ports { out_2_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 357 \
    name out_2_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_8_read \
    op interface \
    ports { out_2_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 358 \
    name out_2_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_2_9_read \
    op interface \
    ports { out_2_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 359 \
    name out_3_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_0_read \
    op interface \
    ports { out_3_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 360 \
    name out_3_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_1_read \
    op interface \
    ports { out_3_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 361 \
    name out_3_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_2_read \
    op interface \
    ports { out_3_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 362 \
    name out_3_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_3_read \
    op interface \
    ports { out_3_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 363 \
    name out_3_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_4_read \
    op interface \
    ports { out_3_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 364 \
    name out_3_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_5_read \
    op interface \
    ports { out_3_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 365 \
    name out_3_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_6_read \
    op interface \
    ports { out_3_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 366 \
    name out_3_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_7_read \
    op interface \
    ports { out_3_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
    name out_3_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_8_read \
    op interface \
    ports { out_3_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 368 \
    name out_3_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_3_9_read \
    op interface \
    ports { out_3_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 369 \
    name out_4_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_0_read \
    op interface \
    ports { out_4_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 370 \
    name out_4_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_1_read \
    op interface \
    ports { out_4_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 371 \
    name out_4_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_2_read \
    op interface \
    ports { out_4_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 372 \
    name out_4_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_3_read \
    op interface \
    ports { out_4_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 373 \
    name out_4_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_4_read \
    op interface \
    ports { out_4_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 374 \
    name out_4_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_5_read \
    op interface \
    ports { out_4_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 375 \
    name out_4_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_6_read \
    op interface \
    ports { out_4_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 376 \
    name out_4_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_7_read \
    op interface \
    ports { out_4_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 377 \
    name out_4_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_8_read \
    op interface \
    ports { out_4_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 378 \
    name out_4_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_4_9_read \
    op interface \
    ports { out_4_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 379 \
    name out_5_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_0_read \
    op interface \
    ports { out_5_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 380 \
    name out_5_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_1_read \
    op interface \
    ports { out_5_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 381 \
    name out_5_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_2_read \
    op interface \
    ports { out_5_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 382 \
    name out_5_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_3_read \
    op interface \
    ports { out_5_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 383 \
    name out_5_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_4_read \
    op interface \
    ports { out_5_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 384 \
    name out_5_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_5_read \
    op interface \
    ports { out_5_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 385 \
    name out_5_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_6_read \
    op interface \
    ports { out_5_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 386 \
    name out_5_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_7_read \
    op interface \
    ports { out_5_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 387 \
    name out_5_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_8_read \
    op interface \
    ports { out_5_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 388 \
    name out_5_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_5_9_read \
    op interface \
    ports { out_5_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 389 \
    name out_6_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_0_read \
    op interface \
    ports { out_6_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
    name out_6_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_1_read \
    op interface \
    ports { out_6_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 391 \
    name out_6_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_2_read \
    op interface \
    ports { out_6_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 392 \
    name out_6_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_3_read \
    op interface \
    ports { out_6_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 393 \
    name out_6_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_4_read \
    op interface \
    ports { out_6_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 394 \
    name out_6_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_5_read \
    op interface \
    ports { out_6_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 395 \
    name out_6_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_6_read \
    op interface \
    ports { out_6_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 396 \
    name out_6_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_7_read \
    op interface \
    ports { out_6_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 397 \
    name out_6_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_8_read \
    op interface \
    ports { out_6_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 398 \
    name out_6_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_6_9_read \
    op interface \
    ports { out_6_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
    name out_7_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_0_read \
    op interface \
    ports { out_7_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 400 \
    name out_7_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_1_read \
    op interface \
    ports { out_7_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 401 \
    name out_7_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_2_read \
    op interface \
    ports { out_7_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 402 \
    name out_7_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_3_read \
    op interface \
    ports { out_7_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 403 \
    name out_7_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_4_read \
    op interface \
    ports { out_7_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 404 \
    name out_7_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_5_read \
    op interface \
    ports { out_7_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 405 \
    name out_7_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_6_read \
    op interface \
    ports { out_7_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 406 \
    name out_7_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_7_read \
    op interface \
    ports { out_7_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 407 \
    name out_7_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_8_read \
    op interface \
    ports { out_7_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 408 \
    name out_7_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_7_9_read \
    op interface \
    ports { out_7_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 409 \
    name out_8_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_0_read \
    op interface \
    ports { out_8_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 410 \
    name out_8_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_1_read \
    op interface \
    ports { out_8_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 411 \
    name out_8_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_2_read \
    op interface \
    ports { out_8_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 412 \
    name out_8_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_3_read \
    op interface \
    ports { out_8_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 413 \
    name out_8_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_4_read \
    op interface \
    ports { out_8_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 414 \
    name out_8_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_5_read \
    op interface \
    ports { out_8_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 415 \
    name out_8_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_6_read \
    op interface \
    ports { out_8_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 416 \
    name out_8_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_7_read \
    op interface \
    ports { out_8_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 417 \
    name out_8_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_8_read \
    op interface \
    ports { out_8_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 418 \
    name out_8_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_8_9_read \
    op interface \
    ports { out_8_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 419 \
    name out_9_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_0_read \
    op interface \
    ports { out_9_0_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 420 \
    name out_9_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_1_read \
    op interface \
    ports { out_9_1_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 421 \
    name out_9_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_2_read \
    op interface \
    ports { out_9_2_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 422 \
    name out_9_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_3_read \
    op interface \
    ports { out_9_3_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 423 \
    name out_9_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_4_read \
    op interface \
    ports { out_9_4_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 424 \
    name out_9_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_5_read \
    op interface \
    ports { out_9_5_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 425 \
    name out_9_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_6_read \
    op interface \
    ports { out_9_6_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 426 \
    name out_9_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_7_read \
    op interface \
    ports { out_9_7_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 427 \
    name out_9_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_8_read \
    op interface \
    ports { out_9_8_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 428 \
    name out_9_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_9_9_read \
    op interface \
    ports { out_9_9_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 429 \
    name ii \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ii \
    op interface \
    ports { ii { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 430 \
    name jj \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_jj \
    op interface \
    ports { jj { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


