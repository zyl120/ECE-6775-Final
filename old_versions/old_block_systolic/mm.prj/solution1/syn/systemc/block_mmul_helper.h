// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _block_mmul_helper_HH_
#define _block_mmul_helper_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "block_mmul_mac_mubkb.h"

namespace ap_rtl {

struct block_mmul_helper : public sc_module {
    // Port declarations 30
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<16> > A_q0;
    sc_out< sc_lv<14> > A_address1;
    sc_out< sc_logic > A_ce1;
    sc_in< sc_lv<16> > A_q1;
    sc_out< sc_lv<14> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<16> > B_q0;
    sc_out< sc_lv<14> > B_address1;
    sc_out< sc_logic > B_ce1;
    sc_in< sc_lv<16> > B_q1;
    sc_out< sc_lv<14> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<16> > out_r_d0;
    sc_in< sc_lv<16> > out_r_q0;
    sc_out< sc_lv<14> > out_r_address1;
    sc_out< sc_logic > out_r_ce1;
    sc_out< sc_logic > out_r_we1;
    sc_out< sc_lv<16> > out_r_d1;
    sc_in< sc_lv<16> > out_r_q1;
    sc_in< sc_lv<7> > ii;
    sc_in< sc_lv<7> > jj;


    // Module declarations
    block_mmul_helper(sc_module_name name);
    SC_HAS_PROCESS(block_mmul_helper);

    ~block_mmul_helper();

    sc_trace_file* mVcdFile;

    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U1;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U2;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U3;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U4;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U5;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U6;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U7;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U8;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U9;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U10;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U11;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U12;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U13;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U14;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U15;
    block_mmul_mac_mubkb<1,1,16,16,16,16>* block_mmul_mac_mubkb_U16;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > reg_286;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln14_reg_1042;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > reg_290;
    sc_signal< sc_lv<1> > icmp_ln15_fu_308_p2;
    sc_signal< sc_lv<1> > icmp_ln15_reg_879;
    sc_signal< sc_lv<14> > mul_ln15_fu_318_p2;
    sc_signal< sc_lv<14> > mul_ln15_reg_884;
    sc_signal< sc_lv<14> > zext_ln18_fu_324_p1;
    sc_signal< sc_lv<14> > zext_ln18_reg_889;
    sc_signal< sc_lv<14> > out_addr_reg_894;
    sc_signal< sc_lv<1> > icmp_ln16_fu_345_p2;
    sc_signal< sc_lv<1> > icmp_ln16_reg_899;
    sc_signal< sc_lv<14> > zext_ln18_2_fu_351_p1;
    sc_signal< sc_lv<14> > zext_ln18_2_reg_904;
    sc_signal< sc_lv<14> > out_addr_1_reg_909;
    sc_signal< sc_lv<1> > icmp_ln16_1_fu_372_p2;
    sc_signal< sc_lv<1> > icmp_ln16_1_reg_914;
    sc_signal< sc_lv<14> > zext_ln18_4_fu_378_p1;
    sc_signal< sc_lv<14> > zext_ln18_4_reg_919;
    sc_signal< sc_lv<14> > out_addr_2_reg_924;
    sc_signal< sc_lv<1> > icmp_ln16_2_fu_399_p2;
    sc_signal< sc_lv<1> > icmp_ln16_2_reg_929;
    sc_signal< sc_lv<14> > zext_ln18_6_fu_405_p1;
    sc_signal< sc_lv<14> > zext_ln18_6_reg_934;
    sc_signal< sc_lv<14> > out_addr_3_reg_939;
    sc_signal< sc_lv<1> > icmp_ln15_1_fu_426_p2;
    sc_signal< sc_lv<1> > icmp_ln15_1_reg_944;
    sc_signal< sc_lv<14> > mul_ln15_1_fu_436_p2;
    sc_signal< sc_lv<14> > mul_ln15_1_reg_949;
    sc_signal< sc_lv<14> > out_addr_4_reg_954;
    sc_signal< sc_lv<14> > out_addr_5_reg_959;
    sc_signal< sc_lv<14> > out_addr_6_reg_964;
    sc_signal< sc_lv<14> > out_addr_7_reg_969;
    sc_signal< sc_lv<1> > icmp_ln15_2_fu_492_p2;
    sc_signal< sc_lv<1> > icmp_ln15_2_reg_974;
    sc_signal< sc_lv<14> > mul_ln15_2_fu_502_p2;
    sc_signal< sc_lv<14> > mul_ln15_2_reg_979;
    sc_signal< sc_lv<14> > out_addr_8_reg_984;
    sc_signal< sc_lv<14> > out_addr_9_reg_989;
    sc_signal< sc_lv<14> > out_addr_10_reg_994;
    sc_signal< sc_lv<14> > out_addr_11_reg_999;
    sc_signal< sc_lv<1> > icmp_ln15_3_fu_558_p2;
    sc_signal< sc_lv<1> > icmp_ln15_3_reg_1004;
    sc_signal< sc_lv<14> > mul_ln15_3_fu_568_p2;
    sc_signal< sc_lv<14> > mul_ln15_3_reg_1009;
    sc_signal< sc_lv<14> > out_addr_12_reg_1014;
    sc_signal< sc_lv<14> > out_addr_13_reg_1019;
    sc_signal< sc_lv<14> > out_addr_14_reg_1024;
    sc_signal< sc_lv<14> > out_addr_15_reg_1029;
    sc_signal< sc_lv<7> > k_fu_624_p2;
    sc_signal< sc_lv<7> > k_reg_1037;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln14_fu_630_p2;
    sc_signal< sc_lv<1> > icmp_ln10_fu_618_p2;
    sc_signal< sc_lv<14> > add_ln15_5_fu_660_p2;
    sc_signal< sc_lv<14> > add_ln15_5_reg_1060;
    sc_signal< sc_lv<14> > add_ln15_6_fu_665_p2;
    sc_signal< sc_lv<14> > add_ln15_6_reg_1065;
    sc_signal< sc_lv<14> > add_ln16_5_fu_690_p2;
    sc_signal< sc_lv<14> > add_ln16_5_reg_1080;
    sc_signal< sc_lv<14> > add_ln16_6_fu_695_p2;
    sc_signal< sc_lv<14> > add_ln16_6_reg_1085;
    sc_signal< sc_lv<16> > select_ln15_fu_716_p3;
    sc_signal< sc_lv<16> > select_ln15_reg_1110;
    sc_signal< sc_lv<16> > B_load_reg_1118;
    sc_signal< sc_lv<16> > select_ln16_fu_723_p3;
    sc_signal< sc_lv<16> > select_ln16_reg_1126;
    sc_signal< sc_lv<16> > select_ln15_1_fu_730_p3;
    sc_signal< sc_lv<16> > select_ln15_1_reg_1134;
    sc_signal< sc_lv<16> > grp_fu_785_p3;
    sc_signal< sc_lv<16> > add_ln17_reg_1142;
    sc_signal< sc_lv<16> > grp_fu_791_p3;
    sc_signal< sc_lv<16> > add_ln17_1_reg_1147;
    sc_signal< sc_lv<16> > select_ln16_1_fu_737_p3;
    sc_signal< sc_lv<16> > select_ln16_1_reg_1152;
    sc_signal< sc_lv<16> > select_ln16_2_fu_744_p3;
    sc_signal< sc_lv<16> > select_ln16_2_reg_1160;
    sc_signal< sc_lv<16> > select_ln15_2_fu_751_p3;
    sc_signal< sc_lv<16> > select_ln15_2_reg_1168;
    sc_signal< sc_lv<16> > select_ln15_3_fu_758_p3;
    sc_signal< sc_lv<16> > select_ln15_3_reg_1176;
    sc_signal< sc_lv<16> > grp_fu_797_p3;
    sc_signal< sc_lv<16> > add_ln17_2_reg_1184;
    sc_signal< sc_lv<16> > grp_fu_803_p3;
    sc_signal< sc_lv<16> > add_ln17_3_reg_1189;
    sc_signal< sc_lv<16> > grp_fu_809_p3;
    sc_signal< sc_lv<16> > add_ln17_4_reg_1194;
    sc_signal< sc_lv<16> > grp_fu_815_p3;
    sc_signal< sc_lv<16> > add_ln17_5_reg_1199;
    sc_signal< sc_lv<16> > grp_fu_821_p3;
    sc_signal< sc_lv<16> > add_ln17_6_reg_1204;
    sc_signal< sc_lv<16> > grp_fu_827_p3;
    sc_signal< sc_lv<16> > add_ln17_7_reg_1209;
    sc_signal< sc_lv<16> > grp_fu_833_p3;
    sc_signal< sc_lv<16> > add_ln17_8_reg_1214;
    sc_signal< sc_lv<16> > grp_fu_839_p3;
    sc_signal< sc_lv<16> > add_ln17_9_reg_1219;
    sc_signal< sc_lv<16> > grp_fu_845_p3;
    sc_signal< sc_lv<16> > add_ln17_10_reg_1224;
    sc_signal< sc_lv<16> > grp_fu_851_p3;
    sc_signal< sc_lv<16> > add_ln17_11_reg_1229;
    sc_signal< sc_lv<16> > grp_fu_857_p3;
    sc_signal< sc_lv<16> > add_ln17_12_reg_1234;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<16> > grp_fu_863_p3;
    sc_signal< sc_lv<16> > add_ln17_13_reg_1239;
    sc_signal< sc_lv<16> > select_ln14_14_fu_765_p3;
    sc_signal< sc_lv<16> > select_ln14_14_reg_1244;
    sc_signal< sc_lv<16> > select_ln14_15_fu_772_p3;
    sc_signal< sc_lv<16> > select_ln14_15_reg_1249;
    sc_signal< sc_lv<16> > grp_fu_869_p3;
    sc_signal< sc_lv<16> > add_ln17_14_reg_1254;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<16> > grp_fu_874_p3;
    sc_signal< sc_lv<16> > add_ln17_15_reg_1259;
    sc_signal< sc_lv<14> > add_ln16_7_fu_779_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<7> > k_0_reg_263;
    sc_signal< sc_lv<14> > phi_mul_reg_274;
    sc_signal< sc_lv<64> > zext_ln18_1_fu_334_p1;
    sc_signal< sc_lv<64> > zext_ln18_3_fu_361_p1;
    sc_signal< sc_lv<64> > zext_ln18_5_fu_388_p1;
    sc_signal< sc_lv<64> > zext_ln18_7_fu_415_p1;
    sc_signal< sc_lv<64> > zext_ln18_8_fu_448_p1;
    sc_signal< sc_lv<64> > zext_ln18_9_fu_459_p1;
    sc_signal< sc_lv<64> > zext_ln18_10_fu_470_p1;
    sc_signal< sc_lv<64> > zext_ln18_11_fu_481_p1;
    sc_signal< sc_lv<64> > zext_ln18_12_fu_514_p1;
    sc_signal< sc_lv<64> > zext_ln18_13_fu_525_p1;
    sc_signal< sc_lv<64> > zext_ln18_14_fu_536_p1;
    sc_signal< sc_lv<64> > zext_ln18_15_fu_547_p1;
    sc_signal< sc_lv<64> > zext_ln18_16_fu_580_p1;
    sc_signal< sc_lv<64> > zext_ln18_17_fu_591_p1;
    sc_signal< sc_lv<64> > zext_ln18_18_fu_602_p1;
    sc_signal< sc_lv<64> > zext_ln18_19_fu_613_p1;
    sc_signal< sc_lv<64> > zext_ln15_5_fu_645_p1;
    sc_signal< sc_lv<64> > zext_ln15_6_fu_655_p1;
    sc_signal< sc_lv<64> > zext_ln16_fu_675_p1;
    sc_signal< sc_lv<64> > zext_ln16_1_fu_685_p1;
    sc_signal< sc_lv<64> > zext_ln15_7_fu_700_p1;
    sc_signal< sc_lv<64> > zext_ln15_8_fu_704_p1;
    sc_signal< sc_lv<64> > zext_ln16_2_fu_708_p1;
    sc_signal< sc_lv<64> > zext_ln16_3_fu_712_p1;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<7> > mul_ln15_fu_318_p0;
    sc_signal< sc_lv<14> > add_ln18_fu_328_p2;
    sc_signal< sc_lv<7> > add_ln16_fu_339_p2;
    sc_signal< sc_lv<14> > add_ln18_1_fu_355_p2;
    sc_signal< sc_lv<7> > add_ln16_1_fu_366_p2;
    sc_signal< sc_lv<14> > add_ln18_2_fu_382_p2;
    sc_signal< sc_lv<7> > add_ln16_2_fu_393_p2;
    sc_signal< sc_lv<14> > add_ln18_3_fu_409_p2;
    sc_signal< sc_lv<7> > add_ln15_fu_420_p2;
    sc_signal< sc_lv<7> > mul_ln15_1_fu_436_p0;
    sc_signal< sc_lv<14> > add_ln18_4_fu_442_p2;
    sc_signal< sc_lv<14> > add_ln18_5_fu_453_p2;
    sc_signal< sc_lv<14> > add_ln18_6_fu_464_p2;
    sc_signal< sc_lv<14> > add_ln18_7_fu_475_p2;
    sc_signal< sc_lv<7> > add_ln15_1_fu_486_p2;
    sc_signal< sc_lv<7> > mul_ln15_2_fu_502_p0;
    sc_signal< sc_lv<14> > add_ln18_8_fu_508_p2;
    sc_signal< sc_lv<14> > add_ln18_9_fu_519_p2;
    sc_signal< sc_lv<14> > add_ln18_10_fu_530_p2;
    sc_signal< sc_lv<14> > add_ln18_11_fu_541_p2;
    sc_signal< sc_lv<7> > add_ln15_2_fu_552_p2;
    sc_signal< sc_lv<7> > mul_ln15_3_fu_568_p0;
    sc_signal< sc_lv<14> > add_ln18_12_fu_574_p2;
    sc_signal< sc_lv<14> > add_ln18_13_fu_585_p2;
    sc_signal< sc_lv<14> > add_ln18_14_fu_596_p2;
    sc_signal< sc_lv<14> > add_ln18_15_fu_607_p2;
    sc_signal< sc_lv<14> > zext_ln15_4_fu_636_p1;
    sc_signal< sc_lv<14> > add_ln15_3_fu_640_p2;
    sc_signal< sc_lv<14> > add_ln15_4_fu_650_p2;
    sc_signal< sc_lv<14> > add_ln16_3_fu_670_p2;
    sc_signal< sc_lv<14> > add_ln16_4_fu_680_p2;
    sc_signal< sc_lv<16> > grp_fu_294_p3;
    sc_signal< sc_lv<16> > grp_fu_301_p3;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    sc_signal< sc_lv<14> > mul_ln15_1_fu_436_p00;
    sc_signal< sc_lv<14> > mul_ln15_2_fu_502_p00;
    sc_signal< sc_lv<14> > mul_ln15_3_fu_568_p00;
    sc_signal< sc_lv<14> > mul_ln15_fu_318_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_state2;
    static const sc_lv<18> ap_ST_fsm_state3;
    static const sc_lv<18> ap_ST_fsm_state4;
    static const sc_lv<18> ap_ST_fsm_state5;
    static const sc_lv<18> ap_ST_fsm_state6;
    static const sc_lv<18> ap_ST_fsm_state7;
    static const sc_lv<18> ap_ST_fsm_state8;
    static const sc_lv<18> ap_ST_fsm_state9;
    static const sc_lv<18> ap_ST_fsm_state10;
    static const sc_lv<18> ap_ST_fsm_state11;
    static const sc_lv<18> ap_ST_fsm_state12;
    static const sc_lv<18> ap_ST_fsm_state13;
    static const sc_lv<18> ap_ST_fsm_state14;
    static const sc_lv<18> ap_ST_fsm_state15;
    static const sc_lv<18> ap_ST_fsm_state16;
    static const sc_lv<18> ap_ST_fsm_state17;
    static const sc_lv<18> ap_ST_fsm_state18;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<14> ap_const_lv14_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<7> ap_const_lv7_2;
    static const sc_lv<7> ap_const_lv7_3;
    static const sc_lv<32> ap_const_lv32_11;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_address1();
    void thread_A_ce0();
    void thread_A_ce1();
    void thread_B_address0();
    void thread_B_address1();
    void thread_B_ce0();
    void thread_B_ce1();
    void thread_add_ln15_1_fu_486_p2();
    void thread_add_ln15_2_fu_552_p2();
    void thread_add_ln15_3_fu_640_p2();
    void thread_add_ln15_4_fu_650_p2();
    void thread_add_ln15_5_fu_660_p2();
    void thread_add_ln15_6_fu_665_p2();
    void thread_add_ln15_fu_420_p2();
    void thread_add_ln16_1_fu_366_p2();
    void thread_add_ln16_2_fu_393_p2();
    void thread_add_ln16_3_fu_670_p2();
    void thread_add_ln16_4_fu_680_p2();
    void thread_add_ln16_5_fu_690_p2();
    void thread_add_ln16_6_fu_695_p2();
    void thread_add_ln16_7_fu_779_p2();
    void thread_add_ln16_fu_339_p2();
    void thread_add_ln18_10_fu_530_p2();
    void thread_add_ln18_11_fu_541_p2();
    void thread_add_ln18_12_fu_574_p2();
    void thread_add_ln18_13_fu_585_p2();
    void thread_add_ln18_14_fu_596_p2();
    void thread_add_ln18_15_fu_607_p2();
    void thread_add_ln18_1_fu_355_p2();
    void thread_add_ln18_2_fu_382_p2();
    void thread_add_ln18_3_fu_409_p2();
    void thread_add_ln18_4_fu_442_p2();
    void thread_add_ln18_5_fu_453_p2();
    void thread_add_ln18_6_fu_464_p2();
    void thread_add_ln18_7_fu_475_p2();
    void thread_add_ln18_8_fu_508_p2();
    void thread_add_ln18_9_fu_519_p2();
    void thread_add_ln18_fu_328_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_294_p3();
    void thread_grp_fu_301_p3();
    void thread_icmp_ln10_fu_618_p2();
    void thread_icmp_ln14_fu_630_p2();
    void thread_icmp_ln15_1_fu_426_p2();
    void thread_icmp_ln15_2_fu_492_p2();
    void thread_icmp_ln15_3_fu_558_p2();
    void thread_icmp_ln15_fu_308_p2();
    void thread_icmp_ln16_1_fu_372_p2();
    void thread_icmp_ln16_2_fu_399_p2();
    void thread_icmp_ln16_fu_345_p2();
    void thread_k_fu_624_p2();
    void thread_mul_ln15_1_fu_436_p0();
    void thread_mul_ln15_1_fu_436_p00();
    void thread_mul_ln15_1_fu_436_p2();
    void thread_mul_ln15_2_fu_502_p0();
    void thread_mul_ln15_2_fu_502_p00();
    void thread_mul_ln15_2_fu_502_p2();
    void thread_mul_ln15_3_fu_568_p0();
    void thread_mul_ln15_3_fu_568_p00();
    void thread_mul_ln15_3_fu_568_p2();
    void thread_mul_ln15_fu_318_p0();
    void thread_mul_ln15_fu_318_p00();
    void thread_mul_ln15_fu_318_p2();
    void thread_out_r_address0();
    void thread_out_r_address1();
    void thread_out_r_ce0();
    void thread_out_r_ce1();
    void thread_out_r_d0();
    void thread_out_r_d1();
    void thread_out_r_we0();
    void thread_out_r_we1();
    void thread_select_ln14_14_fu_765_p3();
    void thread_select_ln14_15_fu_772_p3();
    void thread_select_ln15_1_fu_730_p3();
    void thread_select_ln15_2_fu_751_p3();
    void thread_select_ln15_3_fu_758_p3();
    void thread_select_ln15_fu_716_p3();
    void thread_select_ln16_1_fu_737_p3();
    void thread_select_ln16_2_fu_744_p3();
    void thread_select_ln16_fu_723_p3();
    void thread_zext_ln15_4_fu_636_p1();
    void thread_zext_ln15_5_fu_645_p1();
    void thread_zext_ln15_6_fu_655_p1();
    void thread_zext_ln15_7_fu_700_p1();
    void thread_zext_ln15_8_fu_704_p1();
    void thread_zext_ln16_1_fu_685_p1();
    void thread_zext_ln16_2_fu_708_p1();
    void thread_zext_ln16_3_fu_712_p1();
    void thread_zext_ln16_fu_675_p1();
    void thread_zext_ln18_10_fu_470_p1();
    void thread_zext_ln18_11_fu_481_p1();
    void thread_zext_ln18_12_fu_514_p1();
    void thread_zext_ln18_13_fu_525_p1();
    void thread_zext_ln18_14_fu_536_p1();
    void thread_zext_ln18_15_fu_547_p1();
    void thread_zext_ln18_16_fu_580_p1();
    void thread_zext_ln18_17_fu_591_p1();
    void thread_zext_ln18_18_fu_602_p1();
    void thread_zext_ln18_19_fu_613_p1();
    void thread_zext_ln18_1_fu_334_p1();
    void thread_zext_ln18_2_fu_351_p1();
    void thread_zext_ln18_3_fu_361_p1();
    void thread_zext_ln18_4_fu_378_p1();
    void thread_zext_ln18_5_fu_388_p1();
    void thread_zext_ln18_6_fu_405_p1();
    void thread_zext_ln18_7_fu_415_p1();
    void thread_zext_ln18_8_fu_448_p1();
    void thread_zext_ln18_9_fu_459_p1();
    void thread_zext_ln18_fu_324_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
