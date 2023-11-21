#include "matrix_mult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mult::thread_a_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_19_fu_3880_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_17_fu_3850_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_15_fu_3820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_13_fu_3790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_11_fu_3760_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_9_fu_3730_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_7_fu_3700_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_5_fu_3670_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_3_fu_3640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_fu_3603_p1.read());
    } else {
        a_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_20_fu_3886_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_18_fu_3856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_16_fu_3826_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_14_fu_3796_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_12_fu_3766_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_10_fu_3736_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_8_fu_3706_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_6_fu_3676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_4_fu_3646_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_2_fu_3609_p1.read());
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
        a_1_address0 =  (sc_lv<8>) (zext_ln28_19_fu_3880_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_17_fu_3850_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_15_fu_3820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_13_fu_3790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_11_fu_3760_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_9_fu_3730_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_7_fu_3700_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_5_fu_3670_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_3_fu_3640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_fu_3603_p1.read());
    } else {
        a_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_20_fu_3886_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_18_fu_3856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_16_fu_3826_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_14_fu_3796_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_12_fu_3766_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_10_fu_3736_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_8_fu_3706_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_6_fu_3676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_4_fu_3646_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_2_fu_3609_p1.read());
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_0_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_0_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_0_address0 =  (sc_lv<4>) (zext_ln28_1_fu_3624_p1.read());
    } else {
        a_buff_0_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_0_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_0_we0 = ap_const_logic_1;
    } else {
        a_buff_0_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_10_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_10_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_10_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_10_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_10_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_10_we0 = ap_const_logic_1;
    } else {
        a_buff_0_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_11_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_11_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_11_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_11_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_11_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_11_we0 = ap_const_logic_1;
    } else {
        a_buff_0_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_12_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_12_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_12_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_12_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_12_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_12_we0 = ap_const_logic_1;
    } else {
        a_buff_0_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_13_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_13_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_13_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_13_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_13_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_13_we0 = ap_const_logic_1;
    } else {
        a_buff_0_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_14_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_14_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_14_address0 = a_buff_0_14_addr_1_reg_6887.read();
    } else {
        a_buff_0_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_14_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_14_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_14_we0 = ap_const_logic_1;
    } else {
        a_buff_0_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_15_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_15_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_15_address0 = a_buff_0_15_addr_1_reg_6907.read();
    } else {
        a_buff_0_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_15_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_15_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_15_we0 = ap_const_logic_1;
    } else {
        a_buff_0_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_16_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_16_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_16_address0 = a_buff_0_16_addr_1_reg_6917.read();
    } else {
        a_buff_0_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_16_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_16_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_16_we0 = ap_const_logic_1;
    } else {
        a_buff_0_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_17_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_17_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_17_address0 = a_buff_0_17_addr_1_reg_6927.read();
    } else {
        a_buff_0_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_17_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_17_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_17_we0 = ap_const_logic_1;
    } else {
        a_buff_0_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_18_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_18_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_18_address0 = a_buff_0_18_addr_1_reg_6937.read();
    } else {
        a_buff_0_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
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
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_18_we0 = ap_const_logic_1;
    } else {
        a_buff_0_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_19_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_19_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_19_address0 = a_buff_0_19_addr_1_reg_6947.read();
    } else {
        a_buff_0_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
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
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter2_reg.read(), ap_const_lv1_1))) {
        a_buff_0_19_we0 = ap_const_logic_1;
    } else {
        a_buff_0_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_1_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_1_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_1_address0 =  (sc_lv<4>) (zext_ln28_1_fu_3624_p1.read());
    } else {
        a_buff_0_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_1_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_1_we0 = ap_const_logic_1;
    } else {
        a_buff_0_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_2_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_2_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_2_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_2_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_2_we0 = ap_const_logic_1;
    } else {
        a_buff_0_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_3_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_3_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_3_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_3_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_3_we0 = ap_const_logic_1;
    } else {
        a_buff_0_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_4_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_4_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_4_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_4_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_4_we0 = ap_const_logic_1;
    } else {
        a_buff_0_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_5_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_5_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_5_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_5_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_5_we0 = ap_const_logic_1;
    } else {
        a_buff_0_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_6_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_6_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_6_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_6_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_6_we0 = ap_const_logic_1;
    } else {
        a_buff_0_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_7_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_7_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_7_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_7_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_7_we0 = ap_const_logic_1;
    } else {
        a_buff_0_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_8_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_8_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_8_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_8_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_8_we0 = ap_const_logic_1;
    } else {
        a_buff_0_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_9_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_9_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_9_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_0_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_0_9_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_1_reg_6493_pp0_iter1_reg.read(), ap_const_lv1_1))) {
        a_buff_0_9_we0 = ap_const_logic_1;
    } else {
        a_buff_0_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_0_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_0_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_0_address0 =  (sc_lv<4>) (zext_ln28_1_fu_3624_p1.read());
    } else {
        a_buff_1_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_0_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_0_we0 = ap_const_logic_1;
    } else {
        a_buff_1_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_10_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_10_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_10_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_10_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_10_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_10_we0 = ap_const_logic_1;
    } else {
        a_buff_1_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_11_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_11_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_11_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_11_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_11_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_11_we0 = ap_const_logic_1;
    } else {
        a_buff_1_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_12_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_12_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_12_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_12_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_12_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_12_we0 = ap_const_logic_1;
    } else {
        a_buff_1_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_13_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_13_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_13_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_13_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_13_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_13_we0 = ap_const_logic_1;
    } else {
        a_buff_1_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_14_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_14_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_14_address0 = a_buff_1_14_addr_1_reg_6892.read();
    } else {
        a_buff_1_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_14_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_14_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_14_we0 = ap_const_logic_1;
    } else {
        a_buff_1_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_15_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_15_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_15_address0 = a_buff_1_15_addr_1_reg_6912.read();
    } else {
        a_buff_1_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_15_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_15_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_15_we0 = ap_const_logic_1;
    } else {
        a_buff_1_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_16_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_16_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_16_address0 = a_buff_1_16_addr_1_reg_6922.read();
    } else {
        a_buff_1_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_16_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_16_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter2_reg.read()))) {
        a_buff_1_16_we0 = ap_const_logic_1;
    } else {
        a_buff_1_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_17_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_17_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_17_address0 = a_buff_1_17_addr_1_reg_6932.read();
    } else {
        a_buff_1_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_17_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_17_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter2_reg.read()))) {
        a_buff_1_17_we0 = ap_const_logic_1;
    } else {
        a_buff_1_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_18_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_18_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_18_address0 = a_buff_1_18_addr_1_reg_6942.read();
    } else {
        a_buff_1_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter2_reg.read()))) {
        a_buff_1_18_we0 = ap_const_logic_1;
    } else {
        a_buff_1_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_19_address0 =  (sc_lv<4>) (zext_ln44_1_reg_7678.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_19_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_19_address0 = a_buff_1_19_addr_1_reg_6952.read();
    } else {
        a_buff_1_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter2_reg.read()))) {
        a_buff_1_19_we0 = ap_const_logic_1;
    } else {
        a_buff_1_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_1_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_1_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_1_address0 =  (sc_lv<4>) (zext_ln28_1_fu_3624_p1.read());
    } else {
        a_buff_1_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_1_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_1_we0 = ap_const_logic_1;
    } else {
        a_buff_1_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_2_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_2_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_2_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_2_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_2_we0 = ap_const_logic_1;
    } else {
        a_buff_1_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_3_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_3_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_3_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_3_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_3_we0 = ap_const_logic_1;
    } else {
        a_buff_1_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_4_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_4_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_4_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_4_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_4_we0 = ap_const_logic_1;
    } else {
        a_buff_1_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_5_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_5_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_5_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_5_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_5_we0 = ap_const_logic_1;
    } else {
        a_buff_1_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_6_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_6_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_6_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_6_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_6_we0 = ap_const_logic_1;
    } else {
        a_buff_1_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_7_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_7_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_7_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_7_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_7_we0 = ap_const_logic_1;
    } else {
        a_buff_1_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_8_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_8_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_8_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_8_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_8_we0 = ap_const_logic_1;
    } else {
        a_buff_1_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_9_address0 =  (sc_lv<4>) (zext_ln44_2_fu_5138_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_9_address0 =  (sc_lv<4>) (zext_ln44_1_fu_4971_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_9_address0 =  (sc_lv<4>) (zext_ln28_1_reg_6717.read());
    } else {
        a_buff_1_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_1_9_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_6493_pp0_iter1_reg.read()))) {
        a_buff_1_9_we0 = ap_const_logic_1;
    } else {
        a_buff_1_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_add_ln28_10_fu_3479_p2() {
    add_ln28_10_fu_3479_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln28_11_fu_3496_p2() {
    add_ln28_11_fu_3496_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln28_12_fu_3513_p2() {
    add_ln28_12_fu_3513_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln28_13_fu_3530_p2() {
    add_ln28_13_fu_3530_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln28_14_fu_3547_p2() {
    add_ln28_14_fu_3547_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln28_15_fu_3569_p2() {
    add_ln28_15_fu_3569_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln28_16_fu_3586_p2() {
    add_ln28_16_fu_3586_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln28_17_fu_3260_p2() {
    add_ln28_17_fu_3260_p2 = (!ap_phi_mux_i_0_phi_fu_3106_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_3106_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln28_1_fu_3326_p2() {
    add_ln28_1_fu_3326_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln28_2_fu_3343_p2() {
    add_ln28_2_fu_3343_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln28_3_fu_3360_p2() {
    add_ln28_3_fu_3360_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln28_4_fu_3377_p2() {
    add_ln28_4_fu_3377_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln28_5_fu_3394_p2() {
    add_ln28_5_fu_3394_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln28_6_fu_3411_p2() {
    add_ln28_6_fu_3411_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln28_7_fu_3428_p2() {
    add_ln28_7_fu_3428_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln28_8_fu_3445_p2() {
    add_ln28_8_fu_3445_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln28_9_fu_3462_p2() {
    add_ln28_9_fu_3462_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_6469.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln28_fu_3242_p2() {
    add_ln28_fu_3242_p2 = (!zext_ln28_21_fu_3238_p1.read().is_01() || !shl_ln_fu_3222_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln28_21_fu_3238_p1.read()) + sc_biguint<9>(shl_ln_fu_3222_p3.read()));
}

void matrix_mult::thread_add_ln35_10_fu_4179_p2() {
    add_ln35_10_fu_4179_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln35_11_fu_4196_p2() {
    add_ln35_11_fu_4196_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln35_12_fu_4213_p2() {
    add_ln35_12_fu_4213_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln35_13_fu_4230_p2() {
    add_ln35_13_fu_4230_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln35_14_fu_4247_p2() {
    add_ln35_14_fu_4247_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln35_15_fu_4269_p2() {
    add_ln35_15_fu_4269_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln35_16_fu_4286_p2() {
    add_ln35_16_fu_4286_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln35_17_fu_3960_p2() {
    add_ln35_17_fu_3960_p2 = (!ap_phi_mux_i1_0_phi_fu_3117_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_3117_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln35_18_fu_4342_p2() {
    add_ln35_18_fu_4342_p2 = (!zext_ln35_21_fu_4338_p1.read().is_01() || !tmp_4_fu_4324_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln35_21_fu_4338_p1.read()) + sc_biguint<9>(tmp_4_fu_4324_p3.read()));
}

void matrix_mult::thread_add_ln35_19_fu_4439_p2() {
    add_ln35_19_fu_4439_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln35_1_fu_4026_p2() {
    add_ln35_1_fu_4026_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln35_20_fu_4450_p2() {
    add_ln35_20_fu_4450_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln35_21_fu_4491_p2() {
    add_ln35_21_fu_4491_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln35_22_fu_4502_p2() {
    add_ln35_22_fu_4502_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln35_23_fu_4543_p2() {
    add_ln35_23_fu_4543_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln35_24_fu_4554_p2() {
    add_ln35_24_fu_4554_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln35_25_fu_4595_p2() {
    add_ln35_25_fu_4595_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln35_26_fu_4606_p2() {
    add_ln35_26_fu_4606_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln35_27_fu_4647_p2() {
    add_ln35_27_fu_4647_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln35_28_fu_4658_p2() {
    add_ln35_28_fu_4658_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln35_29_fu_4699_p2() {
    add_ln35_29_fu_4699_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln35_2_fu_4043_p2() {
    add_ln35_2_fu_4043_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln35_30_fu_4710_p2() {
    add_ln35_30_fu_4710_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln35_31_fu_4751_p2() {
    add_ln35_31_fu_4751_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln35_32_fu_4762_p2() {
    add_ln35_32_fu_4762_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln35_33_fu_4803_p2() {
    add_ln35_33_fu_4803_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln35_34_fu_4814_p2() {
    add_ln35_34_fu_4814_p2 = (!add_ln35_18_reg_7255.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_18_reg_7255.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln35_3_fu_4060_p2() {
    add_ln35_3_fu_4060_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln35_4_fu_4077_p2() {
    add_ln35_4_fu_4077_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln35_5_fu_4094_p2() {
    add_ln35_5_fu_4094_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln35_6_fu_4111_p2() {
    add_ln35_6_fu_4111_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln35_7_fu_4128_p2() {
    add_ln35_7_fu_4128_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln35_8_fu_4145_p2() {
    add_ln35_8_fu_4145_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln35_9_fu_4162_p2() {
    add_ln35_9_fu_4162_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_7006.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln35_fu_3942_p2() {
    add_ln35_fu_3942_p2 = (!zext_ln35_1_fu_3938_p1.read().is_01() || !shl_ln1_fu_3922_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln35_1_fu_3938_p1.read()) + sc_biguint<9>(shl_ln1_fu_3922_p3.read()));
}

void matrix_mult::thread_add_ln40_fu_4899_p2() {
    add_ln40_fu_4899_p2 = (!indvar_flatten_reg_3136.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten_reg_3136.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void matrix_mult::thread_add_ln44_1_fu_5702_p2() {
    add_ln44_1_fu_5702_p2 = (!add_ln44_fu_5693_p2.read().is_01() || !zext_ln47_fu_5699_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln44_fu_5693_p2.read()) + sc_biguint<9>(zext_ln47_fu_5699_p1.read()));
}

void matrix_mult::thread_add_ln44_fu_5693_p2() {
    add_ln44_fu_5693_p2 = (!zext_ln44_4_fu_5689_p1.read().is_01() || !zext_ln44_3_fu_5678_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln44_4_fu_5689_p1.read()) + sc_biguint<9>(zext_ln44_3_fu_5678_p1.read()));
}

void matrix_mult::thread_add_ln47_10_fu_5588_p2() {
    add_ln47_10_fu_5588_p2 = (!mul_ln47_5_reg_8486.read().is_01() || !mul_ln47_2_reg_8411.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_5_reg_8486.read()) + sc_biguint<32>(mul_ln47_2_reg_8411.read()));
}

void matrix_mult::thread_add_ln47_11_fu_5592_p2() {
    add_ln47_11_fu_5592_p2 = (!mul_ln47_3_reg_8416.read().is_01() || !add_ln47_10_fu_5588_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_3_reg_8416.read()) + sc_biguint<32>(add_ln47_10_fu_5588_p2.read()));
}

void matrix_mult::thread_add_ln47_12_fu_5597_p2() {
    add_ln47_12_fu_5597_p2 = (!add_ln47_9_reg_8501.read().is_01() || !add_ln47_11_fu_5592_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_9_reg_8501.read()) + sc_biguint<32>(add_ln47_11_fu_5592_p2.read()));
}

void matrix_mult::thread_add_ln47_13_fu_5602_p2() {
    add_ln47_13_fu_5602_p2 = (!mul_ln47_6_reg_8491.read().is_01() || !mul_ln47_4_reg_8481.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_6_reg_8491.read()) + sc_biguint<32>(mul_ln47_4_reg_8481.read()));
}

void matrix_mult::thread_add_ln47_14_fu_5657_p2() {
    add_ln47_14_fu_5657_p2 = (!mul_ln47_19_reg_8575.read().is_01() || !mul_ln47_7_reg_8496.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_19_reg_8575.read()) + sc_biguint<32>(mul_ln47_7_reg_8496.read()));
}

void matrix_mult::thread_add_ln47_15_fu_5661_p2() {
    add_ln47_15_fu_5661_p2 = (!mul_ln47_8_reg_8530.read().is_01() || !add_ln47_14_fu_5657_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_8_reg_8530.read()) + sc_biguint<32>(add_ln47_14_fu_5657_p2.read()));
}

void matrix_mult::thread_add_ln47_16_fu_5666_p2() {
    add_ln47_16_fu_5666_p2 = (!add_ln47_13_reg_8555.read().is_01() || !add_ln47_15_fu_5661_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_13_reg_8555.read()) + sc_biguint<32>(add_ln47_15_fu_5661_p2.read()));
}

void matrix_mult::thread_add_ln47_17_fu_5714_p2() {
    add_ln47_17_fu_5714_p2 = (!add_ln47_12_reg_8550.read().is_01() || !add_ln47_16_reg_8590.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_12_reg_8550.read()) + sc_biguint<32>(add_ln47_16_reg_8590.read()));
}

void matrix_mult::thread_add_ln47_18_fu_5718_p2() {
    add_ln47_18_fu_5718_p2 = (!add_ln47_8_reg_8585.read().is_01() || !add_ln47_17_fu_5714_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_8_reg_8585.read()) + sc_biguint<32>(add_ln47_17_fu_5714_p2.read()));
}

void matrix_mult::thread_add_ln47_19_fu_5418_p2() {
    add_ln47_19_fu_5418_p2 = (!ap_const_lv6_14.is_01() || !zext_ln47_3_fu_5415_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_14) + sc_biguint<6>(zext_ln47_3_fu_5415_p1.read()));
}

void matrix_mult::thread_add_ln47_1_fu_5465_p2() {
    add_ln47_1_fu_5465_p2 = (!mul_ln47_14_reg_8371.read().is_01() || !mul_ln47_15_reg_8376.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_14_reg_8371.read()) + sc_biguint<32>(mul_ln47_15_reg_8376.read()));
}

void matrix_mult::thread_add_ln47_20_fu_4933_p2() {
    add_ln47_20_fu_4933_p2 = (!ap_const_lv7_28.is_01() || !zext_ln47_2_reg_7572.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_28) + sc_biguint<7>(zext_ln47_2_reg_7572.read()));
}

void matrix_mult::thread_add_ln47_21_fu_4943_p2() {
    add_ln47_21_fu_4943_p2 = (!ap_const_lv7_3C.is_01() || !zext_ln47_2_reg_7572.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_3C) + sc_biguint<7>(zext_ln47_2_reg_7572.read()));
}

void matrix_mult::thread_add_ln47_22_fu_4911_p2() {
    add_ln47_22_fu_4911_p2 = (!ap_const_lv7_50.is_01() || !zext_ln47_2_fu_4908_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_50) + sc_biguint<7>(zext_ln47_2_fu_4908_p1.read()));
}

void matrix_mult::thread_add_ln47_23_fu_4922_p2() {
    add_ln47_23_fu_4922_p2 = (!ap_const_lv8_64.is_01() || !zext_ln47_1_fu_4905_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_64) + sc_biguint<8>(zext_ln47_1_fu_4905_p1.read()));
}

void matrix_mult::thread_add_ln47_24_fu_5011_p2() {
    add_ln47_24_fu_5011_p2 = (!ap_const_lv8_78.is_01() || !zext_ln47_1_reg_7565.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_78) + sc_biguint<8>(zext_ln47_1_reg_7565.read()));
}

void matrix_mult::thread_add_ln47_25_fu_4953_p2() {
    add_ln47_25_fu_4953_p2 = (!ap_const_lv8_8C.is_01() || !zext_ln47_1_reg_7565.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_8C) + sc_biguint<8>(zext_ln47_1_reg_7565.read()));
}

void matrix_mult::thread_add_ln47_26_fu_5192_p2() {
    add_ln47_26_fu_5192_p2 = (!ap_const_lv8_B4.is_01() || !zext_ln47_1_reg_7565.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_B4) + sc_biguint<8>(zext_ln47_1_reg_7565.read()));
}

void matrix_mult::thread_add_ln47_2_fu_5628_p2() {
    add_ln47_2_fu_5628_p2 = (!mul_ln47_16_reg_8570.read().is_01() || !add_ln47_1_reg_8426.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_16_reg_8570.read()) + sc_biguint<32>(add_ln47_1_reg_8426.read()));
}

void matrix_mult::thread_add_ln47_3_fu_5632_p2() {
    add_ln47_3_fu_5632_p2 = (!add_ln47_reg_8421.read().is_01() || !add_ln47_2_fu_5628_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_reg_8421.read()) + sc_biguint<32>(add_ln47_2_fu_5628_p2.read()));
}

void matrix_mult::thread_add_ln47_4_fu_5624_p2() {
    add_ln47_4_fu_5624_p2 = (!mul_ln47_9_reg_8535.read().is_01() || !mul_ln47_10_reg_8540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_9_reg_8535.read()) + sc_biguint<32>(mul_ln47_10_reg_8540.read()));
}

void matrix_mult::thread_add_ln47_5_fu_5637_p2() {
    add_ln47_5_fu_5637_p2 = (!mul_ln47_12_reg_8560.read().is_01() || !mul_ln47_13_reg_8565.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_12_reg_8560.read()) + sc_biguint<32>(mul_ln47_13_reg_8565.read()));
}

void matrix_mult::thread_add_ln47_6_fu_5641_p2() {
    add_ln47_6_fu_5641_p2 = (!mul_ln47_11_reg_8545.read().is_01() || !add_ln47_5_fu_5637_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_11_reg_8545.read()) + sc_biguint<32>(add_ln47_5_fu_5637_p2.read()));
}

void matrix_mult::thread_add_ln47_7_fu_5646_p2() {
    add_ln47_7_fu_5646_p2 = (!add_ln47_4_reg_8580.read().is_01() || !add_ln47_6_fu_5641_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_4_reg_8580.read()) + sc_biguint<32>(add_ln47_6_fu_5641_p2.read()));
}

void matrix_mult::thread_add_ln47_8_fu_5651_p2() {
    add_ln47_8_fu_5651_p2 = (!add_ln47_3_fu_5632_p2.read().is_01() || !add_ln47_7_fu_5646_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_3_fu_5632_p2.read()) + sc_biguint<32>(add_ln47_7_fu_5646_p2.read()));
}

void matrix_mult::thread_add_ln47_9_fu_5485_p2() {
    add_ln47_9_fu_5485_p2 = (!mul_ln47_1_reg_8406.read().is_01() || !mul_ln47_reg_8401.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_1_reg_8406.read()) + sc_biguint<32>(mul_ln47_reg_8401.read()));
}

void matrix_mult::thread_add_ln47_fu_5461_p2() {
    add_ln47_fu_5461_p2 = (!mul_ln47_18_reg_8386.read().is_01() || !mul_ln47_17_reg_8381.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln47_18_reg_8386.read()) + sc_biguint<32>(mul_ln47_17_reg_8381.read()));
}

void matrix_mult::thread_add_ln56_10_fu_6026_p2() {
    add_ln56_10_fu_6026_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln56_11_fu_6043_p2() {
    add_ln56_11_fu_6043_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln56_12_fu_6060_p2() {
    add_ln56_12_fu_6060_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln56_13_fu_6077_p2() {
    add_ln56_13_fu_6077_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln56_14_fu_6094_p2() {
    add_ln56_14_fu_6094_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln56_15_fu_6116_p2() {
    add_ln56_15_fu_6116_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln56_16_fu_6133_p2() {
    add_ln56_16_fu_6133_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln56_17_fu_5769_p2() {
    add_ln56_17_fu_5769_p2 = (!ap_phi_mux_i3_0_phi_fu_3163_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_3163_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln56_18_fu_5803_p2() {
    add_ln56_18_fu_5803_p2 = (!zext_ln56_21_fu_5799_p1.read().is_01() || !tmp_9_fu_5783_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln56_21_fu_5799_p1.read()) + sc_biguint<9>(tmp_9_fu_5783_p3.read()));
}

void matrix_mult::thread_add_ln56_19_fu_6194_p2() {
    add_ln56_19_fu_6194_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln56_1_fu_5873_p2() {
    add_ln56_1_fu_5873_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln56_20_fu_6205_p2() {
    add_ln56_20_fu_6205_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln56_21_fu_6221_p2() {
    add_ln56_21_fu_6221_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln56_22_fu_6232_p2() {
    add_ln56_22_fu_6232_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln56_23_fu_6248_p2() {
    add_ln56_23_fu_6248_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln56_24_fu_6259_p2() {
    add_ln56_24_fu_6259_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln56_25_fu_6280_p2() {
    add_ln56_25_fu_6280_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln56_26_fu_6291_p2() {
    add_ln56_26_fu_6291_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln56_27_fu_6312_p2() {
    add_ln56_27_fu_6312_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln56_28_fu_6323_p2() {
    add_ln56_28_fu_6323_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln56_29_fu_6344_p2() {
    add_ln56_29_fu_6344_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln56_2_fu_5890_p2() {
    add_ln56_2_fu_5890_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln56_30_fu_6355_p2() {
    add_ln56_30_fu_6355_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln56_31_fu_6376_p2() {
    add_ln56_31_fu_6376_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln56_32_fu_6387_p2() {
    add_ln56_32_fu_6387_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln56_33_fu_6408_p2() {
    add_ln56_33_fu_6408_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln56_34_fu_6419_p2() {
    add_ln56_34_fu_6419_p2 = (!add_ln56_18_reg_8634_pp3_iter1_reg.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_18_reg_8634_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln56_3_fu_5907_p2() {
    add_ln56_3_fu_5907_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln56_4_fu_5924_p2() {
    add_ln56_4_fu_5924_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln56_5_fu_5941_p2() {
    add_ln56_5_fu_5941_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln56_6_fu_5958_p2() {
    add_ln56_6_fu_5958_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln56_7_fu_5975_p2() {
    add_ln56_7_fu_5975_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln56_8_fu_5992_p2() {
    add_ln56_8_fu_5992_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln56_9_fu_6009_p2() {
    add_ln56_9_fu_6009_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln56_reg_8604.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln56_fu_5757_p2() {
    add_ln56_fu_5757_p2 = (!zext_ln56_fu_5753_p1.read().is_01() || !shl_ln2_fu_5737_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln56_fu_5753_p1.read()) + sc_biguint<9>(shl_ln2_fu_5737_p3.read()));
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

void matrix_mult::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[24];
}

void matrix_mult::thread_ap_CS_fsm_pp2_stage2() {
    ap_CS_fsm_pp2_stage2 = ap_CS_fsm.read()[25];
}

void matrix_mult::thread_ap_CS_fsm_pp2_stage3() {
    ap_CS_fsm_pp2_stage3 = ap_CS_fsm.read()[26];
}

void matrix_mult::thread_ap_CS_fsm_pp2_stage4() {
    ap_CS_fsm_pp2_stage4 = ap_CS_fsm.read()[27];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[29];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[30];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage10() {
    ap_CS_fsm_pp3_stage10 = ap_CS_fsm.read()[39];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage11() {
    ap_CS_fsm_pp3_stage11 = ap_CS_fsm.read()[40];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[31];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[32];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage4() {
    ap_CS_fsm_pp3_stage4 = ap_CS_fsm.read()[33];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage5() {
    ap_CS_fsm_pp3_stage5 = ap_CS_fsm.read()[34];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage6() {
    ap_CS_fsm_pp3_stage6 = ap_CS_fsm.read()[35];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage7() {
    ap_CS_fsm_pp3_stage7 = ap_CS_fsm.read()[36];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage8() {
    ap_CS_fsm_pp3_stage8 = ap_CS_fsm.read()[37];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage9() {
    ap_CS_fsm_pp3_stage9 = ap_CS_fsm.read()[38];
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

void matrix_mult::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[28];
}

void matrix_mult::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[41];
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

void matrix_mult::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage2() {
    ap_block_pp2_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage2_11001() {
    ap_block_pp2_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage2_subdone() {
    ap_block_pp2_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage3() {
    ap_block_pp2_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage3_11001() {
    ap_block_pp2_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage3_subdone() {
    ap_block_pp2_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage4() {
    ap_block_pp2_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage4_11001() {
    ap_block_pp2_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage4_subdone() {
    ap_block_pp2_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
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

void matrix_mult::thread_ap_block_state51_pp2_stage1_iter0() {
    ap_block_state51_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state52_pp2_stage2_iter0() {
    ap_block_state52_pp2_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state53_pp2_stage3_iter0() {
    ap_block_state53_pp2_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state54_pp2_stage4_iter0() {
    ap_block_state54_pp2_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state55_pp2_stage0_iter1() {
    ap_block_state55_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state56_pp2_stage1_iter1() {
    ap_block_state56_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state57_pp2_stage2_iter1() {
    ap_block_state57_pp2_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state58_pp2_stage3_iter1() {
    ap_block_state58_pp2_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state59_pp2_stage4_iter1() {
    ap_block_state59_pp2_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state60_pp2_stage0_iter2() {
    ap_block_state60_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state61_pp2_stage1_iter2() {
    ap_block_state61_pp2_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state62_pp2_stage2_iter2() {
    ap_block_state62_pp2_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state63_pp2_stage3_iter2() {
    ap_block_state63_pp2_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state64_pp2_stage4_iter2() {
    ap_block_state64_pp2_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state65_pp2_stage0_iter3() {
    ap_block_state65_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state66_pp2_stage1_iter3() {
    ap_block_state66_pp2_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state67_pp2_stage2_iter3() {
    ap_block_state67_pp2_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state69_pp3_stage0_iter0() {
    ap_block_state69_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state70_pp3_stage1_iter0() {
    ap_block_state70_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state71_pp3_stage2_iter0() {
    ap_block_state71_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state72_pp3_stage3_iter0() {
    ap_block_state72_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state73_pp3_stage4_iter0() {
    ap_block_state73_pp3_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state74_pp3_stage5_iter0() {
    ap_block_state74_pp3_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state75_pp3_stage6_iter0() {
    ap_block_state75_pp3_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state76_pp3_stage7_iter0() {
    ap_block_state76_pp3_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state77_pp3_stage8_iter0() {
    ap_block_state77_pp3_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state78_pp3_stage9_iter0() {
    ap_block_state78_pp3_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state79_pp3_stage10_iter0() {
    ap_block_state79_pp3_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state80_pp3_stage11_iter0() {
    ap_block_state80_pp3_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state81_pp3_stage0_iter1() {
    ap_block_state81_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state82_pp3_stage1_iter1() {
    ap_block_state82_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state83_pp3_stage2_iter1() {
    ap_block_state83_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state84_pp3_stage3_iter1() {
    ap_block_state84_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state85_pp3_stage4_iter1() {
    ap_block_state85_pp3_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state86_pp3_stage5_iter1() {
    ap_block_state86_pp3_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state87_pp3_stage6_iter1() {
    ap_block_state87_pp3_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state88_pp3_stage7_iter1() {
    ap_block_state88_pp3_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state89_pp3_stage8_iter1() {
    ap_block_state89_pp3_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state90_pp3_stage9_iter1() {
    ap_block_state90_pp3_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state91_pp3_stage10_iter1() {
    ap_block_state91_pp3_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state92_pp3_stage11_iter1() {
    ap_block_state92_pp3_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln25_fu_3210_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp1_exit_iter0_state26() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_fu_3910_p2.read())) {
        ap_condition_pp1_exit_iter0_state26 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state26 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp2_exit_iter2_state64() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter2.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0))) {
        ap_condition_pp2_exit_iter2_state64 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter2_state64 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp3_exit_iter0_state69() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_fu_5725_p2.read())) {
        ap_condition_pp3_exit_iter0_state69 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state69 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()))) {
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

void matrix_mult::thread_ap_phi_mux_i1_0_phi_fu_3117_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_reg_6997.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i1_0_phi_fu_3117_p4 = i_1_reg_7001.read();
    } else {
        ap_phi_mux_i1_0_phi_fu_3117_p4 = i1_0_reg_3113.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i3_0_phi_fu_3163_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_reg_8595.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i3_0_phi_fu_3163_p4 = i_2_reg_8599.read();
    } else {
        ap_phi_mux_i3_0_phi_fu_3163_p4 = i3_0_reg_3159.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i_0_phi_fu_3106_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln25_reg_6460.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_3106_p4 = i_reg_6464.read();
    } else {
        ap_phi_mux_i_0_phi_fu_3106_p4 = i_0_reg_3102.read();
    }
}

void matrix_mult::thread_ap_phi_mux_indvar_flatten_phi_fu_3140_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(icmp_ln40_reg_7482.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvar_flatten_phi_fu_3140_p4 = add_ln40_reg_7560.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_3140_p4 = indvar_flatten_reg_3136.read();
    }
}

void matrix_mult::thread_ap_phi_mux_m_0_phi_fu_3128_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln40_reg_7482.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_m_0_phi_fu_3128_p4 = select_ln40_reg_7555.read();
    } else {
        ap_phi_mux_m_0_phi_fu_3128_p4 = m_0_reg_3124.read();
    }
}

void matrix_mult::thread_ap_phi_mux_o_0_phi_fu_3152_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln40_reg_7482_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        ap_phi_mux_o_0_phi_fu_3152_p4 = o_reg_7880.read();
    } else {
        ap_phi_mux_o_0_phi_fu_3152_p4 = o_0_reg_3148.read();
    }
}

void matrix_mult::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_19_fu_4791_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_17_fu_4739_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_15_fu_4687_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_13_fu_4635_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_11_fu_4583_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_9_fu_4531_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_7_fu_4479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_5_fu_4427_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_3_fu_4375_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_fu_4303_p1.read());
    } else {
        b_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_20_fu_4797_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_18_fu_4745_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_16_fu_4693_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_14_fu_4641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_12_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_10_fu_4537_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_8_fu_4485_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_6_fu_4433_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_4_fu_4381_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_2_fu_4309_p1.read());
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
        b_1_address0 =  (sc_lv<8>) (zext_ln35_19_fu_4791_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_17_fu_4739_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_15_fu_4687_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_13_fu_4635_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_11_fu_4583_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_9_fu_4531_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_7_fu_4479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_5_fu_4427_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_3_fu_4375_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_fu_4303_p1.read());
    } else {
        b_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_20_fu_4797_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_18_fu_4745_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_16_fu_4693_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_14_fu_4641_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_12_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_10_fu_4537_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_8_fu_4485_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_6_fu_4433_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_4_fu_4381_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_2_fu_4309_p1.read());
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

void matrix_mult::thread_b_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln44_fu_5411_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (tmp_8_reg_7623.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln47_9_fu_5016_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln47_7_reg_7578.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln47_5_fu_4938_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_14_fu_4808_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_12_fu_4756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_10_fu_4704_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_8_fu_4652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_6_fu_4600_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_4_fu_4548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_2_fu_4496_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln35_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln35_24_fu_4392_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln35_22_fu_4348_p1.read());
    } else {
        b_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln47_4_fu_5424_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln47_11_fu_5197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln47_10_reg_7618.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln47_8_reg_7583.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln47_6_fu_4948_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_15_fu_4819_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_13_fu_4767_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_11_fu_4715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_9_fu_4663_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_7_fu_4611_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_5_fu_4559_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_3_fu_4507_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln35_1_fu_4455_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln35_25_fu_4403_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln35_23_fu_4360_p1.read());
    } else {
        b_buff_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        b_buff_0_ce1 = ap_const_logic_1;
    } else {
        b_buff_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d0 = select_ln35_18_fu_4825_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_16_fu_4773_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d0 = select_ln35_14_fu_4721_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_12_fu_4669_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_10_fu_4617_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_8_fu_4565_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_6_fu_4513_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_4_fu_4461_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_2_fu_4409_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln35_fu_4315_p3.read();
    } else {
        b_buff_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d1 = select_ln35_19_fu_4834_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_17_fu_4782_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d1 = select_ln35_15_fu_4730_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_13_fu_4678_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_11_fu_4626_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_9_fu_4574_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_7_fu_4522_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_5_fu_4470_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_3_fu_4418_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln35_1_fu_4366_p3.read();
    } else {
        b_buff_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())))) {
        b_buff_0_we0 = ap_const_logic_1;
    } else {
        b_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())))) {
        b_buff_0_we1 = ap_const_logic_1;
    } else {
        b_buff_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln47_5_reg_7598_pp2_iter2_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln44_reg_8321.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln47_9_reg_7855.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln47_10_fu_4958_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln47_7_fu_4917_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_14_fu_4808_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_12_fu_4756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_10_fu_4704_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_8_fu_4652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_6_fu_4600_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_4_fu_4548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_2_fu_4496_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln35_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln35_24_fu_4392_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln35_22_fu_4348_p1.read());
    } else {
        b_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln47_6_reg_7608_pp2_iter2_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln47_4_reg_8331.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln47_11_fu_5197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (tmp_8_fu_4963_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln47_8_fu_4928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_15_fu_4819_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_13_fu_4767_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_11_fu_4715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_9_fu_4663_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_7_fu_4611_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_5_fu_4559_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_3_fu_4507_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln35_1_fu_4455_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln35_25_fu_4403_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln35_23_fu_4360_p1.read());
    } else {
        b_buff_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)))) {
        b_buff_1_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0)))) {
        b_buff_1_ce1 = ap_const_logic_1;
    } else {
        b_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d0 = select_ln35_18_fu_4825_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_16_fu_4773_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d0 = select_ln35_14_fu_4721_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_12_fu_4669_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_10_fu_4617_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_8_fu_4565_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_6_fu_4513_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_4_fu_4461_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_2_fu_4409_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln35_fu_4315_p3.read();
    } else {
        b_buff_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d1 = select_ln35_19_fu_4834_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_17_fu_4782_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d1 = select_ln35_15_fu_4730_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_13_fu_4678_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_11_fu_4626_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_9_fu_4574_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_7_fu_4522_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_5_fu_4470_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_3_fu_4418_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln35_1_fu_4366_p3.read();
    } else {
        b_buff_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())))) {
        b_buff_1_we0 = ap_const_logic_1;
    } else {
        b_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_7030_pp1_iter2_reg.read())))) {
        b_buff_1_we1 = ap_const_logic_1;
    } else {
        b_buff_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_20_fu_6455_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_18_fu_6445_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_16_fu_6435_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_14_fu_6403_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_12_fu_6371_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_10_fu_6339_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_8_fu_6307_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_5_fu_6270_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_4_fu_6243_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_3_fu_6216_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_2_fu_6189_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln56_1_fu_6161_p1.read());
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
            c_0_address1 =  (sc_lv<8>) (zext_ln56_19_fu_6450_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_17_fu_6440_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_15_fu_6430_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_13_fu_6398_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_11_fu_6366_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_9_fu_6334_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_7_fu_6302_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln56_6_fu_6275_p1.read());
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
        c_0_d0 = reg_3202.read();
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
        c_0_d0 = reg_3194.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)))) {
        c_0_d0 = grp_fu_3177_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_0_d0 = select_ln56_reg_8676.read();
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
        c_0_d1 = reg_3202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_0_d1 = reg_3194.read();
    } else {
        c_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_1_reg_8826.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_2_reg_8672_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_3_reg_8687_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_4_reg_8696_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_5_reg_8705_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_8_reg_8732_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_10_reg_8750_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_12_reg_8768_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_14_reg_8786_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_16_reg_8804_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_18_reg_8822_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_20_reg_8844_pp3_iter1_reg.read())))) {
        c_0_we0 = ap_const_logic_1;
    } else {
        c_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_6_reg_8714_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_7_reg_8723_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_9_reg_8741_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_11_reg_8759_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_13_reg_8777_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_15_reg_8795_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_17_reg_8813_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln56_19_reg_8835_pp3_iter1_reg.read())))) {
        c_0_we1 = ap_const_logic_1;
    } else {
        c_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_20_fu_6455_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_18_fu_6445_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_16_fu_6435_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_14_fu_6403_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_12_fu_6371_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_10_fu_6339_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_8_fu_6307_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_5_fu_6270_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_4_fu_6243_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_3_fu_6216_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_2_fu_6189_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln56_1_fu_6161_p1.read());
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
            c_1_address1 =  (sc_lv<8>) (zext_ln56_19_fu_6450_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_17_fu_6440_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_15_fu_6430_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_13_fu_6398_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_11_fu_6366_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_9_fu_6334_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_7_fu_6302_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln56_6_fu_6275_p1.read());
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
        c_1_d0 = reg_3202.read();
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
        c_1_d0 = reg_3194.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)))) {
        c_1_d0 = grp_fu_3177_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_1_d0 = select_ln56_reg_8676.read();
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
        c_1_d1 = reg_3202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_1_d1 = reg_3194.read();
    } else {
        c_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_1_reg_8826.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_2_reg_8672_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_3_reg_8687_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_4_reg_8696_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_5_reg_8705_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_8_reg_8732_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_10_reg_8750_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_12_reg_8768_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_14_reg_8786_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_16_reg_8804_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_18_reg_8822_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_20_reg_8844_pp3_iter1_reg.read())))) {
        c_1_we0 = ap_const_logic_1;
    } else {
        c_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_6_reg_8714_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_7_reg_8723_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_9_reg_8741_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_11_reg_8759_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_13_reg_8777_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_15_reg_8795_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_17_reg_8813_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_19_reg_8835_pp3_iter1_reg.read())))) {
        c_1_we1 = ap_const_logic_1;
    } else {
        c_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_15_fu_6424_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_13_fu_6392_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_11_fu_6360_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_9_fu_6328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_7_fu_6296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_5_fu_6264_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_3_fu_6237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln56_1_fu_6210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln56_25_fu_6183_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln56_22_fu_5809_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln44_5_fu_5708_p1.read());
    } else {
        c_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_14_fu_6413_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_12_fu_6381_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_10_fu_6349_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_8_fu_6317_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_6_fu_6285_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_4_fu_6253_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_2_fu_6226_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln56_fu_6199_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (zext_ln56_24_fu_6172_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (zext_ln56_23_fu_6155_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())) || 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, select_ln44_2_reg_8506.read()))) {
        c_buff_0_we0 = ap_const_logic_1;
    } else {
        c_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_15_fu_6424_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_13_fu_6392_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_11_fu_6360_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_9_fu_6328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_7_fu_6296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_5_fu_6264_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_3_fu_6237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln56_1_fu_6210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln56_25_fu_6183_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln56_22_fu_5809_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln44_5_fu_5708_p1.read());
    } else {
        c_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_14_fu_6413_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_12_fu_6381_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_10_fu_6349_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_8_fu_6317_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_6_fu_6285_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_4_fu_6253_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_2_fu_6226_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln56_fu_6199_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (zext_ln56_24_fu_6172_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (zext_ln56_23_fu_6155_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())) || 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, select_ln44_2_reg_8506.read()))) {
        c_buff_1_we0 = ap_const_logic_1;
    } else {
        c_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_grp_fu_3170_p0() {
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
        grp_fu_3170_p0 = icmp_ln56_reg_8628_pp3_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_3170_p0 = icmp_ln56_reg_8628.read();
    } else {
        grp_fu_3170_p0 =  (sc_lv<1>) ("X");
    }
}

void matrix_mult::thread_grp_fu_3170_p3() {
    grp_fu_3170_p3 = (!grp_fu_3170_p0.read()[0].is_01())? sc_lv<32>(): ((grp_fu_3170_p0.read()[0].to_bool())? c_buff_0_q0.read(): c_buff_1_q0.read());
}

void matrix_mult::thread_grp_fu_3177_p3() {
    grp_fu_3177_p3 = (!icmp_ln56_reg_8628_pp3_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln56_reg_8628_pp3_iter1_reg.read()[0].to_bool())? c_buff_0_q1.read(): c_buff_1_q1.read());
}

void matrix_mult::thread_grp_fu_4867_p0() {
    grp_fu_4867_p0 = (!ap_const_lv5_1.is_01() || !m_0_reg_3124.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(m_0_reg_3124.read()));
}

void matrix_mult::thread_i_1_fu_3916_p2() {
    i_1_fu_3916_p2 = (!ap_phi_mux_i1_0_phi_fu_3117_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_3117_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_2_fu_5731_p2() {
    i_2_fu_5731_p2 = (!ap_phi_mux_i3_0_phi_fu_3163_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_3163_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_fu_3216_p2() {
    i_fu_3216_p2 = (!ap_phi_mux_i_0_phi_fu_3106_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_3106_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_icmp_ln25_fu_3210_p2() {
    icmp_ln25_fu_3210_p2 = (!ap_phi_mux_i_0_phi_fu_3106_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_3106_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln28_10_fu_3422_p2() {
    icmp_ln28_10_fu_3422_p2 = (!add_ln28_6_fu_3411_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_6_fu_3411_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_11_fu_3439_p2() {
    icmp_ln28_11_fu_3439_p2 = (!add_ln28_7_fu_3428_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_7_fu_3428_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_12_fu_3456_p2() {
    icmp_ln28_12_fu_3456_p2 = (!add_ln28_8_fu_3445_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_8_fu_3445_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_13_fu_3473_p2() {
    icmp_ln28_13_fu_3473_p2 = (!add_ln28_9_fu_3462_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_9_fu_3462_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_14_fu_3490_p2() {
    icmp_ln28_14_fu_3490_p2 = (!add_ln28_10_fu_3479_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_10_fu_3479_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_15_fu_3507_p2() {
    icmp_ln28_15_fu_3507_p2 = (!add_ln28_11_fu_3496_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_11_fu_3496_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_16_fu_3524_p2() {
    icmp_ln28_16_fu_3524_p2 = (!add_ln28_12_fu_3513_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_12_fu_3513_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_17_fu_3541_p2() {
    icmp_ln28_17_fu_3541_p2 = (!add_ln28_13_fu_3530_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_13_fu_3530_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_18_fu_3558_p2() {
    icmp_ln28_18_fu_3558_p2 = (!add_ln28_14_fu_3547_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_14_fu_3547_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_19_fu_3580_p2() {
    icmp_ln28_19_fu_3580_p2 = (!add_ln28_15_fu_3569_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_15_fu_3569_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_1_fu_3254_p2() {
    icmp_ln28_1_fu_3254_p2 = (!ap_phi_mux_i_0_phi_fu_3106_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_3106_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln28_20_fu_3597_p2() {
    icmp_ln28_20_fu_3597_p2 = (!add_ln28_16_fu_3586_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_16_fu_3586_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_2_fu_3286_p2() {
    icmp_ln28_2_fu_3286_p2 = (!or_ln28_fu_3274_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_fu_3274_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_3_fu_3303_p2() {
    icmp_ln28_3_fu_3303_p2 = (!or_ln28_1_fu_3292_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_1_fu_3292_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_4_fu_3320_p2() {
    icmp_ln28_4_fu_3320_p2 = (!or_ln28_2_fu_3309_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_2_fu_3309_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_5_fu_3337_p2() {
    icmp_ln28_5_fu_3337_p2 = (!add_ln28_1_fu_3326_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_1_fu_3326_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_6_fu_3354_p2() {
    icmp_ln28_6_fu_3354_p2 = (!add_ln28_2_fu_3343_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_2_fu_3343_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_7_fu_3371_p2() {
    icmp_ln28_7_fu_3371_p2 = (!add_ln28_3_fu_3360_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_3_fu_3360_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_8_fu_3388_p2() {
    icmp_ln28_8_fu_3388_p2 = (!add_ln28_4_fu_3377_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_4_fu_3377_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_9_fu_3405_p2() {
    icmp_ln28_9_fu_3405_p2 = (!add_ln28_5_fu_3394_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_5_fu_3394_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_fu_3564_p2() {
    icmp_ln28_fu_3564_p2 = (!add_ln28_reg_6469.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_reg_6469.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln32_fu_3910_p2() {
    icmp_ln32_fu_3910_p2 = (!ap_phi_mux_i1_0_phi_fu_3117_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i1_0_phi_fu_3117_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln35_10_fu_4122_p2() {
    icmp_ln35_10_fu_4122_p2 = (!add_ln35_6_fu_4111_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_6_fu_4111_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_11_fu_4139_p2() {
    icmp_ln35_11_fu_4139_p2 = (!add_ln35_7_fu_4128_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_7_fu_4128_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_12_fu_4156_p2() {
    icmp_ln35_12_fu_4156_p2 = (!add_ln35_8_fu_4145_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_8_fu_4145_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_13_fu_4173_p2() {
    icmp_ln35_13_fu_4173_p2 = (!add_ln35_9_fu_4162_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_9_fu_4162_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_14_fu_4190_p2() {
    icmp_ln35_14_fu_4190_p2 = (!add_ln35_10_fu_4179_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_10_fu_4179_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_15_fu_4207_p2() {
    icmp_ln35_15_fu_4207_p2 = (!add_ln35_11_fu_4196_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_11_fu_4196_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_16_fu_4224_p2() {
    icmp_ln35_16_fu_4224_p2 = (!add_ln35_12_fu_4213_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_12_fu_4213_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_17_fu_4241_p2() {
    icmp_ln35_17_fu_4241_p2 = (!add_ln35_13_fu_4230_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_13_fu_4230_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_18_fu_4258_p2() {
    icmp_ln35_18_fu_4258_p2 = (!add_ln35_14_fu_4247_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_14_fu_4247_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_19_fu_4280_p2() {
    icmp_ln35_19_fu_4280_p2 = (!add_ln35_15_fu_4269_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_15_fu_4269_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_1_fu_3954_p2() {
    icmp_ln35_1_fu_3954_p2 = (!ap_phi_mux_i1_0_phi_fu_3117_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_3117_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln35_20_fu_4297_p2() {
    icmp_ln35_20_fu_4297_p2 = (!add_ln35_16_fu_4286_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_16_fu_4286_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_2_fu_3986_p2() {
    icmp_ln35_2_fu_3986_p2 = (!or_ln35_fu_3974_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_fu_3974_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_3_fu_4003_p2() {
    icmp_ln35_3_fu_4003_p2 = (!or_ln35_1_fu_3992_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_1_fu_3992_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_4_fu_4020_p2() {
    icmp_ln35_4_fu_4020_p2 = (!or_ln35_2_fu_4009_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_2_fu_4009_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_5_fu_4037_p2() {
    icmp_ln35_5_fu_4037_p2 = (!add_ln35_1_fu_4026_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_1_fu_4026_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_6_fu_4054_p2() {
    icmp_ln35_6_fu_4054_p2 = (!add_ln35_2_fu_4043_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_2_fu_4043_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_7_fu_4071_p2() {
    icmp_ln35_7_fu_4071_p2 = (!add_ln35_3_fu_4060_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_3_fu_4060_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_8_fu_4088_p2() {
    icmp_ln35_8_fu_4088_p2 = (!add_ln35_4_fu_4077_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_4_fu_4077_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_9_fu_4105_p2() {
    icmp_ln35_9_fu_4105_p2 = (!add_ln35_5_fu_4094_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_5_fu_4094_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_fu_4264_p2() {
    icmp_ln35_fu_4264_p2 = (!add_ln35_reg_7006.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_reg_7006.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln40_fu_4855_p2() {
    icmp_ln40_fu_4855_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_3140_p4.read().is_01() || !ap_const_lv9_190.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_3140_p4.read() == ap_const_lv9_190);
}

void matrix_mult::thread_icmp_ln42_fu_4873_p2() {
    icmp_ln42_fu_4873_p2 = (!ap_phi_mux_o_0_phi_fu_3152_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_o_0_phi_fu_3152_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln47_1_fu_4887_p2() {
    icmp_ln47_1_fu_4887_p2 = (!m_reg_7486.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(m_reg_7486.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln47_fu_4849_p2() {
    icmp_ln47_fu_4849_p2 = (!m_0_reg_3124.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(m_0_reg_3124.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln53_fu_5725_p2() {
    icmp_ln53_fu_5725_p2 = (!ap_phi_mux_i3_0_phi_fu_3163_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i3_0_phi_fu_3163_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln56_10_fu_5969_p2() {
    icmp_ln56_10_fu_5969_p2 = (!add_ln56_6_fu_5958_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_6_fu_5958_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_11_fu_5986_p2() {
    icmp_ln56_11_fu_5986_p2 = (!add_ln56_7_fu_5975_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_7_fu_5975_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_12_fu_6003_p2() {
    icmp_ln56_12_fu_6003_p2 = (!add_ln56_8_fu_5992_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_8_fu_5992_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_13_fu_6020_p2() {
    icmp_ln56_13_fu_6020_p2 = (!add_ln56_9_fu_6009_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_9_fu_6009_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_14_fu_6037_p2() {
    icmp_ln56_14_fu_6037_p2 = (!add_ln56_10_fu_6026_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_10_fu_6026_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_15_fu_6054_p2() {
    icmp_ln56_15_fu_6054_p2 = (!add_ln56_11_fu_6043_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_11_fu_6043_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_16_fu_6071_p2() {
    icmp_ln56_16_fu_6071_p2 = (!add_ln56_12_fu_6060_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_12_fu_6060_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_17_fu_6088_p2() {
    icmp_ln56_17_fu_6088_p2 = (!add_ln56_13_fu_6077_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_13_fu_6077_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_18_fu_6105_p2() {
    icmp_ln56_18_fu_6105_p2 = (!add_ln56_14_fu_6094_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_14_fu_6094_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_19_fu_6127_p2() {
    icmp_ln56_19_fu_6127_p2 = (!add_ln56_15_fu_6116_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_15_fu_6116_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_1_fu_6111_p2() {
    icmp_ln56_1_fu_6111_p2 = (!add_ln56_reg_8604.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_reg_8604.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_20_fu_6144_p2() {
    icmp_ln56_20_fu_6144_p2 = (!add_ln56_16_fu_6133_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_16_fu_6133_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_2_fu_5833_p2() {
    icmp_ln56_2_fu_5833_p2 = (!or_ln56_fu_5821_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln56_fu_5821_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_3_fu_5850_p2() {
    icmp_ln56_3_fu_5850_p2 = (!or_ln56_1_fu_5839_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln56_1_fu_5839_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_4_fu_5867_p2() {
    icmp_ln56_4_fu_5867_p2 = (!or_ln56_2_fu_5856_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln56_2_fu_5856_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_5_fu_5884_p2() {
    icmp_ln56_5_fu_5884_p2 = (!add_ln56_1_fu_5873_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_1_fu_5873_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_6_fu_5901_p2() {
    icmp_ln56_6_fu_5901_p2 = (!add_ln56_2_fu_5890_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_2_fu_5890_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_7_fu_5918_p2() {
    icmp_ln56_7_fu_5918_p2 = (!add_ln56_3_fu_5907_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_3_fu_5907_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_8_fu_5935_p2() {
    icmp_ln56_8_fu_5935_p2 = (!add_ln56_4_fu_5924_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_4_fu_5924_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_9_fu_5952_p2() {
    icmp_ln56_9_fu_5952_p2 = (!add_ln56_5_fu_5941_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln56_5_fu_5941_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln56_fu_5763_p2() {
    icmp_ln56_fu_5763_p2 = (!ap_phi_mux_i3_0_phi_fu_3163_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_3163_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_m_fu_4861_p2() {
    m_fu_4861_p2 = (!ap_const_lv5_1.is_01() || !m_0_reg_3124.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(m_0_reg_3124.read()));
}

void matrix_mult::thread_mul_ln47_10_fu_5578_p2() {
    mul_ln47_10_fu_5578_p2 = (!select_ln44_13_reg_8291.read().is_01() || !reg_3186.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_13_reg_8291.read()) * sc_bigint<32>(reg_3186.read());
}

void matrix_mult::thread_mul_ln47_11_fu_5583_p2() {
    mul_ln47_11_fu_5583_p2 = (!select_ln44_14_reg_8296.read().is_01() || !reg_3190.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_14_reg_8296.read()) * sc_bigint<32>(reg_3190.read());
}

void matrix_mult::thread_mul_ln47_12_fu_5606_p2() {
    mul_ln47_12_fu_5606_p2 = (!select_ln44_15_reg_8510.read().is_01() || !reg_3186.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_15_reg_8510.read()) * sc_bigint<32>(reg_3186.read());
}

void matrix_mult::thread_mul_ln47_13_fu_5611_p2() {
    mul_ln47_13_fu_5611_p2 = (!select_ln44_16_reg_8515.read().is_01() || !reg_3190.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_16_reg_8515.read()) * sc_bigint<32>(reg_3190.read());
}

void matrix_mult::thread_mul_ln47_14_fu_5429_p2() {
    mul_ln47_14_fu_5429_p2 = (!select_ln44_17_reg_8301.read().is_01() || !b_buff_1_load_4_reg_7638.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_17_reg_8301.read()) * sc_bigint<32>(b_buff_1_load_4_reg_7638.read());
}

void matrix_mult::thread_mul_ln47_15_fu_5433_p2() {
    mul_ln47_15_fu_5433_p2 = (!select_ln44_18_reg_8306.read().is_01() || !b_buff_1_load_5_reg_7643.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_18_reg_8306.read()) * sc_bigint<32>(b_buff_1_load_5_reg_7643.read());
}

void matrix_mult::thread_mul_ln47_16_fu_5616_p2() {
    mul_ln47_16_fu_5616_p2 = (!select_ln44_19_reg_8520.read().is_01() || !b_buff_1_load_6_reg_8351.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_19_reg_8520.read()) * sc_bigint<32>(b_buff_1_load_6_reg_8351.read());
}

void matrix_mult::thread_mul_ln47_17_fu_5437_p2() {
    mul_ln47_17_fu_5437_p2 = (!select_ln44_20_reg_8311.read().is_01() || !b_buff_1_load_7_reg_7668.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_20_reg_8311.read()) * sc_bigint<32>(b_buff_1_load_7_reg_7668.read());
}

void matrix_mult::thread_mul_ln47_18_fu_5441_p2() {
    mul_ln47_18_fu_5441_p2 = (!select_ln44_21_reg_8316.read().is_01() || !b_buff_1_load_8_reg_7673.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_21_reg_8316.read()) * sc_bigint<32>(b_buff_1_load_8_reg_7673.read());
}

void matrix_mult::thread_mul_ln47_19_fu_5620_p2() {
    mul_ln47_19_fu_5620_p2 = (!select_ln44_22_reg_8525.read().is_01() || !b_buff_1_load_9_reg_8356.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_22_reg_8525.read()) * sc_bigint<32>(b_buff_1_load_9_reg_8356.read());
}

void matrix_mult::thread_mul_ln47_1_fu_5449_p2() {
    mul_ln47_1_fu_5449_p2 = (!select_ln44_4_reg_8246.read().is_01() || !b_buff_0_load_1_reg_8366.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_4_reg_8246.read()) * sc_bigint<32>(b_buff_0_load_1_reg_8366.read());
}

void matrix_mult::thread_mul_ln47_2_fu_5453_p2() {
    mul_ln47_2_fu_5453_p2 = (!select_ln44_5_reg_8251.read().is_01() || !b_buff_0_load_2_reg_7658.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_5_reg_8251.read()) * sc_bigint<32>(b_buff_0_load_2_reg_7658.read());
}

void matrix_mult::thread_mul_ln47_3_fu_5457_p2() {
    mul_ln47_3_fu_5457_p2 = (!select_ln44_6_reg_8256.read().is_01() || !b_buff_0_load_3_reg_7663.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_6_reg_8256.read()) * sc_bigint<32>(b_buff_0_load_3_reg_7663.read());
}

void matrix_mult::thread_mul_ln47_4_fu_5469_p2() {
    mul_ln47_4_fu_5469_p2 = (!select_ln44_7_reg_8261.read().is_01() || !b_buff_0_load_4_reg_7870.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_7_reg_8261.read()) * sc_bigint<32>(b_buff_0_load_4_reg_7870.read());
}

void matrix_mult::thread_mul_ln47_5_fu_5473_p2() {
    mul_ln47_5_fu_5473_p2 = (!select_ln44_8_reg_8266.read().is_01() || !b_buff_0_load_5_reg_7875.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_8_reg_8266.read()) * sc_bigint<32>(b_buff_0_load_5_reg_7875.read());
}

void matrix_mult::thread_mul_ln47_6_fu_5477_p2() {
    mul_ln47_6_fu_5477_p2 = (!select_ln44_9_reg_8271.read().is_01() || !b_buff_0_load_6_reg_8191.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_9_reg_8271.read()) * sc_bigint<32>(b_buff_0_load_6_reg_8191.read());
}

void matrix_mult::thread_mul_ln47_7_fu_5481_p2() {
    mul_ln47_7_fu_5481_p2 = (!select_ln44_10_reg_8276.read().is_01() || !b_buff_0_load_7_reg_8196.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_10_reg_8276.read()) * sc_bigint<32>(b_buff_0_load_7_reg_8196.read());
}

void matrix_mult::thread_mul_ln47_8_fu_5570_p2() {
    mul_ln47_8_fu_5570_p2 = (!select_ln44_11_reg_8281.read().is_01() || !b_buff_0_load_8_reg_8341.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_11_reg_8281.read()) * sc_bigint<32>(b_buff_0_load_8_reg_8341.read());
}

void matrix_mult::thread_mul_ln47_9_fu_5574_p2() {
    mul_ln47_9_fu_5574_p2 = (!select_ln44_12_reg_8286.read().is_01() || !b_buff_0_load_9_reg_8346.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_12_reg_8286.read()) * sc_bigint<32>(b_buff_0_load_9_reg_8346.read());
}

void matrix_mult::thread_mul_ln47_fu_5445_p2() {
    mul_ln47_fu_5445_p2 = (!select_ln44_3_reg_8241.read().is_01() || !b_buff_0_load_reg_8361.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln44_3_reg_8241.read()) * sc_bigint<32>(b_buff_0_load_reg_8361.read());
}

void matrix_mult::thread_o_fu_5021_p2() {
    o_fu_5021_p2 = (!select_ln44_reg_7519.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(select_ln44_reg_7519.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_or_ln28_1_fu_3292_p2() {
    or_ln28_1_fu_3292_p2 = (add_ln28_reg_6469.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln28_2_fu_3309_p2() {
    or_ln28_2_fu_3309_p2 = (add_ln28_reg_6469.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln28_fu_3274_p2() {
    or_ln28_fu_3274_p2 = (add_ln28_fu_3242_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln35_1_fu_3992_p2() {
    or_ln35_1_fu_3992_p2 = (add_ln35_reg_7006.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln35_2_fu_4009_p2() {
    or_ln35_2_fu_4009_p2 = (add_ln35_reg_7006.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln35_3_fu_4354_p2() {
    or_ln35_3_fu_4354_p2 = (add_ln35_18_fu_4342_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln35_4_fu_4387_p2() {
    or_ln35_4_fu_4387_p2 = (add_ln35_18_reg_7255.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln35_5_fu_4398_p2() {
    or_ln35_5_fu_4398_p2 = (add_ln35_18_reg_7255.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln35_fu_3974_p2() {
    or_ln35_fu_3974_p2 = (add_ln35_fu_3942_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln56_1_fu_5839_p2() {
    or_ln56_1_fu_5839_p2 = (add_ln56_reg_8604.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln56_2_fu_5856_p2() {
    or_ln56_2_fu_5856_p2 = (add_ln56_reg_8604.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln56_3_fu_6150_p2() {
    or_ln56_3_fu_6150_p2 = (add_ln56_18_reg_8634.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln56_4_fu_6167_p2() {
    or_ln56_4_fu_6167_p2 = (add_ln56_18_reg_8634_pp3_iter1_reg.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln56_5_fu_6178_p2() {
    or_ln56_5_fu_6178_p2 = (add_ln56_18_reg_8634_pp3_iter1_reg.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln56_fu_5821_p2() {
    or_ln56_fu_5821_p2 = (add_ln56_fu_5757_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_select_ln28_10_fu_3772_p3() {
    select_ln28_10_fu_3772_p3 = (!icmp_ln28_11_reg_6597_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_11_reg_6597_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_11_fu_3781_p3() {
    select_ln28_11_fu_3781_p3 = (!icmp_ln28_12_reg_6607_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_12_reg_6607_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_12_fu_3802_p3() {
    select_ln28_12_fu_3802_p3 = (!icmp_ln28_13_reg_6617_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_13_reg_6617_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_13_fu_3811_p3() {
    select_ln28_13_fu_3811_p3 = (!icmp_ln28_14_reg_6627_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_14_reg_6627_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_14_fu_3832_p3() {
    select_ln28_14_fu_3832_p3 = (!icmp_ln28_15_reg_6637_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_15_reg_6637_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_15_fu_3841_p3() {
    select_ln28_15_fu_3841_p3 = (!icmp_ln28_16_reg_6647_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_16_reg_6647_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_16_fu_3862_p3() {
    select_ln28_16_fu_3862_p3 = (!icmp_ln28_17_reg_6657_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_17_reg_6657_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_17_fu_3871_p3() {
    select_ln28_17_fu_3871_p3 = (!icmp_ln28_18_reg_6667_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_18_reg_6667_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_18_fu_3892_p3() {
    select_ln28_18_fu_3892_p3 = (!icmp_ln28_19_reg_6682_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_19_reg_6682_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_19_fu_3901_p3() {
    select_ln28_19_fu_3901_p3 = (!icmp_ln28_20_reg_6692_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_20_reg_6692_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_1_fu_3631_p3() {
    select_ln28_1_fu_3631_p3 = (!icmp_ln28_2_reg_6507_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_2_reg_6507_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_20_fu_3266_p3() {
    select_ln28_20_fu_3266_p3 = (!icmp_ln28_1_fu_3254_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln28_1_fu_3254_p2.read()[0].to_bool())? ap_phi_mux_i_0_phi_fu_3106_p4.read(): add_ln28_17_fu_3260_p2.read());
}

void matrix_mult::thread_select_ln28_2_fu_3652_p3() {
    select_ln28_2_fu_3652_p3 = (!icmp_ln28_3_reg_6517_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_3_reg_6517_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_3_fu_3661_p3() {
    select_ln28_3_fu_3661_p3 = (!icmp_ln28_4_reg_6527_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_4_reg_6527_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_4_fu_3682_p3() {
    select_ln28_4_fu_3682_p3 = (!icmp_ln28_5_reg_6537_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_5_reg_6537_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_5_fu_3691_p3() {
    select_ln28_5_fu_3691_p3 = (!icmp_ln28_6_reg_6547_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_6_reg_6547_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_6_fu_3712_p3() {
    select_ln28_6_fu_3712_p3 = (!icmp_ln28_7_reg_6557_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_7_reg_6557_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_7_fu_3721_p3() {
    select_ln28_7_fu_3721_p3 = (!icmp_ln28_8_reg_6567_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_8_reg_6567_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_8_fu_3742_p3() {
    select_ln28_8_fu_3742_p3 = (!icmp_ln28_9_reg_6577_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_9_reg_6577_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_9_fu_3751_p3() {
    select_ln28_9_fu_3751_p3 = (!icmp_ln28_10_reg_6587_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_10_reg_6587_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_fu_3615_p3() {
    select_ln28_fu_3615_p3 = (!icmp_ln28_reg_6672.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_reg_6672.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln35_10_fu_4617_p3() {
    select_ln35_10_fu_4617_p3 = (!icmp_ln35_11_reg_7135_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_11_reg_7135_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_11_fu_4626_p3() {
    select_ln35_11_fu_4626_p3 = (!icmp_ln35_12_reg_7145_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_12_reg_7145_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_12_fu_4669_p3() {
    select_ln35_12_fu_4669_p3 = (!icmp_ln35_13_reg_7155_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_13_reg_7155_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_13_fu_4678_p3() {
    select_ln35_13_fu_4678_p3 = (!icmp_ln35_14_reg_7165_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_14_reg_7165_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_14_fu_4721_p3() {
    select_ln35_14_fu_4721_p3 = (!icmp_ln35_15_reg_7175_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_15_reg_7175_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_15_fu_4730_p3() {
    select_ln35_15_fu_4730_p3 = (!icmp_ln35_16_reg_7185_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_16_reg_7185_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_16_fu_4773_p3() {
    select_ln35_16_fu_4773_p3 = (!icmp_ln35_17_reg_7195_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_17_reg_7195_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_17_fu_4782_p3() {
    select_ln35_17_fu_4782_p3 = (!icmp_ln35_18_reg_7205_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_18_reg_7205_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_18_fu_4825_p3() {
    select_ln35_18_fu_4825_p3 = (!icmp_ln35_19_reg_7220_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_19_reg_7220_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_19_fu_4834_p3() {
    select_ln35_19_fu_4834_p3 = (!icmp_ln35_20_reg_7230_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_20_reg_7230_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_1_fu_4366_p3() {
    select_ln35_1_fu_4366_p3 = (!icmp_ln35_2_reg_7045_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_2_reg_7045_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_20_fu_3966_p3() {
    select_ln35_20_fu_3966_p3 = (!icmp_ln35_1_fu_3954_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln35_1_fu_3954_p2.read()[0].to_bool())? ap_phi_mux_i1_0_phi_fu_3117_p4.read(): add_ln35_17_fu_3960_p2.read());
}

void matrix_mult::thread_select_ln35_2_fu_4409_p3() {
    select_ln35_2_fu_4409_p3 = (!icmp_ln35_3_reg_7055_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_3_reg_7055_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_3_fu_4418_p3() {
    select_ln35_3_fu_4418_p3 = (!icmp_ln35_4_reg_7065_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_4_reg_7065_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_4_fu_4461_p3() {
    select_ln35_4_fu_4461_p3 = (!icmp_ln35_5_reg_7075_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_5_reg_7075_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_5_fu_4470_p3() {
    select_ln35_5_fu_4470_p3 = (!icmp_ln35_6_reg_7085_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_6_reg_7085_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_6_fu_4513_p3() {
    select_ln35_6_fu_4513_p3 = (!icmp_ln35_7_reg_7095_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_7_reg_7095_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_7_fu_4522_p3() {
    select_ln35_7_fu_4522_p3 = (!icmp_ln35_8_reg_7105_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_8_reg_7105_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_8_fu_4565_p3() {
    select_ln35_8_fu_4565_p3 = (!icmp_ln35_9_reg_7115_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_9_reg_7115_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_9_fu_4574_p3() {
    select_ln35_9_fu_4574_p3 = (!icmp_ln35_10_reg_7125_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_10_reg_7125_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_fu_4315_p3() {
    select_ln35_fu_4315_p3 = (!icmp_ln35_reg_7210.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_reg_7210.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln40_fu_4892_p3() {
    select_ln40_fu_4892_p3 = (!icmp_ln42_fu_4873_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln42_fu_4873_p2.read()[0].to_bool())? m_reg_7486.read(): m_0_reg_3124.read());
}

void matrix_mult::thread_select_ln44_10_fu_5301_p3() {
    select_ln44_10_fu_5301_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_27_fu_5294_p3.read(): select_ln47_7_reg_7920.read());
}

void matrix_mult::thread_select_ln44_11_fu_5314_p3() {
    select_ln44_11_fu_5314_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_28_fu_5307_p3.read(): select_ln47_8_reg_7925.read());
}

void matrix_mult::thread_select_ln44_12_fu_5327_p3() {
    select_ln44_12_fu_5327_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_29_fu_5320_p3.read(): select_ln47_9_reg_7930.read());
}

void matrix_mult::thread_select_ln44_13_fu_5340_p3() {
    select_ln44_13_fu_5340_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_30_fu_5333_p3.read(): select_ln47_10_reg_7935.read());
}

void matrix_mult::thread_select_ln44_14_fu_5353_p3() {
    select_ln44_14_fu_5353_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_31_fu_5346_p3.read(): select_ln47_11_reg_7940.read());
}

void matrix_mult::thread_select_ln44_15_fu_5527_p3() {
    select_ln44_15_fu_5527_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_32_fu_5522_p3.read(): select_ln47_12_fu_5489_p3.read());
}

void matrix_mult::thread_select_ln44_16_fu_5539_p3() {
    select_ln44_16_fu_5539_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_33_fu_5534_p3.read(): select_ln47_13_fu_5496_p3.read());
}

void matrix_mult::thread_select_ln44_17_fu_5366_p3() {
    select_ln44_17_fu_5366_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_34_fu_5359_p3.read(): select_ln47_14_reg_7945.read());
}

void matrix_mult::thread_select_ln44_18_fu_5379_p3() {
    select_ln44_18_fu_5379_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_35_fu_5372_p3.read(): select_ln47_15_reg_7950.read());
}

void matrix_mult::thread_select_ln44_19_fu_5551_p3() {
    select_ln44_19_fu_5551_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_36_fu_5546_p3.read(): select_ln47_16_fu_5503_p3.read());
}

void matrix_mult::thread_select_ln44_1_fu_5186_p3() {
    select_ln44_1_fu_5186_p3 = (!icmp_ln42_reg_7493.read()[0].is_01())? sc_lv<4>(): ((icmp_ln42_reg_7493.read()[0].to_bool())? trunc_ln44_fu_5182_p1.read(): trunc_ln44_1_reg_7850.read());
}

void matrix_mult::thread_select_ln44_20_fu_5392_p3() {
    select_ln44_20_fu_5392_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_37_fu_5385_p3.read(): select_ln47_17_reg_7955.read());
}

void matrix_mult::thread_select_ln44_21_fu_5405_p3() {
    select_ln44_21_fu_5405_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_38_fu_5398_p3.read(): select_ln47_18_reg_7960.read());
}

void matrix_mult::thread_select_ln44_22_fu_5563_p3() {
    select_ln44_22_fu_5563_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_39_fu_5558_p3.read(): select_ln47_19_fu_5510_p3.read());
}

void matrix_mult::thread_select_ln44_2_fu_5517_p3() {
    select_ln44_2_fu_5517_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<1>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? icmp_ln47_1_reg_7530_pp2_iter1_reg.read(): icmp_ln47_reg_7457_pp2_iter2_reg.read());
}

void matrix_mult::thread_select_ln44_3_fu_5210_p3() {
    select_ln44_3_fu_5210_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_20_fu_5203_p3.read(): select_ln47_reg_7885.read());
}

void matrix_mult::thread_select_ln44_4_fu_5223_p3() {
    select_ln44_4_fu_5223_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_21_fu_5216_p3.read(): select_ln47_1_reg_7890.read());
}

void matrix_mult::thread_select_ln44_5_fu_5236_p3() {
    select_ln44_5_fu_5236_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_22_fu_5229_p3.read(): select_ln47_2_reg_7895.read());
}

void matrix_mult::thread_select_ln44_6_fu_5249_p3() {
    select_ln44_6_fu_5249_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_23_fu_5242_p3.read(): select_ln47_3_reg_7900.read());
}

void matrix_mult::thread_select_ln44_7_fu_5262_p3() {
    select_ln44_7_fu_5262_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_24_fu_5255_p3.read(): select_ln47_4_reg_7905.read());
}

void matrix_mult::thread_select_ln44_8_fu_5275_p3() {
    select_ln44_8_fu_5275_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_25_fu_5268_p3.read(): select_ln47_5_reg_7910.read());
}

void matrix_mult::thread_select_ln44_9_fu_5288_p3() {
    select_ln44_9_fu_5288_p3 = (!icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln42_reg_7493_pp2_iter1_reg.read()[0].to_bool())? select_ln47_26_fu_5281_p3.read(): select_ln47_6_reg_7915.read());
}

void matrix_mult::thread_select_ln44_fu_4879_p3() {
    select_ln44_fu_4879_p3 = (!icmp_ln42_fu_4873_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln42_fu_4873_p2.read()[0].to_bool())? ap_const_lv5_0: ap_phi_mux_o_0_phi_fu_3152_p4.read());
}

void matrix_mult::thread_select_ln47_10_fu_5096_p3() {
    select_ln47_10_fu_5096_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_10_q0.read(): a_buff_1_10_q0.read());
}

void matrix_mult::thread_select_ln47_11_fu_5103_p3() {
    select_ln47_11_fu_5103_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_11_q0.read(): a_buff_1_11_q0.read());
}

void matrix_mult::thread_select_ln47_12_fu_5489_p3() {
    select_ln47_12_fu_5489_p3 = (!icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].to_bool())? a_buff_0_12_q0.read(): a_buff_1_12_q0.read());
}

void matrix_mult::thread_select_ln47_13_fu_5496_p3() {
    select_ln47_13_fu_5496_p3 = (!icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].to_bool())? a_buff_0_13_q0.read(): a_buff_1_13_q0.read());
}

void matrix_mult::thread_select_ln47_14_fu_5110_p3() {
    select_ln47_14_fu_5110_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_14_q0.read(): a_buff_1_14_q0.read());
}

void matrix_mult::thread_select_ln47_15_fu_5117_p3() {
    select_ln47_15_fu_5117_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_15_q0.read(): a_buff_1_15_q0.read());
}

void matrix_mult::thread_select_ln47_16_fu_5503_p3() {
    select_ln47_16_fu_5503_p3 = (!icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].to_bool())? a_buff_0_16_q0.read(): a_buff_1_16_q0.read());
}

void matrix_mult::thread_select_ln47_17_fu_5124_p3() {
    select_ln47_17_fu_5124_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_17_q0.read(): a_buff_1_17_q0.read());
}

void matrix_mult::thread_select_ln47_18_fu_5131_p3() {
    select_ln47_18_fu_5131_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_18_q0.read(): a_buff_1_18_q0.read());
}

void matrix_mult::thread_select_ln47_19_fu_5510_p3() {
    select_ln47_19_fu_5510_p3 = (!icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter2_reg.read()[0].to_bool())? a_buff_0_19_q0.read(): a_buff_1_19_q0.read());
}

void matrix_mult::thread_select_ln47_1_fu_5033_p3() {
    select_ln47_1_fu_5033_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_1_q0.read(): a_buff_1_1_q0.read());
}

void matrix_mult::thread_select_ln47_20_fu_5203_p3() {
    select_ln47_20_fu_5203_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_0_q0.read(): a_buff_1_0_q0.read());
}

void matrix_mult::thread_select_ln47_21_fu_5216_p3() {
    select_ln47_21_fu_5216_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_1_q0.read(): a_buff_1_1_q0.read());
}

void matrix_mult::thread_select_ln47_22_fu_5229_p3() {
    select_ln47_22_fu_5229_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_2_q0.read(): a_buff_1_2_q0.read());
}

void matrix_mult::thread_select_ln47_23_fu_5242_p3() {
    select_ln47_23_fu_5242_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_3_q0.read(): a_buff_1_3_q0.read());
}

void matrix_mult::thread_select_ln47_24_fu_5255_p3() {
    select_ln47_24_fu_5255_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_4_q0.read(): a_buff_1_4_q0.read());
}

void matrix_mult::thread_select_ln47_25_fu_5268_p3() {
    select_ln47_25_fu_5268_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_5_q0.read(): a_buff_1_5_q0.read());
}

void matrix_mult::thread_select_ln47_26_fu_5281_p3() {
    select_ln47_26_fu_5281_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_6_q0.read(): a_buff_1_6_q0.read());
}

void matrix_mult::thread_select_ln47_27_fu_5294_p3() {
    select_ln47_27_fu_5294_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_7_q0.read(): a_buff_1_7_q0.read());
}

void matrix_mult::thread_select_ln47_28_fu_5307_p3() {
    select_ln47_28_fu_5307_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_8_q0.read(): a_buff_1_8_q0.read());
}

void matrix_mult::thread_select_ln47_29_fu_5320_p3() {
    select_ln47_29_fu_5320_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_9_q0.read(): a_buff_1_9_q0.read());
}

void matrix_mult::thread_select_ln47_2_fu_5040_p3() {
    select_ln47_2_fu_5040_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_2_q0.read(): a_buff_1_2_q0.read());
}

void matrix_mult::thread_select_ln47_30_fu_5333_p3() {
    select_ln47_30_fu_5333_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_10_q0.read(): a_buff_1_10_q0.read());
}

void matrix_mult::thread_select_ln47_31_fu_5346_p3() {
    select_ln47_31_fu_5346_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_11_q0.read(): a_buff_1_11_q0.read());
}

void matrix_mult::thread_select_ln47_32_fu_5522_p3() {
    select_ln47_32_fu_5522_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_12_load_1_reg_8201.read(): a_buff_1_12_load_1_reg_8236.read());
}

void matrix_mult::thread_select_ln47_33_fu_5534_p3() {
    select_ln47_33_fu_5534_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_13_load_1_reg_8206.read(): a_buff_1_13_load_1_reg_8231.read());
}

void matrix_mult::thread_select_ln47_34_fu_5359_p3() {
    select_ln47_34_fu_5359_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_14_q0.read(): a_buff_1_14_q0.read());
}

void matrix_mult::thread_select_ln47_35_fu_5372_p3() {
    select_ln47_35_fu_5372_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_15_q0.read(): a_buff_1_15_q0.read());
}

void matrix_mult::thread_select_ln47_36_fu_5546_p3() {
    select_ln47_36_fu_5546_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_16_load_1_reg_8211.read(): a_buff_1_16_load_1_reg_8226.read());
}

void matrix_mult::thread_select_ln47_37_fu_5385_p3() {
    select_ln47_37_fu_5385_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_17_q0.read(): a_buff_1_17_q0.read());
}

void matrix_mult::thread_select_ln47_38_fu_5398_p3() {
    select_ln47_38_fu_5398_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_18_q0.read(): a_buff_1_18_q0.read());
}

void matrix_mult::thread_select_ln47_39_fu_5558_p3() {
    select_ln47_39_fu_5558_p3 = (!icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_1_reg_7530_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_19_load_1_reg_8216.read(): a_buff_1_19_load_1_reg_8221.read());
}

void matrix_mult::thread_select_ln47_3_fu_5047_p3() {
    select_ln47_3_fu_5047_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_3_q0.read(): a_buff_1_3_q0.read());
}

void matrix_mult::thread_select_ln47_4_fu_5054_p3() {
    select_ln47_4_fu_5054_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_4_q0.read(): a_buff_1_4_q0.read());
}

void matrix_mult::thread_select_ln47_5_fu_5061_p3() {
    select_ln47_5_fu_5061_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_5_q0.read(): a_buff_1_5_q0.read());
}

void matrix_mult::thread_select_ln47_6_fu_5068_p3() {
    select_ln47_6_fu_5068_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_6_q0.read(): a_buff_1_6_q0.read());
}

void matrix_mult::thread_select_ln47_7_fu_5075_p3() {
    select_ln47_7_fu_5075_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_7_q0.read(): a_buff_1_7_q0.read());
}

void matrix_mult::thread_select_ln47_8_fu_5082_p3() {
    select_ln47_8_fu_5082_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_8_q0.read(): a_buff_1_8_q0.read());
}

void matrix_mult::thread_select_ln47_9_fu_5089_p3() {
    select_ln47_9_fu_5089_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_9_q0.read(): a_buff_1_9_q0.read());
}

void matrix_mult::thread_select_ln47_fu_5026_p3() {
    select_ln47_fu_5026_p3 = (!icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln47_reg_7457_pp2_iter1_reg.read()[0].to_bool())? a_buff_0_0_q0.read(): a_buff_1_0_q0.read());
}

void matrix_mult::thread_select_ln56_20_fu_5775_p3() {
    select_ln56_20_fu_5775_p3 = (!icmp_ln56_fu_5763_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln56_fu_5763_p2.read()[0].to_bool())? ap_phi_mux_i3_0_phi_fu_3163_p4.read(): add_ln56_17_fu_5769_p2.read());
}

void matrix_mult::thread_sext_ln35_10_fu_4704_p1() {
    sext_ln35_10_fu_4704_p1 = esl_sext<64,9>(add_ln35_29_fu_4699_p2.read());
}

void matrix_mult::thread_sext_ln35_11_fu_4715_p1() {
    sext_ln35_11_fu_4715_p1 = esl_sext<64,9>(add_ln35_30_fu_4710_p2.read());
}

void matrix_mult::thread_sext_ln35_12_fu_4756_p1() {
    sext_ln35_12_fu_4756_p1 = esl_sext<64,9>(add_ln35_31_fu_4751_p2.read());
}

void matrix_mult::thread_sext_ln35_13_fu_4767_p1() {
    sext_ln35_13_fu_4767_p1 = esl_sext<64,9>(add_ln35_32_fu_4762_p2.read());
}

void matrix_mult::thread_sext_ln35_14_fu_4808_p1() {
    sext_ln35_14_fu_4808_p1 = esl_sext<64,9>(add_ln35_33_fu_4803_p2.read());
}

void matrix_mult::thread_sext_ln35_15_fu_4819_p1() {
    sext_ln35_15_fu_4819_p1 = esl_sext<64,9>(add_ln35_34_fu_4814_p2.read());
}

void matrix_mult::thread_sext_ln35_1_fu_4455_p1() {
    sext_ln35_1_fu_4455_p1 = esl_sext<64,9>(add_ln35_20_fu_4450_p2.read());
}

void matrix_mult::thread_sext_ln35_2_fu_4496_p1() {
    sext_ln35_2_fu_4496_p1 = esl_sext<64,9>(add_ln35_21_fu_4491_p2.read());
}

void matrix_mult::thread_sext_ln35_3_fu_4507_p1() {
    sext_ln35_3_fu_4507_p1 = esl_sext<64,9>(add_ln35_22_fu_4502_p2.read());
}

void matrix_mult::thread_sext_ln35_4_fu_4548_p1() {
    sext_ln35_4_fu_4548_p1 = esl_sext<64,9>(add_ln35_23_fu_4543_p2.read());
}

void matrix_mult::thread_sext_ln35_5_fu_4559_p1() {
    sext_ln35_5_fu_4559_p1 = esl_sext<64,9>(add_ln35_24_fu_4554_p2.read());
}

void matrix_mult::thread_sext_ln35_6_fu_4600_p1() {
    sext_ln35_6_fu_4600_p1 = esl_sext<64,9>(add_ln35_25_fu_4595_p2.read());
}

void matrix_mult::thread_sext_ln35_7_fu_4611_p1() {
    sext_ln35_7_fu_4611_p1 = esl_sext<64,9>(add_ln35_26_fu_4606_p2.read());
}

void matrix_mult::thread_sext_ln35_8_fu_4652_p1() {
    sext_ln35_8_fu_4652_p1 = esl_sext<64,9>(add_ln35_27_fu_4647_p2.read());
}

void matrix_mult::thread_sext_ln35_9_fu_4663_p1() {
    sext_ln35_9_fu_4663_p1 = esl_sext<64,9>(add_ln35_28_fu_4658_p2.read());
}

void matrix_mult::thread_sext_ln35_fu_4444_p1() {
    sext_ln35_fu_4444_p1 = esl_sext<64,9>(add_ln35_19_fu_4439_p2.read());
}

void matrix_mult::thread_sext_ln56_10_fu_6349_p1() {
    sext_ln56_10_fu_6349_p1 = esl_sext<64,9>(add_ln56_29_fu_6344_p2.read());
}

void matrix_mult::thread_sext_ln56_11_fu_6360_p1() {
    sext_ln56_11_fu_6360_p1 = esl_sext<64,9>(add_ln56_30_fu_6355_p2.read());
}

void matrix_mult::thread_sext_ln56_12_fu_6381_p1() {
    sext_ln56_12_fu_6381_p1 = esl_sext<64,9>(add_ln56_31_fu_6376_p2.read());
}

void matrix_mult::thread_sext_ln56_13_fu_6392_p1() {
    sext_ln56_13_fu_6392_p1 = esl_sext<64,9>(add_ln56_32_fu_6387_p2.read());
}

void matrix_mult::thread_sext_ln56_14_fu_6413_p1() {
    sext_ln56_14_fu_6413_p1 = esl_sext<64,9>(add_ln56_33_fu_6408_p2.read());
}

void matrix_mult::thread_sext_ln56_15_fu_6424_p1() {
    sext_ln56_15_fu_6424_p1 = esl_sext<64,9>(add_ln56_34_fu_6419_p2.read());
}

void matrix_mult::thread_sext_ln56_1_fu_6210_p1() {
    sext_ln56_1_fu_6210_p1 = esl_sext<64,9>(add_ln56_20_fu_6205_p2.read());
}

void matrix_mult::thread_sext_ln56_2_fu_6226_p1() {
    sext_ln56_2_fu_6226_p1 = esl_sext<64,9>(add_ln56_21_fu_6221_p2.read());
}

void matrix_mult::thread_sext_ln56_3_fu_6237_p1() {
    sext_ln56_3_fu_6237_p1 = esl_sext<64,9>(add_ln56_22_fu_6232_p2.read());
}

void matrix_mult::thread_sext_ln56_4_fu_6253_p1() {
    sext_ln56_4_fu_6253_p1 = esl_sext<64,9>(add_ln56_23_fu_6248_p2.read());
}

void matrix_mult::thread_sext_ln56_5_fu_6264_p1() {
    sext_ln56_5_fu_6264_p1 = esl_sext<64,9>(add_ln56_24_fu_6259_p2.read());
}

void matrix_mult::thread_sext_ln56_6_fu_6285_p1() {
    sext_ln56_6_fu_6285_p1 = esl_sext<64,9>(add_ln56_25_fu_6280_p2.read());
}

void matrix_mult::thread_sext_ln56_7_fu_6296_p1() {
    sext_ln56_7_fu_6296_p1 = esl_sext<64,9>(add_ln56_26_fu_6291_p2.read());
}

void matrix_mult::thread_sext_ln56_8_fu_6317_p1() {
    sext_ln56_8_fu_6317_p1 = esl_sext<64,9>(add_ln56_27_fu_6312_p2.read());
}

void matrix_mult::thread_sext_ln56_9_fu_6328_p1() {
    sext_ln56_9_fu_6328_p1 = esl_sext<64,9>(add_ln56_28_fu_6323_p2.read());
}

void matrix_mult::thread_sext_ln56_fu_6199_p1() {
    sext_ln56_fu_6199_p1 = esl_sext<64,9>(add_ln56_19_fu_6194_p2.read());
}

void matrix_mult::thread_shl_ln1_fu_3922_p3() {
    shl_ln1_fu_3922_p3 = esl_concat<5,4>(ap_phi_mux_i1_0_phi_fu_3117_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln28_1_fu_3230_p3() {
    shl_ln28_1_fu_3230_p3 = esl_concat<5,2>(ap_phi_mux_i_0_phi_fu_3106_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln2_fu_5737_p3() {
    shl_ln2_fu_5737_p3 = esl_concat<5,4>(ap_phi_mux_i3_0_phi_fu_3163_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln35_1_fu_3930_p3() {
    shl_ln35_1_fu_3930_p3 = esl_concat<5,2>(ap_phi_mux_i1_0_phi_fu_3117_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln56_1_fu_5745_p3() {
    shl_ln56_1_fu_5745_p3 = esl_concat<5,2>(ap_phi_mux_i3_0_phi_fu_3163_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln_fu_3222_p3() {
    shl_ln_fu_3222_p3 = esl_concat<5,4>(ap_phi_mux_i_0_phi_fu_3106_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_4_fu_4324_p3() {
    tmp_4_fu_4324_p3 = esl_concat<5,4>(select_ln35_20_reg_7034_pp1_iter1_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_5_fu_4331_p3() {
    tmp_5_fu_4331_p3 = esl_concat<5,2>(select_ln35_20_reg_7034_pp1_iter1_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_6_fu_5671_p3() {
    tmp_6_fu_5671_p3 = esl_concat<4,4>(select_ln44_1_reg_7965_pp2_iter2_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_7_fu_5682_p3() {
    tmp_7_fu_5682_p3 = esl_concat<4,2>(select_ln44_1_reg_7965_pp2_iter2_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_8_fu_4963_p3() {
    tmp_8_fu_4963_p3 = esl_concat<59,5>(ap_const_lv59_5, select_ln44_reg_7519.read());
}

void matrix_mult::thread_tmp_9_fu_5783_p3() {
    tmp_9_fu_5783_p3 = esl_concat<5,4>(select_ln56_20_fu_5775_p3.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_s_fu_5791_p3() {
    tmp_s_fu_5791_p3 = esl_concat<5,2>(select_ln56_20_fu_5775_p3.read(), ap_const_lv2_0);
}

void matrix_mult::thread_trunc_ln44_1_fu_5007_p1() {
    trunc_ln44_1_fu_5007_p1 = grp_fu_4843_p2.read().range(4-1, 0);
}

void matrix_mult::thread_trunc_ln44_fu_5182_p1() {
    trunc_ln44_fu_5182_p1 = grp_fu_4867_p2.read().range(4-1, 0);
}

void matrix_mult::thread_zext_ln28_10_fu_3736_p1() {
    zext_ln28_10_fu_3736_p1 = esl_zext<64,9>(grp_fu_3416_p2.read());
}

void matrix_mult::thread_zext_ln28_11_fu_3760_p1() {
    zext_ln28_11_fu_3760_p1 = esl_zext<64,9>(grp_fu_3433_p2.read());
}

void matrix_mult::thread_zext_ln28_12_fu_3766_p1() {
    zext_ln28_12_fu_3766_p1 = esl_zext<64,9>(grp_fu_3450_p2.read());
}

void matrix_mult::thread_zext_ln28_13_fu_3790_p1() {
    zext_ln28_13_fu_3790_p1 = esl_zext<64,9>(grp_fu_3467_p2.read());
}

void matrix_mult::thread_zext_ln28_14_fu_3796_p1() {
    zext_ln28_14_fu_3796_p1 = esl_zext<64,9>(grp_fu_3484_p2.read());
}

void matrix_mult::thread_zext_ln28_15_fu_3820_p1() {
    zext_ln28_15_fu_3820_p1 = esl_zext<64,9>(grp_fu_3501_p2.read());
}

void matrix_mult::thread_zext_ln28_16_fu_3826_p1() {
    zext_ln28_16_fu_3826_p1 = esl_zext<64,9>(grp_fu_3518_p2.read());
}

void matrix_mult::thread_zext_ln28_17_fu_3850_p1() {
    zext_ln28_17_fu_3850_p1 = esl_zext<64,9>(grp_fu_3535_p2.read());
}

void matrix_mult::thread_zext_ln28_18_fu_3856_p1() {
    zext_ln28_18_fu_3856_p1 = esl_zext<64,9>(grp_fu_3552_p2.read());
}

void matrix_mult::thread_zext_ln28_19_fu_3880_p1() {
    zext_ln28_19_fu_3880_p1 = esl_zext<64,9>(grp_fu_3574_p2.read());
}

void matrix_mult::thread_zext_ln28_1_fu_3624_p1() {
    zext_ln28_1_fu_3624_p1 = esl_zext<64,5>(select_ln28_20_reg_6497_pp0_iter1_reg.read());
}

void matrix_mult::thread_zext_ln28_20_fu_3886_p1() {
    zext_ln28_20_fu_3886_p1 = esl_zext<64,9>(grp_fu_3591_p2.read());
}

void matrix_mult::thread_zext_ln28_21_fu_3238_p1() {
    zext_ln28_21_fu_3238_p1 = esl_zext<9,7>(shl_ln28_1_fu_3230_p3.read());
}

void matrix_mult::thread_zext_ln28_2_fu_3609_p1() {
    zext_ln28_2_fu_3609_p1 = esl_zext<64,9>(grp_fu_3280_p2.read());
}

void matrix_mult::thread_zext_ln28_3_fu_3640_p1() {
    zext_ln28_3_fu_3640_p1 = esl_zext<64,9>(grp_fu_3297_p2.read());
}

void matrix_mult::thread_zext_ln28_4_fu_3646_p1() {
    zext_ln28_4_fu_3646_p1 = esl_zext<64,9>(grp_fu_3314_p2.read());
}

void matrix_mult::thread_zext_ln28_5_fu_3670_p1() {
    zext_ln28_5_fu_3670_p1 = esl_zext<64,9>(grp_fu_3331_p2.read());
}

void matrix_mult::thread_zext_ln28_6_fu_3676_p1() {
    zext_ln28_6_fu_3676_p1 = esl_zext<64,9>(grp_fu_3348_p2.read());
}

void matrix_mult::thread_zext_ln28_7_fu_3700_p1() {
    zext_ln28_7_fu_3700_p1 = esl_zext<64,9>(grp_fu_3365_p2.read());
}

void matrix_mult::thread_zext_ln28_8_fu_3706_p1() {
    zext_ln28_8_fu_3706_p1 = esl_zext<64,9>(grp_fu_3382_p2.read());
}

void matrix_mult::thread_zext_ln28_9_fu_3730_p1() {
    zext_ln28_9_fu_3730_p1 = esl_zext<64,9>(grp_fu_3399_p2.read());
}

void matrix_mult::thread_zext_ln28_fu_3603_p1() {
    zext_ln28_fu_3603_p1 = esl_zext<64,9>(grp_fu_3248_p2.read());
}

void matrix_mult::thread_zext_ln35_10_fu_4537_p1() {
    zext_ln35_10_fu_4537_p1 = esl_zext<64,9>(grp_fu_4116_p2.read());
}

void matrix_mult::thread_zext_ln35_11_fu_4583_p1() {
    zext_ln35_11_fu_4583_p1 = esl_zext<64,9>(grp_fu_4133_p2.read());
}

void matrix_mult::thread_zext_ln35_12_fu_4589_p1() {
    zext_ln35_12_fu_4589_p1 = esl_zext<64,9>(grp_fu_4150_p2.read());
}

void matrix_mult::thread_zext_ln35_13_fu_4635_p1() {
    zext_ln35_13_fu_4635_p1 = esl_zext<64,9>(grp_fu_4167_p2.read());
}

void matrix_mult::thread_zext_ln35_14_fu_4641_p1() {
    zext_ln35_14_fu_4641_p1 = esl_zext<64,9>(grp_fu_4184_p2.read());
}

void matrix_mult::thread_zext_ln35_15_fu_4687_p1() {
    zext_ln35_15_fu_4687_p1 = esl_zext<64,9>(grp_fu_4201_p2.read());
}

void matrix_mult::thread_zext_ln35_16_fu_4693_p1() {
    zext_ln35_16_fu_4693_p1 = esl_zext<64,9>(grp_fu_4218_p2.read());
}

void matrix_mult::thread_zext_ln35_17_fu_4739_p1() {
    zext_ln35_17_fu_4739_p1 = esl_zext<64,9>(grp_fu_4235_p2.read());
}

void matrix_mult::thread_zext_ln35_18_fu_4745_p1() {
    zext_ln35_18_fu_4745_p1 = esl_zext<64,9>(grp_fu_4252_p2.read());
}

void matrix_mult::thread_zext_ln35_19_fu_4791_p1() {
    zext_ln35_19_fu_4791_p1 = esl_zext<64,9>(grp_fu_4274_p2.read());
}

void matrix_mult::thread_zext_ln35_1_fu_3938_p1() {
    zext_ln35_1_fu_3938_p1 = esl_zext<9,7>(shl_ln35_1_fu_3930_p3.read());
}

void matrix_mult::thread_zext_ln35_20_fu_4797_p1() {
    zext_ln35_20_fu_4797_p1 = esl_zext<64,9>(grp_fu_4291_p2.read());
}

void matrix_mult::thread_zext_ln35_21_fu_4338_p1() {
    zext_ln35_21_fu_4338_p1 = esl_zext<9,7>(tmp_5_fu_4331_p3.read());
}

void matrix_mult::thread_zext_ln35_22_fu_4348_p1() {
    zext_ln35_22_fu_4348_p1 = esl_zext<64,9>(add_ln35_18_fu_4342_p2.read());
}

void matrix_mult::thread_zext_ln35_23_fu_4360_p1() {
    zext_ln35_23_fu_4360_p1 = esl_zext<64,9>(or_ln35_3_fu_4354_p2.read());
}

void matrix_mult::thread_zext_ln35_24_fu_4392_p1() {
    zext_ln35_24_fu_4392_p1 = esl_zext<64,9>(or_ln35_4_fu_4387_p2.read());
}

void matrix_mult::thread_zext_ln35_25_fu_4403_p1() {
    zext_ln35_25_fu_4403_p1 = esl_zext<64,9>(or_ln35_5_fu_4398_p2.read());
}

void matrix_mult::thread_zext_ln35_2_fu_4309_p1() {
    zext_ln35_2_fu_4309_p1 = esl_zext<64,9>(grp_fu_3980_p2.read());
}

void matrix_mult::thread_zext_ln35_3_fu_4375_p1() {
    zext_ln35_3_fu_4375_p1 = esl_zext<64,9>(grp_fu_3997_p2.read());
}

void matrix_mult::thread_zext_ln35_4_fu_4381_p1() {
    zext_ln35_4_fu_4381_p1 = esl_zext<64,9>(grp_fu_4014_p2.read());
}

void matrix_mult::thread_zext_ln35_5_fu_4427_p1() {
    zext_ln35_5_fu_4427_p1 = esl_zext<64,9>(grp_fu_4031_p2.read());
}

void matrix_mult::thread_zext_ln35_6_fu_4433_p1() {
    zext_ln35_6_fu_4433_p1 = esl_zext<64,9>(grp_fu_4048_p2.read());
}

void matrix_mult::thread_zext_ln35_7_fu_4479_p1() {
    zext_ln35_7_fu_4479_p1 = esl_zext<64,9>(grp_fu_4065_p2.read());
}

void matrix_mult::thread_zext_ln35_8_fu_4485_p1() {
    zext_ln35_8_fu_4485_p1 = esl_zext<64,9>(grp_fu_4082_p2.read());
}

void matrix_mult::thread_zext_ln35_9_fu_4531_p1() {
    zext_ln35_9_fu_4531_p1 = esl_zext<64,9>(grp_fu_4099_p2.read());
}

void matrix_mult::thread_zext_ln35_fu_4303_p1() {
    zext_ln35_fu_4303_p1 = esl_zext<64,9>(grp_fu_3948_p2.read());
}

void matrix_mult::thread_zext_ln44_1_fu_4971_p1() {
    zext_ln44_1_fu_4971_p1 = esl_zext<64,5>(grp_fu_4843_p2.read());
}

void matrix_mult::thread_zext_ln44_2_fu_5138_p1() {
    zext_ln44_2_fu_5138_p1 = esl_zext<64,5>(grp_fu_4867_p2.read());
}

void matrix_mult::thread_zext_ln44_3_fu_5678_p1() {
    zext_ln44_3_fu_5678_p1 = esl_zext<9,8>(tmp_6_fu_5671_p3.read());
}

void matrix_mult::thread_zext_ln44_4_fu_5689_p1() {
    zext_ln44_4_fu_5689_p1 = esl_zext<9,6>(tmp_7_fu_5682_p3.read());
}

void matrix_mult::thread_zext_ln44_5_fu_5708_p1() {
    zext_ln44_5_fu_5708_p1 = esl_zext<64,9>(add_ln44_1_fu_5702_p2.read());
}

void matrix_mult::thread_zext_ln44_fu_5411_p1() {
    zext_ln44_fu_5411_p1 = esl_zext<64,5>(select_ln44_reg_7519_pp2_iter1_reg.read());
}

void matrix_mult::thread_zext_ln47_10_fu_4958_p1() {
    zext_ln47_10_fu_4958_p1 = esl_zext<64,8>(add_ln47_25_fu_4953_p2.read());
}

void matrix_mult::thread_zext_ln47_11_fu_5197_p1() {
    zext_ln47_11_fu_5197_p1 = esl_zext<64,8>(add_ln47_26_fu_5192_p2.read());
}

void matrix_mult::thread_zext_ln47_1_fu_4905_p1() {
    zext_ln47_1_fu_4905_p1 = esl_zext<8,5>(select_ln44_reg_7519.read());
}

void matrix_mult::thread_zext_ln47_2_fu_4908_p1() {
    zext_ln47_2_fu_4908_p1 = esl_zext<7,5>(select_ln44_reg_7519.read());
}

void matrix_mult::thread_zext_ln47_3_fu_5415_p1() {
    zext_ln47_3_fu_5415_p1 = esl_zext<6,5>(select_ln44_reg_7519_pp2_iter1_reg.read());
}

void matrix_mult::thread_zext_ln47_4_fu_5424_p1() {
    zext_ln47_4_fu_5424_p1 = esl_zext<64,6>(add_ln47_19_fu_5418_p2.read());
}

void matrix_mult::thread_zext_ln47_5_fu_4938_p1() {
    zext_ln47_5_fu_4938_p1 = esl_zext<64,7>(add_ln47_20_fu_4933_p2.read());
}

void matrix_mult::thread_zext_ln47_6_fu_4948_p1() {
    zext_ln47_6_fu_4948_p1 = esl_zext<64,7>(add_ln47_21_fu_4943_p2.read());
}

void matrix_mult::thread_zext_ln47_7_fu_4917_p1() {
    zext_ln47_7_fu_4917_p1 = esl_zext<64,7>(add_ln47_22_fu_4911_p2.read());
}

void matrix_mult::thread_zext_ln47_8_fu_4928_p1() {
    zext_ln47_8_fu_4928_p1 = esl_zext<64,8>(add_ln47_23_fu_4922_p2.read());
}

void matrix_mult::thread_zext_ln47_9_fu_5016_p1() {
    zext_ln47_9_fu_5016_p1 = esl_zext<64,8>(add_ln47_24_fu_5011_p2.read());
}

void matrix_mult::thread_zext_ln47_fu_5699_p1() {
    zext_ln47_fu_5699_p1 = esl_zext<9,5>(select_ln44_reg_7519_pp2_iter2_reg.read());
}

void matrix_mult::thread_zext_ln56_10_fu_6339_p1() {
    zext_ln56_10_fu_6339_p1 = esl_zext<64,9>(urem_ln56_9_reg_8978.read());
}

void matrix_mult::thread_zext_ln56_11_fu_6366_p1() {
    zext_ln56_11_fu_6366_p1 = esl_zext<64,9>(urem_ln56_10_reg_9003.read());
}

void matrix_mult::thread_zext_ln56_12_fu_6371_p1() {
    zext_ln56_12_fu_6371_p1 = esl_zext<64,9>(urem_ln56_11_reg_9008.read());
}

void matrix_mult::thread_zext_ln56_13_fu_6398_p1() {
    zext_ln56_13_fu_6398_p1 = esl_zext<64,9>(urem_ln56_12_reg_9033.read());
}

void matrix_mult::thread_zext_ln56_14_fu_6403_p1() {
    zext_ln56_14_fu_6403_p1 = esl_zext<64,9>(urem_ln56_13_reg_9038.read());
}

void matrix_mult::thread_zext_ln56_15_fu_6430_p1() {
    zext_ln56_15_fu_6430_p1 = esl_zext<64,9>(urem_ln56_14_reg_9063.read());
}

void matrix_mult::thread_zext_ln56_16_fu_6435_p1() {
    zext_ln56_16_fu_6435_p1 = esl_zext<64,9>(urem_ln56_15_reg_9068.read());
}

void matrix_mult::thread_zext_ln56_17_fu_6440_p1() {
    zext_ln56_17_fu_6440_p1 = esl_zext<64,9>(urem_ln56_16_reg_9093.read());
}

void matrix_mult::thread_zext_ln56_18_fu_6445_p1() {
    zext_ln56_18_fu_6445_p1 = esl_zext<64,9>(urem_ln56_17_reg_9098.read());
}

void matrix_mult::thread_zext_ln56_19_fu_6450_p1() {
    zext_ln56_19_fu_6450_p1 = esl_zext<64,9>(urem_ln56_18_reg_9123.read());
}

void matrix_mult::thread_zext_ln56_1_fu_6161_p1() {
    zext_ln56_1_fu_6161_p1 = esl_zext<64,9>(grp_fu_5815_p2.read());
}

void matrix_mult::thread_zext_ln56_20_fu_6455_p1() {
    zext_ln56_20_fu_6455_p1 = esl_zext<64,9>(urem_ln56_19_reg_9128.read());
}

void matrix_mult::thread_zext_ln56_21_fu_5799_p1() {
    zext_ln56_21_fu_5799_p1 = esl_zext<9,7>(tmp_s_fu_5791_p3.read());
}

void matrix_mult::thread_zext_ln56_22_fu_5809_p1() {
    zext_ln56_22_fu_5809_p1 = esl_zext<64,9>(add_ln56_18_fu_5803_p2.read());
}

void matrix_mult::thread_zext_ln56_23_fu_6155_p1() {
    zext_ln56_23_fu_6155_p1 = esl_zext<64,9>(or_ln56_3_fu_6150_p2.read());
}

void matrix_mult::thread_zext_ln56_24_fu_6172_p1() {
    zext_ln56_24_fu_6172_p1 = esl_zext<64,9>(or_ln56_4_fu_6167_p2.read());
}

void matrix_mult::thread_zext_ln56_25_fu_6183_p1() {
    zext_ln56_25_fu_6183_p1 = esl_zext<64,9>(or_ln56_5_fu_6178_p2.read());
}

void matrix_mult::thread_zext_ln56_2_fu_6189_p1() {
    zext_ln56_2_fu_6189_p1 = esl_zext<64,9>(urem_ln56_1_reg_8858.read());
}

void matrix_mult::thread_zext_ln56_3_fu_6216_p1() {
    zext_ln56_3_fu_6216_p1 = esl_zext<64,9>(urem_ln56_2_reg_8883.read());
}

void matrix_mult::thread_zext_ln56_4_fu_6243_p1() {
    zext_ln56_4_fu_6243_p1 = esl_zext<64,9>(urem_ln56_3_reg_8888.read());
}

void matrix_mult::thread_zext_ln56_5_fu_6270_p1() {
    zext_ln56_5_fu_6270_p1 = esl_zext<64,9>(urem_ln56_4_reg_8913.read());
}

void matrix_mult::thread_zext_ln56_6_fu_6275_p1() {
    zext_ln56_6_fu_6275_p1 = esl_zext<64,9>(urem_ln56_5_reg_8918.read());
}

void matrix_mult::thread_zext_ln56_7_fu_6302_p1() {
    zext_ln56_7_fu_6302_p1 = esl_zext<64,9>(urem_ln56_6_reg_8943.read());
}

void matrix_mult::thread_zext_ln56_8_fu_6307_p1() {
    zext_ln56_8_fu_6307_p1 = esl_zext<64,9>(urem_ln56_7_reg_8948.read());
}

void matrix_mult::thread_zext_ln56_9_fu_6334_p1() {
    zext_ln56_9_fu_6334_p1 = esl_zext<64,9>(urem_ln56_8_reg_8973.read());
}

void matrix_mult::thread_zext_ln56_fu_5753_p1() {
    zext_ln56_fu_5753_p1 = esl_zext<9,7>(shl_ln56_1_fu_5745_p3.read());
}

}

