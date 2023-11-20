#include "matrix_mult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mult::thread_a_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_19_fu_4313_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_17_fu_4283_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_15_fu_4253_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_13_fu_4223_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_11_fu_4193_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_9_fu_4163_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_7_fu_4133_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_5_fu_4103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_3_fu_4073_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_fu_4036_p1.read());
    } else {
        a_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_20_fu_4319_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_18_fu_4289_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_16_fu_4259_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_14_fu_4229_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_12_fu_4199_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_10_fu_4169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_8_fu_4139_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_6_fu_4109_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_4_fu_4079_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_2_fu_4042_p1.read());
    } else {
        a_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_0_ce0 = ap_const_logic_1;
    } else {
        a_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_0_ce1 = ap_const_logic_1;
    } else {
        a_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_19_fu_4313_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_17_fu_4283_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_15_fu_4253_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_13_fu_4223_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_11_fu_4193_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_9_fu_4163_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_7_fu_4133_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_5_fu_4103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_3_fu_4073_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_fu_4036_p1.read());
    } else {
        a_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_20_fu_4319_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_18_fu_4289_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_16_fu_4259_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_14_fu_4229_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_12_fu_4199_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_10_fu_4169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_8_fu_4139_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_6_fu_4109_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_4_fu_4079_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_2_fu_4042_p1.read());
    } else {
        a_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_1_ce0 = ap_const_logic_1;
    } else {
        a_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_1_ce1 = ap_const_logic_1;
    } else {
        a_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_0_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_0_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_0_address0 =  (sc_lv<4>) (zext_ln28_1_fu_4057_p1.read());
    } else {
        a_buff_0_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_0_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_0_we0 = ap_const_logic_1;
    } else {
        a_buff_0_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_10_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_10_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_10_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_10_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_10_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_10_we0 = ap_const_logic_1;
    } else {
        a_buff_0_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_11_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_11_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_11_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_11_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_11_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_11_we0 = ap_const_logic_1;
    } else {
        a_buff_0_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_12_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_12_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_12_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_12_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_12_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_12_we0 = ap_const_logic_1;
    } else {
        a_buff_0_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_13_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_13_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_13_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_13_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_13_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_13_we0 = ap_const_logic_1;
    } else {
        a_buff_0_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_14_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_14_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_14_address0 = a_buff_0_14_addr_reg_7120.read();
    } else {
        a_buff_0_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())))) {
        a_buff_0_14_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_14_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_14_we0 = ap_const_logic_1;
    } else {
        a_buff_0_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_15_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_15_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_15_address0 = a_buff_0_15_addr_reg_7140.read();
    } else {
        a_buff_0_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())))) {
        a_buff_0_15_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_15_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_15_we0 = ap_const_logic_1;
    } else {
        a_buff_0_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_16_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_16_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_16_address0 = a_buff_0_16_addr_reg_7150.read();
    } else {
        a_buff_0_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_16_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_16_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_16_we0 = ap_const_logic_1;
    } else {
        a_buff_0_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_17_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_17_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_17_address0 = a_buff_0_17_addr_reg_7160.read();
    } else {
        a_buff_0_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())))) {
        a_buff_0_17_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_17_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_17_we0 = ap_const_logic_1;
    } else {
        a_buff_0_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_18_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_0_18_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_18_address0 = a_buff_0_18_addr_reg_7170.read();
    } else {
        a_buff_0_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_18_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_18_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_18_we0 = ap_const_logic_1;
    } else {
        a_buff_0_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_19_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_19_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_19_address0 = a_buff_0_19_addr_reg_7180.read();
    } else {
        a_buff_0_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_19_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_19_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_19_we0 = ap_const_logic_1;
    } else {
        a_buff_0_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_1_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_1_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_1_address0 =  (sc_lv<4>) (zext_ln28_1_fu_4057_p1.read());
    } else {
        a_buff_0_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_1_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_1_we0 = ap_const_logic_1;
    } else {
        a_buff_0_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_2_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_2_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_2_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_2_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_2_we0 = ap_const_logic_1;
    } else {
        a_buff_0_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_3_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_3_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_3_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_3_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_3_we0 = ap_const_logic_1;
    } else {
        a_buff_0_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_4_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_4_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_4_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_4_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_4_we0 = ap_const_logic_1;
    } else {
        a_buff_0_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_5_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_5_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_5_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_5_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_5_we0 = ap_const_logic_1;
    } else {
        a_buff_0_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_6_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_6_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_6_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_6_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_6_we0 = ap_const_logic_1;
    } else {
        a_buff_0_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_7_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_7_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_7_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_7_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_7_we0 = ap_const_logic_1;
    } else {
        a_buff_0_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_8_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_8_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_8_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_8_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_8_we0 = ap_const_logic_1;
    } else {
        a_buff_0_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_9_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_0_9_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_9_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_0_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_0_9_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6726_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_9_we0 = ap_const_logic_1;
    } else {
        a_buff_0_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_0_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_0_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_0_address0 =  (sc_lv<4>) (zext_ln28_1_fu_4057_p1.read());
    } else {
        a_buff_1_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_0_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_0_we0 = ap_const_logic_1;
    } else {
        a_buff_1_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_10_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_10_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_10_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_10_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_10_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_10_we0 = ap_const_logic_1;
    } else {
        a_buff_1_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_11_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_11_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_11_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_11_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_11_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_11_we0 = ap_const_logic_1;
    } else {
        a_buff_1_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_12_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_12_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_12_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_12_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_12_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_12_we0 = ap_const_logic_1;
    } else {
        a_buff_1_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_13_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_13_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_13_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_13_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_13_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_13_we0 = ap_const_logic_1;
    } else {
        a_buff_1_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_14_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_14_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_14_address0 = a_buff_1_14_addr_reg_7125.read();
    } else {
        a_buff_1_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())))) {
        a_buff_1_14_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_14_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_14_we0 = ap_const_logic_1;
    } else {
        a_buff_1_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_15_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_15_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_15_address0 = a_buff_1_15_addr_reg_7145.read();
    } else {
        a_buff_1_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())))) {
        a_buff_1_15_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_15_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_15_we0 = ap_const_logic_1;
    } else {
        a_buff_1_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_16_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_16_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_16_address0 = a_buff_1_16_addr_reg_7155.read();
    } else {
        a_buff_1_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_16_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_16_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter2_reg.read()))) {
        a_buff_1_16_we0 = ap_const_logic_1;
    } else {
        a_buff_1_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_17_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_17_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_17_address0 = a_buff_1_17_addr_reg_7165.read();
    } else {
        a_buff_1_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())))) {
        a_buff_1_17_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_17_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter2_reg.read()))) {
        a_buff_1_17_we0 = ap_const_logic_1;
    } else {
        a_buff_1_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_18_address0 =  (sc_lv<4>) (zext_ln44_1_fu_5131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        a_buff_1_18_address0 =  (sc_lv<4>) (zext_ln44_fu_5119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_18_address0 = a_buff_1_18_addr_reg_7175.read();
    } else {
        a_buff_1_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter7_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_18_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_18_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter2_reg.read()))) {
        a_buff_1_18_we0 = ap_const_logic_1;
    } else {
        a_buff_1_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_19_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_19_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_19_address0 = a_buff_1_19_addr_reg_7185.read();
    } else {
        a_buff_1_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_19_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_19_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter2_reg.read()))) {
        a_buff_1_19_we0 = ap_const_logic_1;
    } else {
        a_buff_1_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_1_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_1_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_1_address0 =  (sc_lv<4>) (zext_ln28_1_fu_4057_p1.read());
    } else {
        a_buff_1_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_1_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_1_we0 = ap_const_logic_1;
    } else {
        a_buff_1_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_2_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_2_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_2_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_2_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_2_we0 = ap_const_logic_1;
    } else {
        a_buff_1_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_3_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_3_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_3_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_3_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_3_we0 = ap_const_logic_1;
    } else {
        a_buff_1_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_4_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_4_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_4_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_4_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_4_we0 = ap_const_logic_1;
    } else {
        a_buff_1_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_5_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_5_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_5_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_5_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_5_we0 = ap_const_logic_1;
    } else {
        a_buff_1_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_6_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_6_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_6_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_6_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_6_we0 = ap_const_logic_1;
    } else {
        a_buff_1_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_7_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_7_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_7_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_7_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_7_we0 = ap_const_logic_1;
    } else {
        a_buff_1_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_8_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_8_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_8_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_8_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_8_we0 = ap_const_logic_1;
    } else {
        a_buff_1_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_9_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7950.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        a_buff_1_9_address0 =  (sc_lv<4>) (zext_ln44_reg_7874.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_9_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6950.read());
    } else {
        a_buff_1_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_reg_7767_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_reg_7806_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln47_2_reg_7839_pp2_iter8_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())))) {
        a_buff_1_9_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6726_pp0_iter1_reg.read()))) {
        a_buff_1_9_we0 = ap_const_logic_1;
    } else {
        a_buff_1_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_add_ln28_10_fu_3912_p2() {
    add_ln28_10_fu_3912_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln28_11_fu_3929_p2() {
    add_ln28_11_fu_3929_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln28_12_fu_3946_p2() {
    add_ln28_12_fu_3946_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln28_13_fu_3963_p2() {
    add_ln28_13_fu_3963_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln28_14_fu_3980_p2() {
    add_ln28_14_fu_3980_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln28_15_fu_4002_p2() {
    add_ln28_15_fu_4002_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln28_16_fu_4019_p2() {
    add_ln28_16_fu_4019_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln28_17_fu_3693_p2() {
    add_ln28_17_fu_3693_p2 = (!ap_phi_mux_i_0_phi_fu_3548_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_3548_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln28_1_fu_3759_p2() {
    add_ln28_1_fu_3759_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln28_2_fu_3776_p2() {
    add_ln28_2_fu_3776_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln28_3_fu_3793_p2() {
    add_ln28_3_fu_3793_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln28_4_fu_3810_p2() {
    add_ln28_4_fu_3810_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln28_5_fu_3827_p2() {
    add_ln28_5_fu_3827_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln28_6_fu_3844_p2() {
    add_ln28_6_fu_3844_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln28_7_fu_3861_p2() {
    add_ln28_7_fu_3861_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln28_8_fu_3878_p2() {
    add_ln28_8_fu_3878_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln28_9_fu_3895_p2() {
    add_ln28_9_fu_3895_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6702.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln28_fu_3675_p2() {
    add_ln28_fu_3675_p2 = (!zext_ln28_21_fu_3671_p1.read().is_01() || !shl_ln_fu_3655_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln28_21_fu_3671_p1.read()) + sc_biguint<9>(shl_ln_fu_3655_p3.read()));
}

void matrix_mult::thread_add_ln35_10_fu_4612_p2() {
    add_ln35_10_fu_4612_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln35_11_fu_4629_p2() {
    add_ln35_11_fu_4629_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln35_12_fu_4646_p2() {
    add_ln35_12_fu_4646_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln35_13_fu_4663_p2() {
    add_ln35_13_fu_4663_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln35_14_fu_4680_p2() {
    add_ln35_14_fu_4680_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln35_15_fu_4702_p2() {
    add_ln35_15_fu_4702_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln35_16_fu_4719_p2() {
    add_ln35_16_fu_4719_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln35_17_fu_4393_p2() {
    add_ln35_17_fu_4393_p2 = (!ap_phi_mux_i1_0_phi_fu_3559_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_3559_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln35_1_fu_4459_p2() {
    add_ln35_1_fu_4459_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln35_2_fu_4476_p2() {
    add_ln35_2_fu_4476_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln35_3_fu_4493_p2() {
    add_ln35_3_fu_4493_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln35_4_fu_4510_p2() {
    add_ln35_4_fu_4510_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln35_5_fu_4527_p2() {
    add_ln35_5_fu_4527_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln35_6_fu_4544_p2() {
    add_ln35_6_fu_4544_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln35_7_fu_4561_p2() {
    add_ln35_7_fu_4561_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln35_8_fu_4578_p2() {
    add_ln35_8_fu_4578_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln35_9_fu_4595_p2() {
    add_ln35_9_fu_4595_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7239.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln35_fu_4375_p2() {
    add_ln35_fu_4375_p2 = (!zext_ln35_21_fu_4371_p1.read().is_01() || !shl_ln1_fu_4355_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln35_21_fu_4371_p1.read()) + sc_biguint<9>(shl_ln1_fu_4355_p3.read()));
}

void matrix_mult::thread_add_ln40_fu_5061_p2() {
    add_ln40_fu_5061_p2 = (!indvar_flatten_reg_3566.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten_reg_3566.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void matrix_mult::thread_add_ln44_1_fu_5935_p2() {
    add_ln44_1_fu_5935_p2 = (!add_ln44_fu_5926_p2.read().is_01() || !zext_ln44_4_fu_5932_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln44_fu_5926_p2.read()) + sc_biguint<9>(zext_ln44_4_fu_5932_p1.read()));
}

void matrix_mult::thread_add_ln44_fu_5926_p2() {
    add_ln44_fu_5926_p2 = (!zext_ln44_3_fu_5922_p1.read().is_01() || !zext_ln44_2_fu_5911_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln44_3_fu_5922_p1.read()) + sc_biguint<9>(zext_ln44_2_fu_5911_p1.read()));
}

void matrix_mult::thread_add_ln47_10_fu_5870_p2() {
    add_ln47_10_fu_5870_p2 = (!mul_ln47_5_reg_8857.read().is_01() || !mul_ln47_2_reg_8842.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_5_reg_8857.read()) + sc_biguint<32>(mul_ln47_2_reg_8842.read()));
}

void matrix_mult::thread_add_ln47_11_fu_5874_p2() {
    add_ln47_11_fu_5874_p2 = (!mul_ln47_3_reg_8847.read().is_01() || !add_ln47_10_fu_5870_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_3_reg_8847.read()) + sc_biguint<32>(add_ln47_10_fu_5870_p2.read()));
}

void matrix_mult::thread_add_ln47_12_fu_5879_p2() {
    add_ln47_12_fu_5879_p2 = (!add_ln47_9_fu_5866_p2.read().is_01() || !add_ln47_11_fu_5874_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_9_fu_5866_p2.read()) + sc_biguint<32>(add_ln47_11_fu_5874_p2.read()));
}

void matrix_mult::thread_add_ln47_13_fu_5885_p2() {
    add_ln47_13_fu_5885_p2 = (!mul_ln47_6_reg_8862.read().is_01() || !mul_ln47_4_reg_8852.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_6_reg_8862.read()) + sc_biguint<32>(mul_ln47_4_reg_8852.read()));
}

void matrix_mult::thread_add_ln47_14_fu_5889_p2() {
    add_ln47_14_fu_5889_p2 = (!mul_ln47_19_reg_8907.read().is_01() || !mul_ln47_7_reg_8867.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_19_reg_8907.read()) + sc_biguint<32>(mul_ln47_7_reg_8867.read()));
}

void matrix_mult::thread_add_ln47_15_fu_5893_p2() {
    add_ln47_15_fu_5893_p2 = (!mul_ln47_8_reg_8872.read().is_01() || !add_ln47_14_fu_5889_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_8_reg_8872.read()) + sc_biguint<32>(add_ln47_14_fu_5889_p2.read()));
}

void matrix_mult::thread_add_ln47_16_fu_5898_p2() {
    add_ln47_16_fu_5898_p2 = (!add_ln47_13_fu_5885_p2.read().is_01() || !add_ln47_15_fu_5893_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_13_fu_5885_p2.read()) + sc_biguint<32>(add_ln47_15_fu_5893_p2.read()));
}

void matrix_mult::thread_add_ln47_17_fu_5947_p2() {
    add_ln47_17_fu_5947_p2 = (!add_ln47_12_reg_8927.read().is_01() || !add_ln47_16_reg_8932.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_12_reg_8927.read()) + sc_biguint<32>(add_ln47_16_reg_8932.read()));
}

void matrix_mult::thread_add_ln47_18_fu_5951_p2() {
    add_ln47_18_fu_5951_p2 = (!add_ln47_8_reg_8922.read().is_01() || !add_ln47_17_fu_5947_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_8_reg_8922.read()) + sc_biguint<32>(add_ln47_17_fu_5947_p2.read()));
}

void matrix_mult::thread_add_ln47_1_fu_5828_p2() {
    add_ln47_1_fu_5828_p2 = (!mul_ln47_14_reg_8802.read().is_01() || !mul_ln47_15_reg_8807.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_14_reg_8802.read()) + sc_biguint<32>(mul_ln47_15_reg_8807.read()));
}

void matrix_mult::thread_add_ln47_2_fu_5832_p2() {
    add_ln47_2_fu_5832_p2 = (!mul_ln47_16_reg_8902.read().is_01() || !add_ln47_1_reg_8917.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_16_reg_8902.read()) + sc_biguint<32>(add_ln47_1_reg_8917.read()));
}

void matrix_mult::thread_add_ln47_3_fu_5836_p2() {
    add_ln47_3_fu_5836_p2 = (!add_ln47_reg_8912.read().is_01() || !add_ln47_2_fu_5832_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_reg_8912.read()) + sc_biguint<32>(add_ln47_2_fu_5832_p2.read()));
}

void matrix_mult::thread_add_ln47_4_fu_5841_p2() {
    add_ln47_4_fu_5841_p2 = (!mul_ln47_9_reg_8877.read().is_01() || !mul_ln47_10_reg_8882.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_9_reg_8877.read()) + sc_biguint<32>(mul_ln47_10_reg_8882.read()));
}

void matrix_mult::thread_add_ln47_5_fu_5845_p2() {
    add_ln47_5_fu_5845_p2 = (!mul_ln47_12_reg_8892.read().is_01() || !mul_ln47_13_reg_8897.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_12_reg_8892.read()) + sc_biguint<32>(mul_ln47_13_reg_8897.read()));
}

void matrix_mult::thread_add_ln47_6_fu_5849_p2() {
    add_ln47_6_fu_5849_p2 = (!mul_ln47_11_reg_8887.read().is_01() || !add_ln47_5_fu_5845_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_11_reg_8887.read()) + sc_biguint<32>(add_ln47_5_fu_5845_p2.read()));
}

void matrix_mult::thread_add_ln47_7_fu_5854_p2() {
    add_ln47_7_fu_5854_p2 = (!add_ln47_4_fu_5841_p2.read().is_01() || !add_ln47_6_fu_5849_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_4_fu_5841_p2.read()) + sc_biguint<32>(add_ln47_6_fu_5849_p2.read()));
}

void matrix_mult::thread_add_ln47_8_fu_5860_p2() {
    add_ln47_8_fu_5860_p2 = (!add_ln47_3_fu_5836_p2.read().is_01() || !add_ln47_7_fu_5854_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_3_fu_5836_p2.read()) + sc_biguint<32>(add_ln47_7_fu_5854_p2.read()));
}

void matrix_mult::thread_add_ln47_9_fu_5866_p2() {
    add_ln47_9_fu_5866_p2 = (!mul_ln47_1_reg_8837.read().is_01() || !mul_ln47_reg_8832.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_1_reg_8837.read()) + sc_biguint<32>(mul_ln47_reg_8832.read()));
}

void matrix_mult::thread_add_ln47_fu_5824_p2() {
    add_ln47_fu_5824_p2 = (!mul_ln47_18_reg_8822.read().is_01() || !mul_ln47_17_reg_8817.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_18_reg_8822.read()) + sc_biguint<32>(mul_ln47_17_reg_8817.read()));
}

void matrix_mult::thread_add_ln56_10_fu_6259_p2() {
    add_ln56_10_fu_6259_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln56_11_fu_6276_p2() {
    add_ln56_11_fu_6276_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln56_12_fu_6293_p2() {
    add_ln56_12_fu_6293_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln56_13_fu_6310_p2() {
    add_ln56_13_fu_6310_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln56_14_fu_6327_p2() {
    add_ln56_14_fu_6327_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln56_15_fu_6349_p2() {
    add_ln56_15_fu_6349_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln56_16_fu_6366_p2() {
    add_ln56_16_fu_6366_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln56_17_fu_6002_p2() {
    add_ln56_17_fu_6002_p2 = (!ap_phi_mux_i3_0_phi_fu_3604_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_3604_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln56_18_fu_6036_p2() {
    add_ln56_18_fu_6036_p2 = (!zext_ln56_21_fu_6032_p1.read().is_01() || !tmp_6_fu_6016_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln56_21_fu_6032_p1.read()) + sc_biguint<9>(tmp_6_fu_6016_p3.read()));
}

void matrix_mult::thread_add_ln56_19_fu_6427_p2() {
    add_ln56_19_fu_6427_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln56_1_fu_6106_p2() {
    add_ln56_1_fu_6106_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln56_20_fu_6438_p2() {
    add_ln56_20_fu_6438_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln56_21_fu_6454_p2() {
    add_ln56_21_fu_6454_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln56_22_fu_6465_p2() {
    add_ln56_22_fu_6465_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln56_23_fu_6481_p2() {
    add_ln56_23_fu_6481_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln56_24_fu_6492_p2() {
    add_ln56_24_fu_6492_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln56_25_fu_6513_p2() {
    add_ln56_25_fu_6513_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln56_26_fu_6524_p2() {
    add_ln56_26_fu_6524_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln56_27_fu_6545_p2() {
    add_ln56_27_fu_6545_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln56_28_fu_6556_p2() {
    add_ln56_28_fu_6556_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln56_29_fu_6577_p2() {
    add_ln56_29_fu_6577_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln56_2_fu_6123_p2() {
    add_ln56_2_fu_6123_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln56_30_fu_6588_p2() {
    add_ln56_30_fu_6588_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln56_31_fu_6609_p2() {
    add_ln56_31_fu_6609_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln56_32_fu_6620_p2() {
    add_ln56_32_fu_6620_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln56_33_fu_6641_p2() {
    add_ln56_33_fu_6641_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln56_34_fu_6652_p2() {
    add_ln56_34_fu_6652_p2 = (!add_ln56_18_reg_8976_pp3_iter1_reg.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8976_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln56_3_fu_6140_p2() {
    add_ln56_3_fu_6140_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln56_4_fu_6157_p2() {
    add_ln56_4_fu_6157_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln56_5_fu_6174_p2() {
    add_ln56_5_fu_6174_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln56_6_fu_6191_p2() {
    add_ln56_6_fu_6191_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln56_7_fu_6208_p2() {
    add_ln56_7_fu_6208_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln56_8_fu_6225_p2() {
    add_ln56_8_fu_6225_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln56_9_fu_6242_p2() {
    add_ln56_9_fu_6242_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8946.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln56_fu_5990_p2() {
    add_ln56_fu_5990_p2 = (!zext_ln56_fu_5986_p1.read().is_01() || !shl_ln2_fu_5970_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln56_fu_5986_p1.read()) + sc_biguint<9>(shl_ln2_fu_5970_p3.read()));
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[4];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[5];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[6];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[7];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[8];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[9];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[10];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[12];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[13];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[14];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage3() {
    ap_CS_fsm_pp1_stage3 = ap_CS_fsm.read()[15];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[16];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage5() {
    ap_CS_fsm_pp1_stage5 = ap_CS_fsm.read()[17];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage6() {
    ap_CS_fsm_pp1_stage6 = ap_CS_fsm.read()[18];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage7() {
    ap_CS_fsm_pp1_stage7 = ap_CS_fsm.read()[19];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage8() {
    ap_CS_fsm_pp1_stage8 = ap_CS_fsm.read()[20];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage9() {
    ap_CS_fsm_pp1_stage9 = ap_CS_fsm.read()[21];
}

void matrix_mult::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[23];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[25];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[26];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage10() {
    ap_CS_fsm_pp3_stage10 = ap_CS_fsm.read()[35];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage11() {
    ap_CS_fsm_pp3_stage11 = ap_CS_fsm.read()[36];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[27];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[28];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage4() {
    ap_CS_fsm_pp3_stage4 = ap_CS_fsm.read()[29];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage5() {
    ap_CS_fsm_pp3_stage5 = ap_CS_fsm.read()[30];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage6() {
    ap_CS_fsm_pp3_stage6 = ap_CS_fsm.read()[31];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage7() {
    ap_CS_fsm_pp3_stage7 = ap_CS_fsm.read()[32];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage8() {
    ap_CS_fsm_pp3_stage8 = ap_CS_fsm.read()[33];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage9() {
    ap_CS_fsm_pp3_stage9 = ap_CS_fsm.read()[34];
}

void matrix_mult::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matrix_mult::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[11];
}

void matrix_mult::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[22];
}

void matrix_mult::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[24];
}

void matrix_mult::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[37];
}

void matrix_mult::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage8() {
    ap_block_pp0_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage8_11001() {
    ap_block_pp0_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage8_subdone() {
    ap_block_pp0_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage9() {
    ap_block_pp0_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage9_11001() {
    ap_block_pp0_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp0_stage9_subdone() {
    ap_block_pp0_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage1_11001() {
    ap_block_pp1_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage2() {
    ap_block_pp1_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage2_11001() {
    ap_block_pp1_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage2_subdone() {
    ap_block_pp1_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage3() {
    ap_block_pp1_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage3_11001() {
    ap_block_pp1_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage3_subdone() {
    ap_block_pp1_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage4() {
    ap_block_pp1_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage4_11001() {
    ap_block_pp1_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage4_subdone() {
    ap_block_pp1_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage5() {
    ap_block_pp1_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage5_11001() {
    ap_block_pp1_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage5_subdone() {
    ap_block_pp1_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage6() {
    ap_block_pp1_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage6_11001() {
    ap_block_pp1_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage6_subdone() {
    ap_block_pp1_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage7() {
    ap_block_pp1_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage7_11001() {
    ap_block_pp1_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage7_subdone() {
    ap_block_pp1_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage8() {
    ap_block_pp1_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage8_11001() {
    ap_block_pp1_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage8_subdone() {
    ap_block_pp1_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage9() {
    ap_block_pp1_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage9_11001() {
    ap_block_pp1_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp1_stage9_subdone() {
    ap_block_pp1_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage1() {
    ap_block_pp3_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage10() {
    ap_block_pp3_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage10_11001() {
    ap_block_pp3_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage10_subdone() {
    ap_block_pp3_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage11() {
    ap_block_pp3_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage11_11001() {
    ap_block_pp3_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage11_subdone() {
    ap_block_pp3_stage11_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage1_11001() {
    ap_block_pp3_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage1_subdone() {
    ap_block_pp3_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage2() {
    ap_block_pp3_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage2_11001() {
    ap_block_pp3_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage2_subdone() {
    ap_block_pp3_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage3() {
    ap_block_pp3_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage3_11001() {
    ap_block_pp3_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage3_subdone() {
    ap_block_pp3_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage4() {
    ap_block_pp3_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage4_11001() {
    ap_block_pp3_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage4_subdone() {
    ap_block_pp3_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage5() {
    ap_block_pp3_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage5_11001() {
    ap_block_pp3_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage5_subdone() {
    ap_block_pp3_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage6() {
    ap_block_pp3_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage6_11001() {
    ap_block_pp3_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage6_subdone() {
    ap_block_pp3_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage7() {
    ap_block_pp3_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage7_11001() {
    ap_block_pp3_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage7_subdone() {
    ap_block_pp3_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage8() {
    ap_block_pp3_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage8_11001() {
    ap_block_pp3_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage8_subdone() {
    ap_block_pp3_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage9() {
    ap_block_pp3_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage9_11001() {
    ap_block_pp3_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp3_stage9_subdone() {
    ap_block_pp3_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state10_pp0_stage8_iter0() {
    ap_block_state10_pp0_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state11_pp0_stage9_iter0() {
    ap_block_state11_pp0_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state12_pp0_stage0_iter1() {
    ap_block_state12_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state13_pp0_stage1_iter1() {
    ap_block_state13_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state14_pp0_stage2_iter1() {
    ap_block_state14_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state15_pp0_stage3_iter1() {
    ap_block_state15_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state16_pp0_stage4_iter1() {
    ap_block_state16_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state17_pp0_stage5_iter1() {
    ap_block_state17_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state18_pp0_stage6_iter1() {
    ap_block_state18_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state19_pp0_stage7_iter1() {
    ap_block_state19_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state20_pp0_stage8_iter1() {
    ap_block_state20_pp0_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state21_pp0_stage9_iter1() {
    ap_block_state21_pp0_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state22_pp0_stage0_iter2() {
    ap_block_state22_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state23_pp0_stage1_iter2() {
    ap_block_state23_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state24_pp0_stage2_iter2() {
    ap_block_state24_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state26_pp1_stage0_iter0() {
    ap_block_state26_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state27_pp1_stage1_iter0() {
    ap_block_state27_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state28_pp1_stage2_iter0() {
    ap_block_state28_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state29_pp1_stage3_iter0() {
    ap_block_state29_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state30_pp1_stage4_iter0() {
    ap_block_state30_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state31_pp1_stage5_iter0() {
    ap_block_state31_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state32_pp1_stage6_iter0() {
    ap_block_state32_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state33_pp1_stage7_iter0() {
    ap_block_state33_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state34_pp1_stage8_iter0() {
    ap_block_state34_pp1_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state35_pp1_stage9_iter0() {
    ap_block_state35_pp1_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state36_pp1_stage0_iter1() {
    ap_block_state36_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state37_pp1_stage1_iter1() {
    ap_block_state37_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state38_pp1_stage2_iter1() {
    ap_block_state38_pp1_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state39_pp1_stage3_iter1() {
    ap_block_state39_pp1_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state40_pp1_stage4_iter1() {
    ap_block_state40_pp1_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state41_pp1_stage5_iter1() {
    ap_block_state41_pp1_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state42_pp1_stage6_iter1() {
    ap_block_state42_pp1_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state43_pp1_stage7_iter1() {
    ap_block_state43_pp1_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state44_pp1_stage8_iter1() {
    ap_block_state44_pp1_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state45_pp1_stage9_iter1() {
    ap_block_state45_pp1_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state46_pp1_stage0_iter2() {
    ap_block_state46_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state47_pp1_stage1_iter2() {
    ap_block_state47_pp1_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state48_pp1_stage2_iter2() {
    ap_block_state48_pp1_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state50_pp2_stage0_iter0() {
    ap_block_state50_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state51_pp2_stage0_iter1() {
    ap_block_state51_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state52_pp2_stage0_iter2() {
    ap_block_state52_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state53_pp2_stage0_iter3() {
    ap_block_state53_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state54_pp2_stage0_iter4() {
    ap_block_state54_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state55_pp2_stage0_iter5() {
    ap_block_state55_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state56_pp2_stage0_iter6() {
    ap_block_state56_pp2_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state57_pp2_stage0_iter7() {
    ap_block_state57_pp2_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state58_pp2_stage0_iter8() {
    ap_block_state58_pp2_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state59_pp2_stage0_iter9() {
    ap_block_state59_pp2_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state60_pp2_stage0_iter10() {
    ap_block_state60_pp2_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state61_pp2_stage0_iter11() {
    ap_block_state61_pp2_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state62_pp2_stage0_iter12() {
    ap_block_state62_pp2_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state63_pp2_stage0_iter13() {
    ap_block_state63_pp2_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state65_pp3_stage0_iter0() {
    ap_block_state65_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state66_pp3_stage1_iter0() {
    ap_block_state66_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state67_pp3_stage2_iter0() {
    ap_block_state67_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state68_pp3_stage3_iter0() {
    ap_block_state68_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state69_pp3_stage4_iter0() {
    ap_block_state69_pp3_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state70_pp3_stage5_iter0() {
    ap_block_state70_pp3_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state71_pp3_stage6_iter0() {
    ap_block_state71_pp3_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state72_pp3_stage7_iter0() {
    ap_block_state72_pp3_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state73_pp3_stage8_iter0() {
    ap_block_state73_pp3_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state74_pp3_stage9_iter0() {
    ap_block_state74_pp3_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state75_pp3_stage10_iter0() {
    ap_block_state75_pp3_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state76_pp3_stage11_iter0() {
    ap_block_state76_pp3_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state77_pp3_stage0_iter1() {
    ap_block_state77_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state78_pp3_stage1_iter1() {
    ap_block_state78_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state79_pp3_stage2_iter1() {
    ap_block_state79_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state80_pp3_stage3_iter1() {
    ap_block_state80_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state81_pp3_stage4_iter1() {
    ap_block_state81_pp3_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state82_pp3_stage5_iter1() {
    ap_block_state82_pp3_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state83_pp3_stage6_iter1() {
    ap_block_state83_pp3_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state84_pp3_stage7_iter1() {
    ap_block_state84_pp3_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state85_pp3_stage8_iter1() {
    ap_block_state85_pp3_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state86_pp3_stage9_iter1() {
    ap_block_state86_pp3_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state87_pp3_stage10_iter1() {
    ap_block_state87_pp3_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state88_pp3_stage11_iter1() {
    ap_block_state88_pp3_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln25_fu_3643_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp1_exit_iter0_state26() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_fu_4343_p2.read())) {
        ap_condition_pp1_exit_iter0_state26 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state26 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp2_exit_iter10_state60() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter10.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp2_iter9.read(), ap_const_logic_0))) {
        ap_condition_pp2_exit_iter10_state60 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter10_state60 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp3_exit_iter0_state65() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_fu_5958_p2.read())) {
        ap_condition_pp3_exit_iter0_state65 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state65 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void matrix_mult::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void matrix_mult::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void matrix_mult::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void matrix_mult::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter13.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_phi_mux_i1_0_phi_fu_3559_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_reg_7230.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i1_0_phi_fu_3559_p4 = i_1_reg_7234.read();
    } else {
        ap_phi_mux_i1_0_phi_fu_3559_p4 = i1_0_reg_3555.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i3_0_phi_fu_3604_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_reg_8937.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i3_0_phi_fu_3604_p4 = i_2_reg_8941.read();
    } else {
        ap_phi_mux_i3_0_phi_fu_3604_p4 = i3_0_reg_3600.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i_0_phi_fu_3548_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln25_reg_6693.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_3548_p4 = i_reg_6697.read();
    } else {
        ap_phi_mux_i_0_phi_fu_3548_p4 = i_0_reg_3544.read();
    }
}

void matrix_mult::thread_ap_phi_mux_m_0_phi_fu_3581_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7792.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_m_0_phi_fu_3581_p4 = select_ln40_reg_7864.read();
    } else {
        ap_phi_mux_m_0_phi_fu_3581_p4 = m_0_reg_3577.read();
    }
}

void matrix_mult::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_19_fu_5013_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_17_fu_4983_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_15_fu_4953_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_13_fu_4923_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_11_fu_4893_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_9_fu_4863_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_7_fu_4833_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_5_fu_4803_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_3_fu_4773_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_fu_4736_p1.read());
    } else {
        b_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_20_fu_5019_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_18_fu_4989_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_16_fu_4959_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_14_fu_4929_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_12_fu_4899_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_10_fu_4869_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_8_fu_4839_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_6_fu_4809_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_4_fu_4779_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_2_fu_4742_p1.read());
    } else {
        b_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_0_ce0 = ap_const_logic_1;
    } else {
        b_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_0_ce1 = ap_const_logic_1;
    } else {
        b_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_19_fu_5013_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_17_fu_4983_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_15_fu_4953_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_13_fu_4923_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_11_fu_4893_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_9_fu_4863_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_7_fu_4833_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_5_fu_4803_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_3_fu_4773_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_fu_4736_p1.read());
    } else {
        b_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_20_fu_5019_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_18_fu_4989_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_16_fu_4959_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_14_fu_4929_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_12_fu_4899_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_10_fu_4869_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_8_fu_4839_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_6_fu_4809_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_4_fu_4779_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_2_fu_4742_p1.read());
    } else {
        b_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_1_ce0 = ap_const_logic_1;
    } else {
        b_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_1_ce1 = ap_const_logic_1;
    } else {
        b_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_0_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_0_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4757_p1.read());
    } else {
        b_buff_0_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_0_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_0_we0 = ap_const_logic_1;
    } else {
        b_buff_0_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_10_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_10_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_10_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_10_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_10_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_10_we0 = ap_const_logic_1;
    } else {
        b_buff_0_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_11_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_11_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_11_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_11_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_11_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_11_we0 = ap_const_logic_1;
    } else {
        b_buff_0_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_12_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_12_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_12_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_12_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_12_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_12_we0 = ap_const_logic_1;
    } else {
        b_buff_0_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_13_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_13_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_13_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_13_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_13_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_13_we0 = ap_const_logic_1;
    } else {
        b_buff_0_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_14_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_0_14_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_14_address0 = b_buff_0_14_addr_reg_7657.read();
    } else {
        b_buff_0_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_14_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_14_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_14_we0 = ap_const_logic_1;
    } else {
        b_buff_0_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_15_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_0_15_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_15_address0 = b_buff_0_15_addr_reg_7677.read();
    } else {
        b_buff_0_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_15_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_15_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_15_we0 = ap_const_logic_1;
    } else {
        b_buff_0_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_16_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_16_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_16_address0 = b_buff_0_16_addr_reg_7687.read();
    } else {
        b_buff_0_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_16_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_16_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_0_16_we0 = ap_const_logic_1;
    } else {
        b_buff_0_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_17_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_0_17_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_17_address0 = b_buff_0_17_addr_reg_7697.read();
    } else {
        b_buff_0_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_17_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_17_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_0_17_we0 = ap_const_logic_1;
    } else {
        b_buff_0_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_18_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_0_18_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_18_address0 = b_buff_0_18_addr_reg_7707.read();
    } else {
        b_buff_0_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_18_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_18_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_0_18_we0 = ap_const_logic_1;
    } else {
        b_buff_0_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_19_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_19_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_19_address0 = b_buff_0_19_addr_reg_7717.read();
    } else {
        b_buff_0_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_19_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_19_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_0_19_we0 = ap_const_logic_1;
    } else {
        b_buff_0_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_1_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_1_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4757_p1.read());
    } else {
        b_buff_0_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_1_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_1_we0 = ap_const_logic_1;
    } else {
        b_buff_0_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_2_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_2_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_2_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_2_we0 = ap_const_logic_1;
    } else {
        b_buff_0_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_3_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_3_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_3_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_3_we0 = ap_const_logic_1;
    } else {
        b_buff_0_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_4_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_4_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_4_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_4_we0 = ap_const_logic_1;
    } else {
        b_buff_0_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_5_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_5_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_5_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_5_we0 = ap_const_logic_1;
    } else {
        b_buff_0_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_6_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_6_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_6_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_6_we0 = ap_const_logic_1;
    } else {
        b_buff_0_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_7_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_7_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_7_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_7_we0 = ap_const_logic_1;
    } else {
        b_buff_0_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_8_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_8_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_8_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_8_we0 = ap_const_logic_1;
    } else {
        b_buff_0_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_0_9_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_9_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_0_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_0_9_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_0_9_we0 = ap_const_logic_1;
    } else {
        b_buff_0_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_0_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_0_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4757_p1.read());
    } else {
        b_buff_1_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_0_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_0_we0 = ap_const_logic_1;
    } else {
        b_buff_1_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_10_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_10_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_10_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_10_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_10_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_10_we0 = ap_const_logic_1;
    } else {
        b_buff_1_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_11_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_11_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_11_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_11_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_11_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_11_we0 = ap_const_logic_1;
    } else {
        b_buff_1_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_12_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_12_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_12_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_12_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_12_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_12_we0 = ap_const_logic_1;
    } else {
        b_buff_1_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_13_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_13_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_13_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_13_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_13_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_13_we0 = ap_const_logic_1;
    } else {
        b_buff_1_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_14_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_1_14_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_14_address0 = b_buff_1_14_addr_reg_7662.read();
    } else {
        b_buff_1_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_1_14_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_14_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_14_we0 = ap_const_logic_1;
    } else {
        b_buff_1_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_15_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_1_15_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_15_address0 = b_buff_1_15_addr_reg_7682.read();
    } else {
        b_buff_1_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_1_15_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_15_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_15_we0 = ap_const_logic_1;
    } else {
        b_buff_1_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_16_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_16_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_16_address0 = b_buff_1_16_addr_reg_7692.read();
    } else {
        b_buff_1_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_1_16_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_16_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_1_16_we0 = ap_const_logic_1;
    } else {
        b_buff_1_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_17_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_1_17_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_17_address0 = b_buff_1_17_addr_reg_7702.read();
    } else {
        b_buff_1_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_1_17_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_17_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_1_17_we0 = ap_const_logic_1;
    } else {
        b_buff_1_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_18_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read()))) {
        b_buff_1_18_address0 =  (sc_lv<4>) (zext_ln47_fu_5158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_18_address0 = b_buff_1_18_addr_reg_7712.read();
    } else {
        b_buff_1_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_1_18_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_18_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_1_18_we0 = ap_const_logic_1;
    } else {
        b_buff_1_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_19_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_19_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_19_address0 = b_buff_1_19_addr_reg_7722.read();
    } else {
        b_buff_1_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_1_19_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_19_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter2_reg.read()))) {
        b_buff_1_19_we0 = ap_const_logic_1;
    } else {
        b_buff_1_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_1_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_1_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4757_p1.read());
    } else {
        b_buff_1_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_1_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_1_we0 = ap_const_logic_1;
    } else {
        b_buff_1_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_2_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_2_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_2_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_2_we0 = ap_const_logic_1;
    } else {
        b_buff_1_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_3_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_3_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_3_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_3_we0 = ap_const_logic_1;
    } else {
        b_buff_1_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_4_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_4_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_4_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_4_we0 = ap_const_logic_1;
    } else {
        b_buff_1_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_5_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_5_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_5_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_5_we0 = ap_const_logic_1;
    } else {
        b_buff_1_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_6_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_6_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_6_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_6_we0 = ap_const_logic_1;
    } else {
        b_buff_1_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_7_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_7_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_7_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_7_we0 = ap_const_logic_1;
    } else {
        b_buff_1_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_8_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_8_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_8_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_8_we0 = ap_const_logic_1;
    } else {
        b_buff_1_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read()))) {
        b_buff_1_9_address0 =  (sc_lv<4>) (zext_ln47_reg_8032.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_9_address0 =  (sc_lv<4>) (zext_ln35_1_reg_7487.read());
    } else {
        b_buff_1_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        b_buff_1_9_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7263_pp1_iter1_reg.read()))) {
        b_buff_1_9_we0 = ap_const_logic_1;
    } else {
        b_buff_1_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_20_fu_6688_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_18_fu_6678_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_16_fu_6668_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_14_fu_6636_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_12_fu_6604_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_10_fu_6572_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_8_fu_6540_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_5_fu_6503_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_4_fu_6476_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_3_fu_6449_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_2_fu_6422_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_1_fu_6394_p1.read());
        } else {
            c_0_address0 = "XXXXXXXX";
        }
    } else {
        c_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_19_fu_6683_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_17_fu_6673_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_15_fu_6663_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_13_fu_6631_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_11_fu_6599_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_9_fu_6567_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_7_fu_6535_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_6_fu_6508_p1.read());
        } else {
            c_0_address1 = "XXXXXXXX";
        }
    } else {
        c_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)))) {
        c_0_ce0 = ap_const_logic_1;
    } else {
        c_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)))) {
        c_0_ce1 = ap_const_logic_1;
    } else {
        c_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_0_d0 = reg_3635.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0)))) {
        c_0_d0 = reg_3627.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)))) {
        c_0_d0 = grp_fu_3618_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_0_d0 = select_ln56_reg_9018.read();
    } else {
        c_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_0_d1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0)))) {
        c_0_d1 = reg_3635.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_0_d1 = reg_3627.read();
    } else {
        c_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_1_reg_9168.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_2_reg_9014_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_3_reg_9029_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_4_reg_9038_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_5_reg_9047_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_8_reg_9074_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_10_reg_9092_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_12_reg_9110_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_14_reg_9128_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_16_reg_9146_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_18_reg_9164_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_20_reg_9186_pp3_iter1_reg.read())))) {
        c_0_we0 = ap_const_logic_1;
    } else {
        c_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_6_reg_9056_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_7_reg_9065_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_9_reg_9083_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_11_reg_9101_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_13_reg_9119_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_15_reg_9137_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_17_reg_9155_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_19_reg_9177_pp3_iter1_reg.read())))) {
        c_0_we1 = ap_const_logic_1;
    } else {
        c_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_20_fu_6688_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_18_fu_6678_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_16_fu_6668_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_14_fu_6636_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_12_fu_6604_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_10_fu_6572_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_8_fu_6540_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_5_fu_6503_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_4_fu_6476_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_3_fu_6449_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_2_fu_6422_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_1_fu_6394_p1.read());
        } else {
            c_1_address0 = "XXXXXXXX";
        }
    } else {
        c_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_19_fu_6683_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_17_fu_6673_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_15_fu_6663_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_13_fu_6631_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_11_fu_6599_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_9_fu_6567_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_7_fu_6535_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_6_fu_6508_p1.read());
        } else {
            c_1_address1 = "XXXXXXXX";
        }
    } else {
        c_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)))) {
        c_1_ce0 = ap_const_logic_1;
    } else {
        c_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)))) {
        c_1_ce1 = ap_const_logic_1;
    } else {
        c_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_1_d0 = reg_3635.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0)))) {
        c_1_d0 = reg_3627.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)))) {
        c_1_d0 = grp_fu_3618_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_1_d0 = select_ln56_reg_9018.read();
    } else {
        c_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_1_d1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0)))) {
        c_1_d1 = reg_3635.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_1_d1 = reg_3627.read();
    } else {
        c_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_1_reg_9168.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_2_reg_9014_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_3_reg_9029_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_4_reg_9038_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_5_reg_9047_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_8_reg_9074_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_10_reg_9092_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_12_reg_9110_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_14_reg_9128_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_16_reg_9146_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_18_reg_9164_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_20_reg_9186_pp3_iter1_reg.read())))) {
        c_1_we0 = ap_const_logic_1;
    } else {
        c_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_6_reg_9056_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_7_reg_9065_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_9_reg_9083_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_11_reg_9101_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_13_reg_9119_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_15_reg_9137_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_17_reg_9155_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_19_reg_9177_pp3_iter1_reg.read())))) {
        c_1_we1 = ap_const_logic_1;
    } else {
        c_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_15_fu_6657_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_13_fu_6625_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_11_fu_6593_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_9_fu_6561_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_7_fu_6529_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_5_fu_6497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_3_fu_6470_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_1_fu_6443_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln56_25_fu_6416_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln56_22_fu_6042_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln44_5_fu_5941_p1.read());
    } else {
        c_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_14_fu_6646_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_12_fu_6614_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_10_fu_6582_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_8_fu_6550_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_6_fu_6518_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_4_fu_6486_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_2_fu_6459_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_fu_6432_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (zext_ln56_24_fu_6405_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (zext_ln56_23_fu_6388_p1.read());
        } else {
            c_buff_0_address1 = "XXXXXXXX";
        }
    } else {
        c_buff_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)))) {
        c_buff_0_ce0 = ap_const_logic_1;
    } else {
        c_buff_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)))) {
        c_buff_0_ce1 = ap_const_logic_1;
    } else {
        c_buff_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, select_ln44_2_reg_8648_pp2_iter12_reg.read()))) {
        c_buff_0_we0 = ap_const_logic_1;
    } else {
        c_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_15_fu_6657_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_13_fu_6625_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_11_fu_6593_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_9_fu_6561_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_7_fu_6529_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_5_fu_6497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_3_fu_6470_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_1_fu_6443_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln56_25_fu_6416_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln56_22_fu_6042_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln44_5_fu_5941_p1.read());
    } else {
        c_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_14_fu_6646_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_12_fu_6614_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_10_fu_6582_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_8_fu_6550_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_6_fu_6518_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_4_fu_6486_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_2_fu_6459_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_fu_6432_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (zext_ln56_24_fu_6405_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (zext_ln56_23_fu_6388_p1.read());
        } else {
            c_buff_1_address1 = "XXXXXXXX";
        }
    } else {
        c_buff_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)))) {
        c_buff_1_ce0 = ap_const_logic_1;
    } else {
        c_buff_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)))) {
        c_buff_1_ce1 = ap_const_logic_1;
    } else {
        c_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, select_ln44_2_reg_8648_pp2_iter12_reg.read()))) {
        c_buff_1_we0 = ap_const_logic_1;
    } else {
        c_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_grp_fu_3611_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)))) {
        grp_fu_3611_p0 = icmp_ln56_reg_8970_pp3_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_3611_p0 = icmp_ln56_reg_8970.read();
    } else {
        grp_fu_3611_p0 =  (sc_lv<1>) ("X");
    }
}

void matrix_mult::thread_grp_fu_3611_p3() {
    grp_fu_3611_p3 = (!grp_fu_3611_p0.read()[0].is_01())? sc_lv<32>(): ((grp_fu_3611_p0.read()[0].to_bool())? c_buff_0_q0.read(): c_buff_1_q0.read());
}

void matrix_mult::thread_grp_fu_3618_p3() {
    grp_fu_3618_p3 = (!icmp_ln56_reg_8970_pp3_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln56_reg_8970_pp3_iter1_reg.read()[0].to_bool())? c_buff_0_q1.read(): c_buff_1_q1.read());
}

void matrix_mult::thread_i_1_fu_4349_p2() {
    i_1_fu_4349_p2 = (!ap_phi_mux_i1_0_phi_fu_3559_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_3559_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_2_fu_5964_p2() {
    i_2_fu_5964_p2 = (!ap_phi_mux_i3_0_phi_fu_3604_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_3604_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_fu_3649_p2() {
    i_fu_3649_p2 = (!ap_phi_mux_i_0_phi_fu_3548_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_3548_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_icmp_ln25_fu_3643_p2() {
    icmp_ln25_fu_3643_p2 = (!ap_phi_mux_i_0_phi_fu_3548_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_3548_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln28_10_fu_3855_p2() {
    icmp_ln28_10_fu_3855_p2 = (!add_ln28_6_fu_3844_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_6_fu_3844_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_11_fu_3872_p2() {
    icmp_ln28_11_fu_3872_p2 = (!add_ln28_7_fu_3861_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_7_fu_3861_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_12_fu_3889_p2() {
    icmp_ln28_12_fu_3889_p2 = (!add_ln28_8_fu_3878_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_8_fu_3878_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_13_fu_3906_p2() {
    icmp_ln28_13_fu_3906_p2 = (!add_ln28_9_fu_3895_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_9_fu_3895_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_14_fu_3923_p2() {
    icmp_ln28_14_fu_3923_p2 = (!add_ln28_10_fu_3912_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_10_fu_3912_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_15_fu_3940_p2() {
    icmp_ln28_15_fu_3940_p2 = (!add_ln28_11_fu_3929_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_11_fu_3929_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_16_fu_3957_p2() {
    icmp_ln28_16_fu_3957_p2 = (!add_ln28_12_fu_3946_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_12_fu_3946_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_17_fu_3974_p2() {
    icmp_ln28_17_fu_3974_p2 = (!add_ln28_13_fu_3963_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_13_fu_3963_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_18_fu_3991_p2() {
    icmp_ln28_18_fu_3991_p2 = (!add_ln28_14_fu_3980_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_14_fu_3980_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_19_fu_4013_p2() {
    icmp_ln28_19_fu_4013_p2 = (!add_ln28_15_fu_4002_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_15_fu_4002_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_1_fu_3687_p2() {
    icmp_ln28_1_fu_3687_p2 = (!ap_phi_mux_i_0_phi_fu_3548_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_3548_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln28_20_fu_4030_p2() {
    icmp_ln28_20_fu_4030_p2 = (!add_ln28_16_fu_4019_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_16_fu_4019_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_2_fu_3719_p2() {
    icmp_ln28_2_fu_3719_p2 = (!or_ln28_fu_3707_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_fu_3707_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_3_fu_3736_p2() {
    icmp_ln28_3_fu_3736_p2 = (!or_ln28_1_fu_3725_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_1_fu_3725_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_4_fu_3753_p2() {
    icmp_ln28_4_fu_3753_p2 = (!or_ln28_2_fu_3742_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_2_fu_3742_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_5_fu_3770_p2() {
    icmp_ln28_5_fu_3770_p2 = (!add_ln28_1_fu_3759_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_1_fu_3759_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_6_fu_3787_p2() {
    icmp_ln28_6_fu_3787_p2 = (!add_ln28_2_fu_3776_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_2_fu_3776_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_7_fu_3804_p2() {
    icmp_ln28_7_fu_3804_p2 = (!add_ln28_3_fu_3793_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_3_fu_3793_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_8_fu_3821_p2() {
    icmp_ln28_8_fu_3821_p2 = (!add_ln28_4_fu_3810_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_4_fu_3810_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_9_fu_3838_p2() {
    icmp_ln28_9_fu_3838_p2 = (!add_ln28_5_fu_3827_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_5_fu_3827_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_fu_3997_p2() {
    icmp_ln28_fu_3997_p2 = (!add_ln28_reg_6702.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_reg_6702.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln32_fu_4343_p2() {
    icmp_ln32_fu_4343_p2 = (!ap_phi_mux_i1_0_phi_fu_3559_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i1_0_phi_fu_3559_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln35_10_fu_4555_p2() {
    icmp_ln35_10_fu_4555_p2 = (!add_ln35_6_fu_4544_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_6_fu_4544_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_11_fu_4572_p2() {
    icmp_ln35_11_fu_4572_p2 = (!add_ln35_7_fu_4561_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_7_fu_4561_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_12_fu_4589_p2() {
    icmp_ln35_12_fu_4589_p2 = (!add_ln35_8_fu_4578_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_8_fu_4578_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_13_fu_4606_p2() {
    icmp_ln35_13_fu_4606_p2 = (!add_ln35_9_fu_4595_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_9_fu_4595_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_14_fu_4623_p2() {
    icmp_ln35_14_fu_4623_p2 = (!add_ln35_10_fu_4612_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_10_fu_4612_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_15_fu_4640_p2() {
    icmp_ln35_15_fu_4640_p2 = (!add_ln35_11_fu_4629_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_11_fu_4629_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_16_fu_4657_p2() {
    icmp_ln35_16_fu_4657_p2 = (!add_ln35_12_fu_4646_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_12_fu_4646_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_17_fu_4674_p2() {
    icmp_ln35_17_fu_4674_p2 = (!add_ln35_13_fu_4663_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_13_fu_4663_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_18_fu_4691_p2() {
    icmp_ln35_18_fu_4691_p2 = (!add_ln35_14_fu_4680_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_14_fu_4680_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_19_fu_4713_p2() {
    icmp_ln35_19_fu_4713_p2 = (!add_ln35_15_fu_4702_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_15_fu_4702_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_1_fu_4387_p2() {
    icmp_ln35_1_fu_4387_p2 = (!ap_phi_mux_i1_0_phi_fu_3559_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_3559_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln35_20_fu_4730_p2() {
    icmp_ln35_20_fu_4730_p2 = (!add_ln35_16_fu_4719_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_16_fu_4719_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_2_fu_4419_p2() {
    icmp_ln35_2_fu_4419_p2 = (!or_ln35_fu_4407_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_fu_4407_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_3_fu_4436_p2() {
    icmp_ln35_3_fu_4436_p2 = (!or_ln35_1_fu_4425_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_1_fu_4425_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_4_fu_4453_p2() {
    icmp_ln35_4_fu_4453_p2 = (!or_ln35_2_fu_4442_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_2_fu_4442_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_5_fu_4470_p2() {
    icmp_ln35_5_fu_4470_p2 = (!add_ln35_1_fu_4459_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_1_fu_4459_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_6_fu_4487_p2() {
    icmp_ln35_6_fu_4487_p2 = (!add_ln35_2_fu_4476_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_2_fu_4476_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_7_fu_4504_p2() {
    icmp_ln35_7_fu_4504_p2 = (!add_ln35_3_fu_4493_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_3_fu_4493_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_8_fu_4521_p2() {
    icmp_ln35_8_fu_4521_p2 = (!add_ln35_4_fu_4510_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_4_fu_4510_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_9_fu_4538_p2() {
    icmp_ln35_9_fu_4538_p2 = (!add_ln35_5_fu_4527_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_5_fu_4527_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_fu_4697_p2() {
    icmp_ln35_fu_4697_p2 = (!add_ln35_reg_7239.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_reg_7239.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln40_fu_5055_p2() {
    icmp_ln40_fu_5055_p2 = (!indvar_flatten_reg_3566.read().is_01() || !ap_const_lv9_190.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_3566.read() == ap_const_lv9_190);
}

void matrix_mult::thread_icmp_ln42_fu_5073_p2() {
    icmp_ln42_fu_5073_p2 = (!o_0_reg_3589.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(o_0_reg_3589.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln47_1_fu_5254_p2() {
    icmp_ln47_1_fu_5254_p2 = (!select_ln44_reg_7832_pp2_iter8_reg.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(select_ln44_reg_7832_pp2_iter8_reg.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln47_2_fu_5093_p2() {
    icmp_ln47_2_fu_5093_p2 = (!m_fu_5067_p2.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(m_fu_5067_p2.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln47_fu_5049_p2() {
    icmp_ln47_fu_5049_p2 = (!ap_phi_mux_m_0_phi_fu_3581_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_m_0_phi_fu_3581_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln53_fu_5958_p2() {
    icmp_ln53_fu_5958_p2 = (!ap_phi_mux_i3_0_phi_fu_3604_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i3_0_phi_fu_3604_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln56_10_fu_6202_p2() {
    icmp_ln56_10_fu_6202_p2 = (!add_ln56_6_fu_6191_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_6_fu_6191_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_11_fu_6219_p2() {
    icmp_ln56_11_fu_6219_p2 = (!add_ln56_7_fu_6208_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_7_fu_6208_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_12_fu_6236_p2() {
    icmp_ln56_12_fu_6236_p2 = (!add_ln56_8_fu_6225_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_8_fu_6225_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_13_fu_6253_p2() {
    icmp_ln56_13_fu_6253_p2 = (!add_ln56_9_fu_6242_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_9_fu_6242_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_14_fu_6270_p2() {
    icmp_ln56_14_fu_6270_p2 = (!add_ln56_10_fu_6259_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_10_fu_6259_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_15_fu_6287_p2() {
    icmp_ln56_15_fu_6287_p2 = (!add_ln56_11_fu_6276_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_11_fu_6276_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_16_fu_6304_p2() {
    icmp_ln56_16_fu_6304_p2 = (!add_ln56_12_fu_6293_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_12_fu_6293_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_17_fu_6321_p2() {
    icmp_ln56_17_fu_6321_p2 = (!add_ln56_13_fu_6310_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_13_fu_6310_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_18_fu_6338_p2() {
    icmp_ln56_18_fu_6338_p2 = (!add_ln56_14_fu_6327_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_14_fu_6327_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_19_fu_6360_p2() {
    icmp_ln56_19_fu_6360_p2 = (!add_ln56_15_fu_6349_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_15_fu_6349_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_1_fu_6344_p2() {
    icmp_ln56_1_fu_6344_p2 = (!add_ln56_reg_8946.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_reg_8946.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_20_fu_6377_p2() {
    icmp_ln56_20_fu_6377_p2 = (!add_ln56_16_fu_6366_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_16_fu_6366_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_2_fu_6066_p2() {
    icmp_ln56_2_fu_6066_p2 = (!or_ln56_fu_6054_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln56_fu_6054_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_3_fu_6083_p2() {
    icmp_ln56_3_fu_6083_p2 = (!or_ln56_1_fu_6072_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln56_1_fu_6072_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_4_fu_6100_p2() {
    icmp_ln56_4_fu_6100_p2 = (!or_ln56_2_fu_6089_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln56_2_fu_6089_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_5_fu_6117_p2() {
    icmp_ln56_5_fu_6117_p2 = (!add_ln56_1_fu_6106_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_1_fu_6106_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_6_fu_6134_p2() {
    icmp_ln56_6_fu_6134_p2 = (!add_ln56_2_fu_6123_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_2_fu_6123_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_7_fu_6151_p2() {
    icmp_ln56_7_fu_6151_p2 = (!add_ln56_3_fu_6140_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_3_fu_6140_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_8_fu_6168_p2() {
    icmp_ln56_8_fu_6168_p2 = (!add_ln56_4_fu_6157_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_4_fu_6157_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_9_fu_6185_p2() {
    icmp_ln56_9_fu_6185_p2 = (!add_ln56_5_fu_6174_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_5_fu_6174_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_fu_5996_p2() {
    icmp_ln56_fu_5996_p2 = (!ap_phi_mux_i3_0_phi_fu_3604_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_3604_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_m_fu_5067_p2() {
    m_fu_5067_p2 = (!ap_const_lv5_1.is_01() || !ap_phi_mux_m_0_phi_fu_3581_p4.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(ap_phi_mux_m_0_phi_fu_3581_p4.read()));
}

void matrix_mult::thread_mul_ln47_10_fu_5800_p2() {
    mul_ln47_10_fu_5800_p2 = (!select_ln47_30_reg_8782.read().is_01() || !select_ln44_13_reg_8702.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_30_reg_8782.read()) * sc_bigint<32>(select_ln44_13_reg_8702.read());
}

void matrix_mult::thread_mul_ln47_11_fu_5804_p2() {
    mul_ln47_11_fu_5804_p2 = (!select_ln47_31_reg_8787.read().is_01() || !select_ln44_14_reg_8707.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_31_reg_8787.read()) * sc_bigint<32>(select_ln44_14_reg_8707.read());
}

void matrix_mult::thread_mul_ln47_12_fu_5808_p2() {
    mul_ln47_12_fu_5808_p2 = (!select_ln47_32_reg_8792.read().is_01() || !select_ln44_15_reg_8712.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_32_reg_8792.read()) * sc_bigint<32>(select_ln44_15_reg_8712.read());
}

void matrix_mult::thread_mul_ln47_13_fu_5812_p2() {
    mul_ln47_13_fu_5812_p2 = (!select_ln47_33_reg_8797.read().is_01() || !select_ln44_16_reg_8717.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_33_reg_8797.read()) * sc_bigint<32>(select_ln44_16_reg_8717.read());
}

void matrix_mult::thread_mul_ln47_14_fu_5730_p2() {
    mul_ln47_14_fu_5730_p2 = (!select_ln47_34_reg_8608.read().is_01() || !select_ln44_17_reg_8428.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_34_reg_8608.read()) * sc_bigint<32>(select_ln44_17_reg_8428.read());
}

void matrix_mult::thread_mul_ln47_15_fu_5734_p2() {
    mul_ln47_15_fu_5734_p2 = (!select_ln47_35_reg_8613.read().is_01() || !select_ln44_18_reg_8433.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_35_reg_8613.read()) * sc_bigint<32>(select_ln44_18_reg_8433.read());
}

void matrix_mult::thread_mul_ln47_16_fu_5816_p2() {
    mul_ln47_16_fu_5816_p2 = (!select_ln47_36_reg_8812.read().is_01() || !select_ln44_19_reg_8722.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_36_reg_8812.read()) * sc_bigint<32>(select_ln44_19_reg_8722.read());
}

void matrix_mult::thread_mul_ln47_17_fu_5745_p2() {
    mul_ln47_17_fu_5745_p2 = (!select_ln47_37_reg_8628.read().is_01() || !select_ln44_20_reg_8438.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_37_reg_8628.read()) * sc_bigint<32>(select_ln44_20_reg_8438.read());
}

void matrix_mult::thread_mul_ln47_18_fu_5749_p2() {
    mul_ln47_18_fu_5749_p2 = (!select_ln47_38_reg_8633.read().is_01() || !select_ln44_21_reg_8443.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_38_reg_8633.read()) * sc_bigint<32>(select_ln44_21_reg_8443.read());
}

void matrix_mult::thread_mul_ln47_19_fu_5820_p2() {
    mul_ln47_19_fu_5820_p2 = (!select_ln47_39_reg_8827.read().is_01() || !select_ln44_22_reg_8727.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_39_reg_8827.read()) * sc_bigint<32>(select_ln44_22_reg_8727.read());
}

void matrix_mult::thread_mul_ln47_1_fu_5764_p2() {
    mul_ln47_1_fu_5764_p2 = (!select_ln47_21_reg_8737.read().is_01() || !select_ln44_4_reg_8657.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_21_reg_8737.read()) * sc_bigint<32>(select_ln44_4_reg_8657.read());
}

void matrix_mult::thread_mul_ln47_2_fu_5768_p2() {
    mul_ln47_2_fu_5768_p2 = (!select_ln47_22_reg_8742.read().is_01() || !select_ln44_5_reg_8662.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_22_reg_8742.read()) * sc_bigint<32>(select_ln44_5_reg_8662.read());
}

void matrix_mult::thread_mul_ln47_3_fu_5772_p2() {
    mul_ln47_3_fu_5772_p2 = (!select_ln47_23_reg_8747.read().is_01() || !select_ln44_6_reg_8667.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_23_reg_8747.read()) * sc_bigint<32>(select_ln44_6_reg_8667.read());
}

void matrix_mult::thread_mul_ln47_4_fu_5776_p2() {
    mul_ln47_4_fu_5776_p2 = (!select_ln47_24_reg_8752.read().is_01() || !select_ln44_7_reg_8672.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_24_reg_8752.read()) * sc_bigint<32>(select_ln44_7_reg_8672.read());
}

void matrix_mult::thread_mul_ln47_5_fu_5780_p2() {
    mul_ln47_5_fu_5780_p2 = (!select_ln47_25_reg_8757.read().is_01() || !select_ln44_8_reg_8677.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_25_reg_8757.read()) * sc_bigint<32>(select_ln44_8_reg_8677.read());
}

void matrix_mult::thread_mul_ln47_6_fu_5784_p2() {
    mul_ln47_6_fu_5784_p2 = (!select_ln47_26_reg_8762.read().is_01() || !select_ln44_9_reg_8682.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_26_reg_8762.read()) * sc_bigint<32>(select_ln44_9_reg_8682.read());
}

void matrix_mult::thread_mul_ln47_7_fu_5788_p2() {
    mul_ln47_7_fu_5788_p2 = (!select_ln47_27_reg_8767.read().is_01() || !select_ln44_10_reg_8687.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_27_reg_8767.read()) * sc_bigint<32>(select_ln44_10_reg_8687.read());
}

void matrix_mult::thread_mul_ln47_8_fu_5792_p2() {
    mul_ln47_8_fu_5792_p2 = (!select_ln47_28_reg_8772.read().is_01() || !select_ln44_11_reg_8692.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_28_reg_8772.read()) * sc_bigint<32>(select_ln44_11_reg_8692.read());
}

void matrix_mult::thread_mul_ln47_9_fu_5796_p2() {
    mul_ln47_9_fu_5796_p2 = (!select_ln47_29_reg_8777.read().is_01() || !select_ln44_12_reg_8697.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_29_reg_8777.read()) * sc_bigint<32>(select_ln44_12_reg_8697.read());
}

void matrix_mult::thread_mul_ln47_fu_5760_p2() {
    mul_ln47_fu_5760_p2 = (!select_ln47_20_reg_8732.read().is_01() || !select_ln44_3_reg_8652.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln47_20_reg_8732.read()) * sc_bigint<32>(select_ln44_3_reg_8652.read());
}

void matrix_mult::thread_o_fu_5113_p2() {
    o_fu_5113_p2 = (!select_ln44_fu_5079_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(select_ln44_fu_5079_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_or_ln28_1_fu_3725_p2() {
    or_ln28_1_fu_3725_p2 = (add_ln28_reg_6702.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln28_2_fu_3742_p2() {
    or_ln28_2_fu_3742_p2 = (add_ln28_reg_6702.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln28_fu_3707_p2() {
    or_ln28_fu_3707_p2 = (add_ln28_fu_3675_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln35_1_fu_4425_p2() {
    or_ln35_1_fu_4425_p2 = (add_ln35_reg_7239.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln35_2_fu_4442_p2() {
    or_ln35_2_fu_4442_p2 = (add_ln35_reg_7239.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln35_fu_4407_p2() {
    or_ln35_fu_4407_p2 = (add_ln35_fu_4375_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln56_1_fu_6072_p2() {
    or_ln56_1_fu_6072_p2 = (add_ln56_reg_8946.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln56_2_fu_6089_p2() {
    or_ln56_2_fu_6089_p2 = (add_ln56_reg_8946.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln56_3_fu_6383_p2() {
    or_ln56_3_fu_6383_p2 = (add_ln56_18_reg_8976.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln56_4_fu_6400_p2() {
    or_ln56_4_fu_6400_p2 = (add_ln56_18_reg_8976_pp3_iter1_reg.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln56_5_fu_6411_p2() {
    or_ln56_5_fu_6411_p2 = (add_ln56_18_reg_8976_pp3_iter1_reg.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln56_fu_6054_p2() {
    or_ln56_fu_6054_p2 = (add_ln56_fu_5990_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_select_ln28_10_fu_4205_p3() {
    select_ln28_10_fu_4205_p3 = (!icmp_ln28_11_reg_6830_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_11_reg_6830_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_11_fu_4214_p3() {
    select_ln28_11_fu_4214_p3 = (!icmp_ln28_12_reg_6840_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_12_reg_6840_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_12_fu_4235_p3() {
    select_ln28_12_fu_4235_p3 = (!icmp_ln28_13_reg_6850_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_13_reg_6850_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_13_fu_4244_p3() {
    select_ln28_13_fu_4244_p3 = (!icmp_ln28_14_reg_6860_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_14_reg_6860_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_14_fu_4265_p3() {
    select_ln28_14_fu_4265_p3 = (!icmp_ln28_15_reg_6870_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_15_reg_6870_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_15_fu_4274_p3() {
    select_ln28_15_fu_4274_p3 = (!icmp_ln28_16_reg_6880_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_16_reg_6880_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_16_fu_4295_p3() {
    select_ln28_16_fu_4295_p3 = (!icmp_ln28_17_reg_6890_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_17_reg_6890_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_17_fu_4304_p3() {
    select_ln28_17_fu_4304_p3 = (!icmp_ln28_18_reg_6900_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_18_reg_6900_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_18_fu_4325_p3() {
    select_ln28_18_fu_4325_p3 = (!icmp_ln28_19_reg_6915_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_19_reg_6915_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_19_fu_4334_p3() {
    select_ln28_19_fu_4334_p3 = (!icmp_ln28_20_reg_6925_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_20_reg_6925_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_1_fu_4064_p3() {
    select_ln28_1_fu_4064_p3 = (!icmp_ln28_2_reg_6740_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_2_reg_6740_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_20_fu_3699_p3() {
    select_ln28_20_fu_3699_p3 = (!icmp_ln28_1_fu_3687_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln28_1_fu_3687_p2.read()[0].to_bool())? ap_phi_mux_i_0_phi_fu_3548_p4.read(): add_ln28_17_fu_3693_p2.read());
}

void matrix_mult::thread_select_ln28_2_fu_4085_p3() {
    select_ln28_2_fu_4085_p3 = (!icmp_ln28_3_reg_6750_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_3_reg_6750_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_3_fu_4094_p3() {
    select_ln28_3_fu_4094_p3 = (!icmp_ln28_4_reg_6760_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_4_reg_6760_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_4_fu_4115_p3() {
    select_ln28_4_fu_4115_p3 = (!icmp_ln28_5_reg_6770_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_5_reg_6770_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_5_fu_4124_p3() {
    select_ln28_5_fu_4124_p3 = (!icmp_ln28_6_reg_6780_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_6_reg_6780_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_6_fu_4145_p3() {
    select_ln28_6_fu_4145_p3 = (!icmp_ln28_7_reg_6790_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_7_reg_6790_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_7_fu_4154_p3() {
    select_ln28_7_fu_4154_p3 = (!icmp_ln28_8_reg_6800_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_8_reg_6800_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_8_fu_4175_p3() {
    select_ln28_8_fu_4175_p3 = (!icmp_ln28_9_reg_6810_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_9_reg_6810_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_9_fu_4184_p3() {
    select_ln28_9_fu_4184_p3 = (!icmp_ln28_10_reg_6820_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_10_reg_6820_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_fu_4048_p3() {
    select_ln28_fu_4048_p3 = (!icmp_ln28_reg_6905.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_reg_6905.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln35_10_fu_4905_p3() {
    select_ln35_10_fu_4905_p3 = (!icmp_ln35_11_reg_7367_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_11_reg_7367_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_11_fu_4914_p3() {
    select_ln35_11_fu_4914_p3 = (!icmp_ln35_12_reg_7377_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_12_reg_7377_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_12_fu_4935_p3() {
    select_ln35_12_fu_4935_p3 = (!icmp_ln35_13_reg_7387_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_13_reg_7387_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_13_fu_4944_p3() {
    select_ln35_13_fu_4944_p3 = (!icmp_ln35_14_reg_7397_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_14_reg_7397_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_14_fu_4965_p3() {
    select_ln35_14_fu_4965_p3 = (!icmp_ln35_15_reg_7407_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_15_reg_7407_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_15_fu_4974_p3() {
    select_ln35_15_fu_4974_p3 = (!icmp_ln35_16_reg_7417_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_16_reg_7417_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_16_fu_4995_p3() {
    select_ln35_16_fu_4995_p3 = (!icmp_ln35_17_reg_7427_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_17_reg_7427_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_17_fu_5004_p3() {
    select_ln35_17_fu_5004_p3 = (!icmp_ln35_18_reg_7437_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_18_reg_7437_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_18_fu_5025_p3() {
    select_ln35_18_fu_5025_p3 = (!icmp_ln35_19_reg_7452_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_19_reg_7452_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_19_fu_5034_p3() {
    select_ln35_19_fu_5034_p3 = (!icmp_ln35_20_reg_7462_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_20_reg_7462_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_1_fu_4764_p3() {
    select_ln35_1_fu_4764_p3 = (!icmp_ln35_2_reg_7277_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_2_reg_7277_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_20_fu_4399_p3() {
    select_ln35_20_fu_4399_p3 = (!icmp_ln35_1_fu_4387_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln35_1_fu_4387_p2.read()[0].to_bool())? ap_phi_mux_i1_0_phi_fu_3559_p4.read(): add_ln35_17_fu_4393_p2.read());
}

void matrix_mult::thread_select_ln35_2_fu_4785_p3() {
    select_ln35_2_fu_4785_p3 = (!icmp_ln35_3_reg_7287_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_3_reg_7287_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_3_fu_4794_p3() {
    select_ln35_3_fu_4794_p3 = (!icmp_ln35_4_reg_7297_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_4_reg_7297_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_4_fu_4815_p3() {
    select_ln35_4_fu_4815_p3 = (!icmp_ln35_5_reg_7307_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_5_reg_7307_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_5_fu_4824_p3() {
    select_ln35_5_fu_4824_p3 = (!icmp_ln35_6_reg_7317_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_6_reg_7317_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_6_fu_4845_p3() {
    select_ln35_6_fu_4845_p3 = (!icmp_ln35_7_reg_7327_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_7_reg_7327_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_7_fu_4854_p3() {
    select_ln35_7_fu_4854_p3 = (!icmp_ln35_8_reg_7337_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_8_reg_7337_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_8_fu_4875_p3() {
    select_ln35_8_fu_4875_p3 = (!icmp_ln35_9_reg_7347_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_9_reg_7347_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_9_fu_4884_p3() {
    select_ln35_9_fu_4884_p3 = (!icmp_ln35_10_reg_7357_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_10_reg_7357_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_fu_4748_p3() {
    select_ln35_fu_4748_p3 = (!icmp_ln35_reg_7442.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_reg_7442.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln40_fu_5099_p3() {
    select_ln40_fu_5099_p3 = (!icmp_ln42_fu_5073_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln42_fu_5073_p2.read()[0].to_bool())? m_fu_5067_p2.read(): ap_phi_mux_m_0_phi_fu_3581_p4.read());
}

void matrix_mult::thread_select_ln44_10_fu_5513_p3() {
    select_ln44_10_fu_5513_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_47_fu_5506_p3.read(): select_ln47_7_fu_5340_p3.read());
}

void matrix_mult::thread_select_ln44_11_fu_5527_p3() {
    select_ln44_11_fu_5527_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_48_fu_5520_p3.read(): select_ln47_8_fu_5347_p3.read());
}

void matrix_mult::thread_select_ln44_12_fu_5541_p3() {
    select_ln44_12_fu_5541_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_49_fu_5534_p3.read(): select_ln47_9_fu_5354_p3.read());
}

void matrix_mult::thread_select_ln44_13_fu_5555_p3() {
    select_ln44_13_fu_5555_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_50_fu_5548_p3.read(): select_ln47_10_fu_5361_p3.read());
}

void matrix_mult::thread_select_ln44_14_fu_5569_p3() {
    select_ln44_14_fu_5569_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_51_fu_5562_p3.read(): select_ln47_11_fu_5368_p3.read());
}

void matrix_mult::thread_select_ln44_15_fu_5583_p3() {
    select_ln44_15_fu_5583_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_52_fu_5576_p3.read(): select_ln47_12_fu_5375_p3.read());
}

void matrix_mult::thread_select_ln44_16_fu_5597_p3() {
    select_ln44_16_fu_5597_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_53_fu_5590_p3.read(): select_ln47_13_fu_5382_p3.read());
}

void matrix_mult::thread_select_ln44_17_fu_5205_p3() {
    select_ln44_17_fu_5205_p3 = (!icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].to_bool())? select_ln47_54_fu_5198_p3.read(): select_ln47_14_fu_5170_p3.read());
}

void matrix_mult::thread_select_ln44_18_fu_5219_p3() {
    select_ln44_18_fu_5219_p3 = (!icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].to_bool())? select_ln47_55_fu_5212_p3.read(): select_ln47_15_fu_5177_p3.read());
}

void matrix_mult::thread_select_ln44_19_fu_5611_p3() {
    select_ln44_19_fu_5611_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_56_fu_5604_p3.read(): select_ln47_16_fu_5389_p3.read());
}

void matrix_mult::thread_select_ln44_1_fu_5151_p3() {
    select_ln44_1_fu_5151_p3 = (!icmp_ln42_reg_7806_pp2_iter7_reg.read()[0].is_01())? sc_lv<4>(): ((icmp_ln42_reg_7806_pp2_iter7_reg.read()[0].to_bool())? trunc_ln44_fu_5143_p1.read(): trunc_ln44_1_fu_5147_p1.read());
}

void matrix_mult::thread_select_ln44_20_fu_5233_p3() {
    select_ln44_20_fu_5233_p3 = (!icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].to_bool())? select_ln47_57_fu_5226_p3.read(): select_ln47_17_fu_5184_p3.read());
}

void matrix_mult::thread_select_ln44_21_fu_5247_p3() {
    select_ln44_21_fu_5247_p3 = (!icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter8_reg.read()[0].to_bool())? select_ln47_58_fu_5240_p3.read(): select_ln47_18_fu_5191_p3.read());
}

void matrix_mult::thread_select_ln44_22_fu_5625_p3() {
    select_ln44_22_fu_5625_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_59_fu_5618_p3.read(): select_ln47_19_fu_5396_p3.read());
}

void matrix_mult::thread_select_ln44_2_fu_5403_p3() {
    select_ln44_2_fu_5403_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<1>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? icmp_ln47_2_reg_7839_pp2_iter9_reg.read(): icmp_ln47_reg_7767_pp2_iter9_reg.read());
}

void matrix_mult::thread_select_ln44_3_fu_5415_p3() {
    select_ln44_3_fu_5415_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_40_fu_5408_p3.read(): select_ln47_fu_5291_p3.read());
}

void matrix_mult::thread_select_ln44_4_fu_5429_p3() {
    select_ln44_4_fu_5429_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_41_fu_5422_p3.read(): select_ln47_1_fu_5298_p3.read());
}

void matrix_mult::thread_select_ln44_5_fu_5443_p3() {
    select_ln44_5_fu_5443_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_42_fu_5436_p3.read(): select_ln47_2_fu_5305_p3.read());
}

void matrix_mult::thread_select_ln44_6_fu_5457_p3() {
    select_ln44_6_fu_5457_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_43_fu_5450_p3.read(): select_ln47_3_fu_5312_p3.read());
}

void matrix_mult::thread_select_ln44_7_fu_5471_p3() {
    select_ln44_7_fu_5471_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_44_fu_5464_p3.read(): select_ln47_4_fu_5319_p3.read());
}

void matrix_mult::thread_select_ln44_8_fu_5485_p3() {
    select_ln44_8_fu_5485_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_45_fu_5478_p3.read(): select_ln47_5_fu_5326_p3.read());
}

void matrix_mult::thread_select_ln44_9_fu_5499_p3() {
    select_ln44_9_fu_5499_p3 = (!icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7806_pp2_iter9_reg.read()[0].to_bool())? select_ln47_46_fu_5492_p3.read(): select_ln47_6_fu_5333_p3.read());
}

void matrix_mult::thread_select_ln44_fu_5079_p3() {
    select_ln44_fu_5079_p3 = (!icmp_ln42_fu_5073_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln42_fu_5073_p2.read()[0].to_bool())? ap_const_lv5_0: o_0_reg_3589.read());
}

void matrix_mult::thread_select_ln47_10_fu_5361_p3() {
    select_ln47_10_fu_5361_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_10_q0.read(): a_buff_1_10_q0.read());
}

void matrix_mult::thread_select_ln47_11_fu_5368_p3() {
    select_ln47_11_fu_5368_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_11_q0.read(): a_buff_1_11_q0.read());
}

void matrix_mult::thread_select_ln47_12_fu_5375_p3() {
    select_ln47_12_fu_5375_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_12_q0.read(): a_buff_1_12_q0.read());
}

void matrix_mult::thread_select_ln47_13_fu_5382_p3() {
    select_ln47_13_fu_5382_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_13_q0.read(): a_buff_1_13_q0.read());
}

void matrix_mult::thread_select_ln47_14_fu_5170_p3() {
    select_ln47_14_fu_5170_p3 = (!icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_14_q0.read(): a_buff_1_14_q0.read());
}

void matrix_mult::thread_select_ln47_15_fu_5177_p3() {
    select_ln47_15_fu_5177_p3 = (!icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_15_q0.read(): a_buff_1_15_q0.read());
}

void matrix_mult::thread_select_ln47_16_fu_5389_p3() {
    select_ln47_16_fu_5389_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_16_q0.read(): a_buff_1_16_q0.read());
}

void matrix_mult::thread_select_ln47_17_fu_5184_p3() {
    select_ln47_17_fu_5184_p3 = (!icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_17_q0.read(): a_buff_1_17_q0.read());
}

void matrix_mult::thread_select_ln47_18_fu_5191_p3() {
    select_ln47_18_fu_5191_p3 = (!icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_18_q0.read(): a_buff_1_18_q0.read());
}

void matrix_mult::thread_select_ln47_19_fu_5396_p3() {
    select_ln47_19_fu_5396_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_19_q0.read(): a_buff_1_19_q0.read());
}

void matrix_mult::thread_select_ln47_1_fu_5298_p3() {
    select_ln47_1_fu_5298_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_1_q0.read(): a_buff_1_1_q0.read());
}

void matrix_mult::thread_select_ln47_20_fu_5632_p3() {
    select_ln47_20_fu_5632_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_0_q0.read(): b_buff_1_0_q0.read());
}

void matrix_mult::thread_select_ln47_21_fu_5639_p3() {
    select_ln47_21_fu_5639_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_1_q0.read(): b_buff_1_1_q0.read());
}

void matrix_mult::thread_select_ln47_22_fu_5646_p3() {
    select_ln47_22_fu_5646_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_2_q0.read(): b_buff_1_2_q0.read());
}

void matrix_mult::thread_select_ln47_23_fu_5653_p3() {
    select_ln47_23_fu_5653_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_3_q0.read(): b_buff_1_3_q0.read());
}

void matrix_mult::thread_select_ln47_24_fu_5660_p3() {
    select_ln47_24_fu_5660_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_4_q0.read(): b_buff_1_4_q0.read());
}

void matrix_mult::thread_select_ln47_25_fu_5667_p3() {
    select_ln47_25_fu_5667_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_5_q0.read(): b_buff_1_5_q0.read());
}

void matrix_mult::thread_select_ln47_26_fu_5674_p3() {
    select_ln47_26_fu_5674_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_6_q0.read(): b_buff_1_6_q0.read());
}

void matrix_mult::thread_select_ln47_27_fu_5681_p3() {
    select_ln47_27_fu_5681_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_7_q0.read(): b_buff_1_7_q0.read());
}

void matrix_mult::thread_select_ln47_28_fu_5688_p3() {
    select_ln47_28_fu_5688_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_8_q0.read(): b_buff_1_8_q0.read());
}

void matrix_mult::thread_select_ln47_29_fu_5695_p3() {
    select_ln47_29_fu_5695_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_9_q0.read(): b_buff_1_9_q0.read());
}

void matrix_mult::thread_select_ln47_2_fu_5305_p3() {
    select_ln47_2_fu_5305_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_2_q0.read(): a_buff_1_2_q0.read());
}

void matrix_mult::thread_select_ln47_30_fu_5702_p3() {
    select_ln47_30_fu_5702_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_10_q0.read(): b_buff_1_10_q0.read());
}

void matrix_mult::thread_select_ln47_31_fu_5709_p3() {
    select_ln47_31_fu_5709_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_11_q0.read(): b_buff_1_11_q0.read());
}

void matrix_mult::thread_select_ln47_32_fu_5716_p3() {
    select_ln47_32_fu_5716_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_12_q0.read(): b_buff_1_12_q0.read());
}

void matrix_mult::thread_select_ln47_33_fu_5723_p3() {
    select_ln47_33_fu_5723_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_13_q0.read(): b_buff_1_13_q0.read());
}

void matrix_mult::thread_select_ln47_34_fu_5259_p3() {
    select_ln47_34_fu_5259_p3 = (!icmp_ln47_1_fu_5254_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_fu_5254_p2.read()[0].to_bool())? b_buff_0_14_q0.read(): b_buff_1_14_q0.read());
}

void matrix_mult::thread_select_ln47_35_fu_5267_p3() {
    select_ln47_35_fu_5267_p3 = (!icmp_ln47_1_fu_5254_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_fu_5254_p2.read()[0].to_bool())? b_buff_0_15_q0.read(): b_buff_1_15_q0.read());
}

void matrix_mult::thread_select_ln47_36_fu_5738_p3() {
    select_ln47_36_fu_5738_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_16_q0.read(): b_buff_1_16_q0.read());
}

void matrix_mult::thread_select_ln47_37_fu_5275_p3() {
    select_ln47_37_fu_5275_p3 = (!icmp_ln47_1_fu_5254_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_fu_5254_p2.read()[0].to_bool())? b_buff_0_17_q0.read(): b_buff_1_17_q0.read());
}

void matrix_mult::thread_select_ln47_38_fu_5283_p3() {
    select_ln47_38_fu_5283_p3 = (!icmp_ln47_1_fu_5254_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_fu_5254_p2.read()[0].to_bool())? b_buff_0_18_q0.read(): b_buff_1_18_q0.read());
}

void matrix_mult::thread_select_ln47_39_fu_5753_p3() {
    select_ln47_39_fu_5753_p3 = (!icmp_ln47_1_reg_8458.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_8458.read()[0].to_bool())? b_buff_0_19_q0.read(): b_buff_1_19_q0.read());
}

void matrix_mult::thread_select_ln47_3_fu_5312_p3() {
    select_ln47_3_fu_5312_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_3_q0.read(): a_buff_1_3_q0.read());
}

void matrix_mult::thread_select_ln47_40_fu_5408_p3() {
    select_ln47_40_fu_5408_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_0_q0.read(): a_buff_1_0_q0.read());
}

void matrix_mult::thread_select_ln47_41_fu_5422_p3() {
    select_ln47_41_fu_5422_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_1_q0.read(): a_buff_1_1_q0.read());
}

void matrix_mult::thread_select_ln47_42_fu_5436_p3() {
    select_ln47_42_fu_5436_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_2_q0.read(): a_buff_1_2_q0.read());
}

void matrix_mult::thread_select_ln47_43_fu_5450_p3() {
    select_ln47_43_fu_5450_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_3_q0.read(): a_buff_1_3_q0.read());
}

void matrix_mult::thread_select_ln47_44_fu_5464_p3() {
    select_ln47_44_fu_5464_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_4_q0.read(): a_buff_1_4_q0.read());
}

void matrix_mult::thread_select_ln47_45_fu_5478_p3() {
    select_ln47_45_fu_5478_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_5_q0.read(): a_buff_1_5_q0.read());
}

void matrix_mult::thread_select_ln47_46_fu_5492_p3() {
    select_ln47_46_fu_5492_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_6_q0.read(): a_buff_1_6_q0.read());
}

void matrix_mult::thread_select_ln47_47_fu_5506_p3() {
    select_ln47_47_fu_5506_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_7_q0.read(): a_buff_1_7_q0.read());
}

void matrix_mult::thread_select_ln47_48_fu_5520_p3() {
    select_ln47_48_fu_5520_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_8_q0.read(): a_buff_1_8_q0.read());
}

void matrix_mult::thread_select_ln47_49_fu_5534_p3() {
    select_ln47_49_fu_5534_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_9_q0.read(): a_buff_1_9_q0.read());
}

void matrix_mult::thread_select_ln47_4_fu_5319_p3() {
    select_ln47_4_fu_5319_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_4_q0.read(): a_buff_1_4_q0.read());
}

void matrix_mult::thread_select_ln47_50_fu_5548_p3() {
    select_ln47_50_fu_5548_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_10_q0.read(): a_buff_1_10_q0.read());
}

void matrix_mult::thread_select_ln47_51_fu_5562_p3() {
    select_ln47_51_fu_5562_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_11_q0.read(): a_buff_1_11_q0.read());
}

void matrix_mult::thread_select_ln47_52_fu_5576_p3() {
    select_ln47_52_fu_5576_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_12_q0.read(): a_buff_1_12_q0.read());
}

void matrix_mult::thread_select_ln47_53_fu_5590_p3() {
    select_ln47_53_fu_5590_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_13_q0.read(): a_buff_1_13_q0.read());
}

void matrix_mult::thread_select_ln47_54_fu_5198_p3() {
    select_ln47_54_fu_5198_p3 = (!icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_14_q0.read(): a_buff_1_14_q0.read());
}

void matrix_mult::thread_select_ln47_55_fu_5212_p3() {
    select_ln47_55_fu_5212_p3 = (!icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_15_q0.read(): a_buff_1_15_q0.read());
}

void matrix_mult::thread_select_ln47_56_fu_5604_p3() {
    select_ln47_56_fu_5604_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_16_q0.read(): a_buff_1_16_q0.read());
}

void matrix_mult::thread_select_ln47_57_fu_5226_p3() {
    select_ln47_57_fu_5226_p3 = (!icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_17_q0.read(): a_buff_1_17_q0.read());
}

void matrix_mult::thread_select_ln47_58_fu_5240_p3() {
    select_ln47_58_fu_5240_p3 = (!icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter8_reg.read()[0].to_bool())? a_buff_0_18_q0.read(): a_buff_1_18_q0.read());
}

void matrix_mult::thread_select_ln47_59_fu_5618_p3() {
    select_ln47_59_fu_5618_p3 = (!icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_2_reg_7839_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_19_q0.read(): a_buff_1_19_q0.read());
}

void matrix_mult::thread_select_ln47_5_fu_5326_p3() {
    select_ln47_5_fu_5326_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_5_q0.read(): a_buff_1_5_q0.read());
}

void matrix_mult::thread_select_ln47_6_fu_5333_p3() {
    select_ln47_6_fu_5333_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_6_q0.read(): a_buff_1_6_q0.read());
}

void matrix_mult::thread_select_ln47_7_fu_5340_p3() {
    select_ln47_7_fu_5340_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_7_q0.read(): a_buff_1_7_q0.read());
}

void matrix_mult::thread_select_ln47_8_fu_5347_p3() {
    select_ln47_8_fu_5347_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_8_q0.read(): a_buff_1_8_q0.read());
}

void matrix_mult::thread_select_ln47_9_fu_5354_p3() {
    select_ln47_9_fu_5354_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_9_q0.read(): a_buff_1_9_q0.read());
}

void matrix_mult::thread_select_ln47_fu_5291_p3() {
    select_ln47_fu_5291_p3 = (!icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7767_pp2_iter9_reg.read()[0].to_bool())? a_buff_0_0_q0.read(): a_buff_1_0_q0.read());
}

void matrix_mult::thread_select_ln56_20_fu_6008_p3() {
    select_ln56_20_fu_6008_p3 = (!icmp_ln56_fu_5996_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln56_fu_5996_p2.read()[0].to_bool())? ap_phi_mux_i3_0_phi_fu_3604_p4.read(): add_ln56_17_fu_6002_p2.read());
}

void matrix_mult::thread_sext_ln56_10_fu_6582_p1() {
    sext_ln56_10_fu_6582_p1 = esl_sext<64,9>(add_ln56_29_fu_6577_p2.read());
}

void matrix_mult::thread_sext_ln56_11_fu_6593_p1() {
    sext_ln56_11_fu_6593_p1 = esl_sext<64,9>(add_ln56_30_fu_6588_p2.read());
}

void matrix_mult::thread_sext_ln56_12_fu_6614_p1() {
    sext_ln56_12_fu_6614_p1 = esl_sext<64,9>(add_ln56_31_fu_6609_p2.read());
}

void matrix_mult::thread_sext_ln56_13_fu_6625_p1() {
    sext_ln56_13_fu_6625_p1 = esl_sext<64,9>(add_ln56_32_fu_6620_p2.read());
}

void matrix_mult::thread_sext_ln56_14_fu_6646_p1() {
    sext_ln56_14_fu_6646_p1 = esl_sext<64,9>(add_ln56_33_fu_6641_p2.read());
}

void matrix_mult::thread_sext_ln56_15_fu_6657_p1() {
    sext_ln56_15_fu_6657_p1 = esl_sext<64,9>(add_ln56_34_fu_6652_p2.read());
}

void matrix_mult::thread_sext_ln56_1_fu_6443_p1() {
    sext_ln56_1_fu_6443_p1 = esl_sext<64,9>(add_ln56_20_fu_6438_p2.read());
}

void matrix_mult::thread_sext_ln56_2_fu_6459_p1() {
    sext_ln56_2_fu_6459_p1 = esl_sext<64,9>(add_ln56_21_fu_6454_p2.read());
}

void matrix_mult::thread_sext_ln56_3_fu_6470_p1() {
    sext_ln56_3_fu_6470_p1 = esl_sext<64,9>(add_ln56_22_fu_6465_p2.read());
}

void matrix_mult::thread_sext_ln56_4_fu_6486_p1() {
    sext_ln56_4_fu_6486_p1 = esl_sext<64,9>(add_ln56_23_fu_6481_p2.read());
}

void matrix_mult::thread_sext_ln56_5_fu_6497_p1() {
    sext_ln56_5_fu_6497_p1 = esl_sext<64,9>(add_ln56_24_fu_6492_p2.read());
}

void matrix_mult::thread_sext_ln56_6_fu_6518_p1() {
    sext_ln56_6_fu_6518_p1 = esl_sext<64,9>(add_ln56_25_fu_6513_p2.read());
}

void matrix_mult::thread_sext_ln56_7_fu_6529_p1() {
    sext_ln56_7_fu_6529_p1 = esl_sext<64,9>(add_ln56_26_fu_6524_p2.read());
}

void matrix_mult::thread_sext_ln56_8_fu_6550_p1() {
    sext_ln56_8_fu_6550_p1 = esl_sext<64,9>(add_ln56_27_fu_6545_p2.read());
}

void matrix_mult::thread_sext_ln56_9_fu_6561_p1() {
    sext_ln56_9_fu_6561_p1 = esl_sext<64,9>(add_ln56_28_fu_6556_p2.read());
}

void matrix_mult::thread_sext_ln56_fu_6432_p1() {
    sext_ln56_fu_6432_p1 = esl_sext<64,9>(add_ln56_19_fu_6427_p2.read());
}

void matrix_mult::thread_shl_ln1_fu_4355_p3() {
    shl_ln1_fu_4355_p3 = esl_concat<5,4>(ap_phi_mux_i1_0_phi_fu_3559_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln28_1_fu_3663_p3() {
    shl_ln28_1_fu_3663_p3 = esl_concat<5,2>(ap_phi_mux_i_0_phi_fu_3548_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln2_fu_5970_p3() {
    shl_ln2_fu_5970_p3 = esl_concat<5,4>(ap_phi_mux_i3_0_phi_fu_3604_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln35_1_fu_4363_p3() {
    shl_ln35_1_fu_4363_p3 = esl_concat<5,2>(ap_phi_mux_i1_0_phi_fu_3559_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln56_1_fu_5978_p3() {
    shl_ln56_1_fu_5978_p3 = esl_concat<5,2>(ap_phi_mux_i3_0_phi_fu_3604_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln_fu_3655_p3() {
    shl_ln_fu_3655_p3 = esl_concat<5,4>(ap_phi_mux_i_0_phi_fu_3548_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_4_fu_5904_p3() {
    tmp_4_fu_5904_p3 = esl_concat<4,4>(select_ln44_1_reg_7986_pp2_iter12_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_5_fu_5915_p3() {
    tmp_5_fu_5915_p3 = esl_concat<4,2>(select_ln44_1_reg_7986_pp2_iter12_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_6_fu_6016_p3() {
    tmp_6_fu_6016_p3 = esl_concat<5,4>(select_ln56_20_fu_6008_p3.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_7_fu_6024_p3() {
    tmp_7_fu_6024_p3 = esl_concat<5,2>(select_ln56_20_fu_6008_p3.read(), ap_const_lv2_0);
}

void matrix_mult::thread_trunc_ln44_1_fu_5147_p1() {
    trunc_ln44_1_fu_5147_p1 = grp_fu_5043_p2.read().range(4-1, 0);
}

void matrix_mult::thread_trunc_ln44_fu_5143_p1() {
    trunc_ln44_fu_5143_p1 = grp_fu_5087_p2.read().range(4-1, 0);
}

void matrix_mult::thread_zext_ln28_10_fu_4169_p1() {
    zext_ln28_10_fu_4169_p1 = esl_zext<64,9>(grp_fu_3849_p2.read());
}

void matrix_mult::thread_zext_ln28_11_fu_4193_p1() {
    zext_ln28_11_fu_4193_p1 = esl_zext<64,9>(grp_fu_3866_p2.read());
}

void matrix_mult::thread_zext_ln28_12_fu_4199_p1() {
    zext_ln28_12_fu_4199_p1 = esl_zext<64,9>(grp_fu_3883_p2.read());
}

void matrix_mult::thread_zext_ln28_13_fu_4223_p1() {
    zext_ln28_13_fu_4223_p1 = esl_zext<64,9>(grp_fu_3900_p2.read());
}

void matrix_mult::thread_zext_ln28_14_fu_4229_p1() {
    zext_ln28_14_fu_4229_p1 = esl_zext<64,9>(grp_fu_3917_p2.read());
}

void matrix_mult::thread_zext_ln28_15_fu_4253_p1() {
    zext_ln28_15_fu_4253_p1 = esl_zext<64,9>(grp_fu_3934_p2.read());
}

void matrix_mult::thread_zext_ln28_16_fu_4259_p1() {
    zext_ln28_16_fu_4259_p1 = esl_zext<64,9>(grp_fu_3951_p2.read());
}

void matrix_mult::thread_zext_ln28_17_fu_4283_p1() {
    zext_ln28_17_fu_4283_p1 = esl_zext<64,9>(grp_fu_3968_p2.read());
}

void matrix_mult::thread_zext_ln28_18_fu_4289_p1() {
    zext_ln28_18_fu_4289_p1 = esl_zext<64,9>(grp_fu_3985_p2.read());
}

void matrix_mult::thread_zext_ln28_19_fu_4313_p1() {
    zext_ln28_19_fu_4313_p1 = esl_zext<64,9>(grp_fu_4007_p2.read());
}

void matrix_mult::thread_zext_ln28_1_fu_4057_p1() {
    zext_ln28_1_fu_4057_p1 = esl_zext<64,5>(select_ln28_20_reg_6730_pp0_iter1_reg.read());
}

void matrix_mult::thread_zext_ln28_20_fu_4319_p1() {
    zext_ln28_20_fu_4319_p1 = esl_zext<64,9>(grp_fu_4024_p2.read());
}

void matrix_mult::thread_zext_ln28_21_fu_3671_p1() {
    zext_ln28_21_fu_3671_p1 = esl_zext<9,7>(shl_ln28_1_fu_3663_p3.read());
}

void matrix_mult::thread_zext_ln28_2_fu_4042_p1() {
    zext_ln28_2_fu_4042_p1 = esl_zext<64,9>(grp_fu_3713_p2.read());
}

void matrix_mult::thread_zext_ln28_3_fu_4073_p1() {
    zext_ln28_3_fu_4073_p1 = esl_zext<64,9>(grp_fu_3730_p2.read());
}

void matrix_mult::thread_zext_ln28_4_fu_4079_p1() {
    zext_ln28_4_fu_4079_p1 = esl_zext<64,9>(grp_fu_3747_p2.read());
}

void matrix_mult::thread_zext_ln28_5_fu_4103_p1() {
    zext_ln28_5_fu_4103_p1 = esl_zext<64,9>(grp_fu_3764_p2.read());
}

void matrix_mult::thread_zext_ln28_6_fu_4109_p1() {
    zext_ln28_6_fu_4109_p1 = esl_zext<64,9>(grp_fu_3781_p2.read());
}

void matrix_mult::thread_zext_ln28_7_fu_4133_p1() {
    zext_ln28_7_fu_4133_p1 = esl_zext<64,9>(grp_fu_3798_p2.read());
}

void matrix_mult::thread_zext_ln28_8_fu_4139_p1() {
    zext_ln28_8_fu_4139_p1 = esl_zext<64,9>(grp_fu_3815_p2.read());
}

void matrix_mult::thread_zext_ln28_9_fu_4163_p1() {
    zext_ln28_9_fu_4163_p1 = esl_zext<64,9>(grp_fu_3832_p2.read());
}

void matrix_mult::thread_zext_ln28_fu_4036_p1() {
    zext_ln28_fu_4036_p1 = esl_zext<64,9>(grp_fu_3681_p2.read());
}

void matrix_mult::thread_zext_ln35_10_fu_4869_p1() {
    zext_ln35_10_fu_4869_p1 = esl_zext<64,9>(grp_fu_4549_p2.read());
}

void matrix_mult::thread_zext_ln35_11_fu_4893_p1() {
    zext_ln35_11_fu_4893_p1 = esl_zext<64,9>(grp_fu_4566_p2.read());
}

void matrix_mult::thread_zext_ln35_12_fu_4899_p1() {
    zext_ln35_12_fu_4899_p1 = esl_zext<64,9>(grp_fu_4583_p2.read());
}

void matrix_mult::thread_zext_ln35_13_fu_4923_p1() {
    zext_ln35_13_fu_4923_p1 = esl_zext<64,9>(grp_fu_4600_p2.read());
}

void matrix_mult::thread_zext_ln35_14_fu_4929_p1() {
    zext_ln35_14_fu_4929_p1 = esl_zext<64,9>(grp_fu_4617_p2.read());
}

void matrix_mult::thread_zext_ln35_15_fu_4953_p1() {
    zext_ln35_15_fu_4953_p1 = esl_zext<64,9>(grp_fu_4634_p2.read());
}

void matrix_mult::thread_zext_ln35_16_fu_4959_p1() {
    zext_ln35_16_fu_4959_p1 = esl_zext<64,9>(grp_fu_4651_p2.read());
}

void matrix_mult::thread_zext_ln35_17_fu_4983_p1() {
    zext_ln35_17_fu_4983_p1 = esl_zext<64,9>(grp_fu_4668_p2.read());
}

void matrix_mult::thread_zext_ln35_18_fu_4989_p1() {
    zext_ln35_18_fu_4989_p1 = esl_zext<64,9>(grp_fu_4685_p2.read());
}

void matrix_mult::thread_zext_ln35_19_fu_5013_p1() {
    zext_ln35_19_fu_5013_p1 = esl_zext<64,9>(grp_fu_4707_p2.read());
}

void matrix_mult::thread_zext_ln35_1_fu_4757_p1() {
    zext_ln35_1_fu_4757_p1 = esl_zext<64,5>(select_ln35_20_reg_7267_pp1_iter1_reg.read());
}

void matrix_mult::thread_zext_ln35_20_fu_5019_p1() {
    zext_ln35_20_fu_5019_p1 = esl_zext<64,9>(grp_fu_4724_p2.read());
}

void matrix_mult::thread_zext_ln35_21_fu_4371_p1() {
    zext_ln35_21_fu_4371_p1 = esl_zext<9,7>(shl_ln35_1_fu_4363_p3.read());
}

void matrix_mult::thread_zext_ln35_2_fu_4742_p1() {
    zext_ln35_2_fu_4742_p1 = esl_zext<64,9>(grp_fu_4413_p2.read());
}

void matrix_mult::thread_zext_ln35_3_fu_4773_p1() {
    zext_ln35_3_fu_4773_p1 = esl_zext<64,9>(grp_fu_4430_p2.read());
}

void matrix_mult::thread_zext_ln35_4_fu_4779_p1() {
    zext_ln35_4_fu_4779_p1 = esl_zext<64,9>(grp_fu_4447_p2.read());
}

void matrix_mult::thread_zext_ln35_5_fu_4803_p1() {
    zext_ln35_5_fu_4803_p1 = esl_zext<64,9>(grp_fu_4464_p2.read());
}

void matrix_mult::thread_zext_ln35_6_fu_4809_p1() {
    zext_ln35_6_fu_4809_p1 = esl_zext<64,9>(grp_fu_4481_p2.read());
}

void matrix_mult::thread_zext_ln35_7_fu_4833_p1() {
    zext_ln35_7_fu_4833_p1 = esl_zext<64,9>(grp_fu_4498_p2.read());
}

void matrix_mult::thread_zext_ln35_8_fu_4839_p1() {
    zext_ln35_8_fu_4839_p1 = esl_zext<64,9>(grp_fu_4515_p2.read());
}

void matrix_mult::thread_zext_ln35_9_fu_4863_p1() {
    zext_ln35_9_fu_4863_p1 = esl_zext<64,9>(grp_fu_4532_p2.read());
}

void matrix_mult::thread_zext_ln35_fu_4736_p1() {
    zext_ln35_fu_4736_p1 = esl_zext<64,9>(grp_fu_4381_p2.read());
}

void matrix_mult::thread_zext_ln44_1_fu_5131_p1() {
    zext_ln44_1_fu_5131_p1 = esl_zext<64,5>(grp_fu_5087_p2.read());
}

void matrix_mult::thread_zext_ln44_2_fu_5911_p1() {
    zext_ln44_2_fu_5911_p1 = esl_zext<9,8>(tmp_4_fu_5904_p3.read());
}

void matrix_mult::thread_zext_ln44_3_fu_5922_p1() {
    zext_ln44_3_fu_5922_p1 = esl_zext<9,6>(tmp_5_fu_5915_p3.read());
}

void matrix_mult::thread_zext_ln44_4_fu_5932_p1() {
    zext_ln44_4_fu_5932_p1 = esl_zext<9,5>(select_ln44_reg_7832_pp2_iter12_reg.read());
}

void matrix_mult::thread_zext_ln44_5_fu_5941_p1() {
    zext_ln44_5_fu_5941_p1 = esl_zext<64,9>(add_ln44_1_fu_5935_p2.read());
}

void matrix_mult::thread_zext_ln44_fu_5119_p1() {
    zext_ln44_fu_5119_p1 = esl_zext<64,5>(grp_fu_5043_p2.read());
}

void matrix_mult::thread_zext_ln47_fu_5158_p1() {
    zext_ln47_fu_5158_p1 = esl_zext<64,5>(grp_fu_5107_p2.read());
}

void matrix_mult::thread_zext_ln56_10_fu_6572_p1() {
    zext_ln56_10_fu_6572_p1 = esl_zext<64,9>(urem_ln56_9_reg_9320.read());
}

void matrix_mult::thread_zext_ln56_11_fu_6599_p1() {
    zext_ln56_11_fu_6599_p1 = esl_zext<64,9>(urem_ln56_10_reg_9345.read());
}

void matrix_mult::thread_zext_ln56_12_fu_6604_p1() {
    zext_ln56_12_fu_6604_p1 = esl_zext<64,9>(urem_ln56_11_reg_9350.read());
}

void matrix_mult::thread_zext_ln56_13_fu_6631_p1() {
    zext_ln56_13_fu_6631_p1 = esl_zext<64,9>(urem_ln56_12_reg_9375.read());
}

void matrix_mult::thread_zext_ln56_14_fu_6636_p1() {
    zext_ln56_14_fu_6636_p1 = esl_zext<64,9>(urem_ln56_13_reg_9380.read());
}

void matrix_mult::thread_zext_ln56_15_fu_6663_p1() {
    zext_ln56_15_fu_6663_p1 = esl_zext<64,9>(urem_ln56_14_reg_9405.read());
}

void matrix_mult::thread_zext_ln56_16_fu_6668_p1() {
    zext_ln56_16_fu_6668_p1 = esl_zext<64,9>(urem_ln56_15_reg_9410.read());
}

void matrix_mult::thread_zext_ln56_17_fu_6673_p1() {
    zext_ln56_17_fu_6673_p1 = esl_zext<64,9>(urem_ln56_16_reg_9435.read());
}

void matrix_mult::thread_zext_ln56_18_fu_6678_p1() {
    zext_ln56_18_fu_6678_p1 = esl_zext<64,9>(urem_ln56_17_reg_9440.read());
}

void matrix_mult::thread_zext_ln56_19_fu_6683_p1() {
    zext_ln56_19_fu_6683_p1 = esl_zext<64,9>(urem_ln56_18_reg_9465.read());
}

void matrix_mult::thread_zext_ln56_1_fu_6394_p1() {
    zext_ln56_1_fu_6394_p1 = esl_zext<64,9>(grp_fu_6048_p2.read());
}

void matrix_mult::thread_zext_ln56_20_fu_6688_p1() {
    zext_ln56_20_fu_6688_p1 = esl_zext<64,9>(urem_ln56_19_reg_9470.read());
}

void matrix_mult::thread_zext_ln56_21_fu_6032_p1() {
    zext_ln56_21_fu_6032_p1 = esl_zext<9,7>(tmp_7_fu_6024_p3.read());
}

void matrix_mult::thread_zext_ln56_22_fu_6042_p1() {
    zext_ln56_22_fu_6042_p1 = esl_zext<64,9>(add_ln56_18_fu_6036_p2.read());
}

void matrix_mult::thread_zext_ln56_23_fu_6388_p1() {
    zext_ln56_23_fu_6388_p1 = esl_zext<64,9>(or_ln56_3_fu_6383_p2.read());
}

void matrix_mult::thread_zext_ln56_24_fu_6405_p1() {
    zext_ln56_24_fu_6405_p1 = esl_zext<64,9>(or_ln56_4_fu_6400_p2.read());
}

void matrix_mult::thread_zext_ln56_25_fu_6416_p1() {
    zext_ln56_25_fu_6416_p1 = esl_zext<64,9>(or_ln56_5_fu_6411_p2.read());
}

void matrix_mult::thread_zext_ln56_2_fu_6422_p1() {
    zext_ln56_2_fu_6422_p1 = esl_zext<64,9>(urem_ln56_1_reg_9200.read());
}

void matrix_mult::thread_zext_ln56_3_fu_6449_p1() {
    zext_ln56_3_fu_6449_p1 = esl_zext<64,9>(urem_ln56_2_reg_9225.read());
}

void matrix_mult::thread_zext_ln56_4_fu_6476_p1() {
    zext_ln56_4_fu_6476_p1 = esl_zext<64,9>(urem_ln56_3_reg_9230.read());
}

void matrix_mult::thread_zext_ln56_5_fu_6503_p1() {
    zext_ln56_5_fu_6503_p1 = esl_zext<64,9>(urem_ln56_4_reg_9255.read());
}

void matrix_mult::thread_zext_ln56_6_fu_6508_p1() {
    zext_ln56_6_fu_6508_p1 = esl_zext<64,9>(urem_ln56_5_reg_9260.read());
}

void matrix_mult::thread_zext_ln56_7_fu_6535_p1() {
    zext_ln56_7_fu_6535_p1 = esl_zext<64,9>(urem_ln56_6_reg_9285.read());
}

void matrix_mult::thread_zext_ln56_8_fu_6540_p1() {
    zext_ln56_8_fu_6540_p1 = esl_zext<64,9>(urem_ln56_7_reg_9290.read());
}

void matrix_mult::thread_zext_ln56_9_fu_6567_p1() {
    zext_ln56_9_fu_6567_p1 = esl_zext<64,9>(urem_ln56_8_reg_9315.read());
}

void matrix_mult::thread_zext_ln56_fu_5986_p1() {
    zext_ln56_fu_5986_p1 = esl_zext<9,7>(shl_ln56_1_fu_5978_p3.read());
}

}

