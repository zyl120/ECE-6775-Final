#include "matrix_mult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mult::thread_a_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_19_fu_3287_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_17_fu_3235_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_15_fu_3183_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_13_fu_3131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_11_fu_3079_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_9_fu_3027_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_7_fu_2975_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_5_fu_2923_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_3_fu_2871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln38_fu_2799_p1.read());
    } else {
        a_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_20_fu_3293_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_18_fu_3241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_16_fu_3189_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_14_fu_3137_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_12_fu_3085_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_10_fu_3033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_8_fu_2981_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_6_fu_2929_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_4_fu_2877_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln38_2_fu_2805_p1.read());
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
        a_1_address0 =  (sc_lv<8>) (zext_ln38_19_fu_3287_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_17_fu_3235_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_15_fu_3183_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_13_fu_3131_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_11_fu_3079_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_9_fu_3027_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_7_fu_2975_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_5_fu_2923_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_3_fu_2871_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln38_fu_2799_p1.read());
    } else {
        a_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_20_fu_3293_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_18_fu_3241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_16_fu_3189_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_14_fu_3137_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_12_fu_3085_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_10_fu_3033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_8_fu_2981_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_6_fu_2929_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_4_fu_2877_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln38_2_fu_2805_p1.read());
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

void matrix_mult::thread_a_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_4_reg_6587_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_reg_6513_pp2_iter36_reg.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln57_3_fu_4621_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_2_reg_6599.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (zext_ln57_1_fu_4584_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_1_reg_6562_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_reg_6513_pp2_iter36_reg.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln57_1_fu_4578_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_14_fu_3304_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_12_fu_3252_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_10_fu_3200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_8_fu_3148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_6_fu_3096_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_4_fu_3044_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_2_fu_2992_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln38_fu_2940_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (zext_ln38_24_fu_2888_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (zext_ln38_22_fu_2844_p1.read());
    } else {
        a_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_15_fu_3315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_13_fu_3263_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_11_fu_3211_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_9_fu_3159_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_7_fu_3107_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_5_fu_3055_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_3_fu_3003_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln38_1_fu_2951_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (zext_ln38_25_fu_2899_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (zext_ln38_23_fu_2856_p1.read());
    } else {
        a_buff_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_1_reg_6562_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_reg_6513_pp2_iter36_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_2_reg_6599.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln57_4_reg_6587_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln54_reg_6513_pp2_iter36_reg.read())))) {
        a_buff_0_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_0_ce1 = ap_const_logic_1;
    } else {
        a_buff_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d0 = select_ln38_18_fu_3321_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_16_fu_3269_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d0 = select_ln38_14_fu_3217_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_12_fu_3165_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_10_fu_3113_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_8_fu_3061_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_6_fu_3009_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_4_fu_2957_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_2_fu_2905_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln38_fu_2811_p3.read();
    } else {
        a_buff_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d1 = select_ln38_19_fu_3330_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_17_fu_3278_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d1 = select_ln38_15_fu_3226_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_13_fu_3174_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_11_fu_3122_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_9_fu_3070_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_7_fu_3018_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_5_fu_2966_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_3_fu_2914_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln38_1_fu_2862_p3.read();
    } else {
        a_buff_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())))) {
        a_buff_0_we0 = ap_const_logic_1;
    } else {
        a_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())))) {
        a_buff_0_we1 = ap_const_logic_1;
    } else {
        a_buff_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_4_reg_6587_pp2_iter36_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln57_3_fu_4621_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_1_reg_6562_pp2_iter36_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln57_1_fu_4578_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_14_fu_3304_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_12_fu_3252_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_10_fu_3200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_8_fu_3148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_6_fu_3096_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_4_fu_3044_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_2_fu_2992_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln38_fu_2940_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (zext_ln38_24_fu_2888_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (zext_ln38_22_fu_2844_p1.read());
    } else {
        a_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_15_fu_3315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_13_fu_3263_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_11_fu_3211_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_9_fu_3159_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_7_fu_3107_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_5_fu_3055_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_3_fu_3003_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln38_1_fu_2951_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (zext_ln38_25_fu_2899_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (zext_ln38_23_fu_2856_p1.read());
    } else {
        a_buff_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_6498_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_1_reg_6562_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln51_reg_6517_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln57_4_reg_6587_pp2_iter36_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read())))) {
        a_buff_1_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        a_buff_1_ce1 = ap_const_logic_1;
    } else {
        a_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d0 = select_ln38_18_fu_3321_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_16_fu_3269_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d0 = select_ln38_14_fu_3217_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_12_fu_3165_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_10_fu_3113_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_8_fu_3061_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_6_fu_3009_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_4_fu_2957_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_2_fu_2905_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln38_fu_2811_p3.read();
    } else {
        a_buff_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d1 = select_ln38_19_fu_3330_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_17_fu_3278_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d1 = select_ln38_15_fu_3226_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_13_fu_3174_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_11_fu_3122_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_9_fu_3070_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_7_fu_3018_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_5_fu_2966_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_3_fu_2914_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln38_1_fu_2862_p3.read();
    } else {
        a_buff_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())))) {
        a_buff_1_we0 = ap_const_logic_1;
    } else {
        a_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_1_reg_5596_pp0_iter2_reg.read())))) {
        a_buff_1_we1 = ap_const_logic_1;
    } else {
        a_buff_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_val_fu_4663_p3() {
    a_val_fu_4663_p3 = (!and_ln57_fu_4650_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln57_fu_4650_p2.read()[0].to_bool())? select_ln57_fu_4656_p3.read(): ap_const_lv32_0);
}

void matrix_mult::thread_add_ln10_fu_4794_p2() {
    add_ln10_fu_4794_p2 = (!select_ln59_fu_4789_p3.read().is_01() || !mul_ln10_reg_6698.read().is_01())? sc_lv<32>(): (sc_biguint<32>(select_ln59_fu_4789_p3.read()) + sc_biguint<32>(mul_ln10_reg_6698.read()));
}

void matrix_mult::thread_add_ln20_1_fu_2373_p2() {
    add_ln20_1_fu_2373_p2 = (!phi_ln20_1_reg_2173.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln20_1_reg_2173.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_add_ln20_2_fu_2333_p2() {
    add_ln20_2_fu_2333_p2 = (!phi_ln20_reg_2161.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln20_reg_2161.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln20_3_fu_2367_p2() {
    add_ln20_3_fu_2367_p2 = (!zext_ln20_fu_2363_p1.read().is_01() || !tmp_fu_2347_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln20_fu_2363_p1.read()) + sc_biguint<9>(tmp_fu_2347_p3.read()));
}

void matrix_mult::thread_add_ln20_4_fu_2383_p2() {
    add_ln20_4_fu_2383_p2 = (!add_ln20_3_reg_5545.read().is_01() || !zext_ln20_1_fu_2379_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln20_3_reg_5545.read()) + sc_biguint<9>(zext_ln20_1_fu_2379_p1.read()));
}

void matrix_mult::thread_add_ln20_fu_2321_p2() {
    add_ln20_fu_2321_p2 = (!phi_ln20_reg_2161.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln20_reg_2161.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_add_ln38_10_fu_2675_p2() {
    add_ln38_10_fu_2675_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln38_11_fu_2692_p2() {
    add_ln38_11_fu_2692_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln38_12_fu_2709_p2() {
    add_ln38_12_fu_2709_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln38_13_fu_2726_p2() {
    add_ln38_13_fu_2726_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln38_14_fu_2743_p2() {
    add_ln38_14_fu_2743_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln38_15_fu_2765_p2() {
    add_ln38_15_fu_2765_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln38_16_fu_2782_p2() {
    add_ln38_16_fu_2782_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln38_17_fu_2456_p2() {
    add_ln38_17_fu_2456_p2 = (!ap_phi_mux_i_0_phi_fu_2188_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_2188_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln38_18_fu_2838_p2() {
    add_ln38_18_fu_2838_p2 = (!zext_ln38_21_fu_2834_p1.read().is_01() || !tmp_6_fu_2820_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln38_21_fu_2834_p1.read()) + sc_biguint<9>(tmp_6_fu_2820_p3.read()));
}

void matrix_mult::thread_add_ln38_19_fu_2935_p2() {
    add_ln38_19_fu_2935_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln38_1_fu_2522_p2() {
    add_ln38_1_fu_2522_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln38_20_fu_2946_p2() {
    add_ln38_20_fu_2946_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln38_21_fu_2987_p2() {
    add_ln38_21_fu_2987_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln38_22_fu_2998_p2() {
    add_ln38_22_fu_2998_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln38_23_fu_3039_p2() {
    add_ln38_23_fu_3039_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln38_24_fu_3050_p2() {
    add_ln38_24_fu_3050_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln38_25_fu_3091_p2() {
    add_ln38_25_fu_3091_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln38_26_fu_3102_p2() {
    add_ln38_26_fu_3102_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln38_27_fu_3143_p2() {
    add_ln38_27_fu_3143_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln38_28_fu_3154_p2() {
    add_ln38_28_fu_3154_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln38_29_fu_3195_p2() {
    add_ln38_29_fu_3195_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln38_2_fu_2539_p2() {
    add_ln38_2_fu_2539_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln38_30_fu_3206_p2() {
    add_ln38_30_fu_3206_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln38_31_fu_3247_p2() {
    add_ln38_31_fu_3247_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln38_32_fu_3258_p2() {
    add_ln38_32_fu_3258_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln38_33_fu_3299_p2() {
    add_ln38_33_fu_3299_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln38_34_fu_3310_p2() {
    add_ln38_34_fu_3310_p2 = (!add_ln38_18_reg_5821.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_18_reg_5821.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln38_3_fu_2556_p2() {
    add_ln38_3_fu_2556_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln38_4_fu_2573_p2() {
    add_ln38_4_fu_2573_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln38_5_fu_2590_p2() {
    add_ln38_5_fu_2590_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln38_6_fu_2607_p2() {
    add_ln38_6_fu_2607_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln38_7_fu_2624_p2() {
    add_ln38_7_fu_2624_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln38_8_fu_2641_p2() {
    add_ln38_8_fu_2641_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln38_9_fu_2658_p2() {
    add_ln38_9_fu_2658_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln38_reg_5572.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln38_fu_2438_p2() {
    add_ln38_fu_2438_p2 = (!zext_ln38_1_fu_2434_p1.read().is_01() || !shl_ln_fu_2418_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln38_1_fu_2434_p1.read()) + sc_biguint<9>(shl_ln_fu_2418_p3.read()));
}

void matrix_mult::thread_add_ln45_10_fu_3608_p2() {
    add_ln45_10_fu_3608_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln45_11_fu_3625_p2() {
    add_ln45_11_fu_3625_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln45_12_fu_3642_p2() {
    add_ln45_12_fu_3642_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln45_13_fu_3659_p2() {
    add_ln45_13_fu_3659_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln45_14_fu_3676_p2() {
    add_ln45_14_fu_3676_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln45_15_fu_3698_p2() {
    add_ln45_15_fu_3698_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln45_16_fu_3715_p2() {
    add_ln45_16_fu_3715_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln45_17_fu_3389_p2() {
    add_ln45_17_fu_3389_p2 = (!ap_phi_mux_i1_0_phi_fu_2199_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_2199_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln45_18_fu_3771_p2() {
    add_ln45_18_fu_3771_p2 = (!zext_ln45_21_fu_3767_p1.read().is_01() || !tmp_8_fu_3753_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln45_21_fu_3767_p1.read()) + sc_biguint<9>(tmp_8_fu_3753_p3.read()));
}

void matrix_mult::thread_add_ln45_19_fu_3868_p2() {
    add_ln45_19_fu_3868_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln45_1_fu_3455_p2() {
    add_ln45_1_fu_3455_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln45_20_fu_3879_p2() {
    add_ln45_20_fu_3879_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln45_21_fu_3920_p2() {
    add_ln45_21_fu_3920_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln45_22_fu_3931_p2() {
    add_ln45_22_fu_3931_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln45_23_fu_3972_p2() {
    add_ln45_23_fu_3972_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln45_24_fu_3983_p2() {
    add_ln45_24_fu_3983_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln45_25_fu_4024_p2() {
    add_ln45_25_fu_4024_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln45_26_fu_4035_p2() {
    add_ln45_26_fu_4035_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln45_27_fu_4076_p2() {
    add_ln45_27_fu_4076_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln45_28_fu_4087_p2() {
    add_ln45_28_fu_4087_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln45_29_fu_4128_p2() {
    add_ln45_29_fu_4128_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln45_2_fu_3472_p2() {
    add_ln45_2_fu_3472_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln45_30_fu_4139_p2() {
    add_ln45_30_fu_4139_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln45_31_fu_4180_p2() {
    add_ln45_31_fu_4180_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln45_32_fu_4191_p2() {
    add_ln45_32_fu_4191_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln45_33_fu_4232_p2() {
    add_ln45_33_fu_4232_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln45_34_fu_4243_p2() {
    add_ln45_34_fu_4243_p2 = (!add_ln45_18_reg_6281.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_18_reg_6281.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln45_3_fu_3489_p2() {
    add_ln45_3_fu_3489_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln45_4_fu_3506_p2() {
    add_ln45_4_fu_3506_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln45_5_fu_3523_p2() {
    add_ln45_5_fu_3523_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln45_6_fu_3540_p2() {
    add_ln45_6_fu_3540_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln45_7_fu_3557_p2() {
    add_ln45_7_fu_3557_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln45_8_fu_3574_p2() {
    add_ln45_8_fu_3574_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln45_9_fu_3591_p2() {
    add_ln45_9_fu_3591_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln45_reg_6032.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln45_fu_3371_p2() {
    add_ln45_fu_3371_p2 = (!zext_ln45_1_fu_3367_p1.read().is_01() || !shl_ln1_fu_3351_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln45_1_fu_3367_p1.read()) + sc_biguint<9>(shl_ln1_fu_3351_p3.read()));
}

void matrix_mult::thread_add_ln51_fu_4278_p2() {
    add_ln51_fu_4278_p2 = (!ap_const_lv15_1.is_01() || !indvar_flatten52_reg_2206.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_1) + sc_biguint<15>(indvar_flatten52_reg_2206.read()));
}

void matrix_mult::thread_add_ln52_1_fu_4342_p2() {
    add_ln52_1_fu_4342_p2 = (!indvar_flatten_reg_2229.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_2229.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void matrix_mult::thread_add_ln57_1_fu_4572_p2() {
    add_ln57_1_fu_4572_p2 = (!sext_ln57_fu_4545_p1.read().is_01() || !add_ln57_fu_4566_p2.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln57_fu_4545_p1.read()) + sc_biguint<9>(add_ln57_fu_4566_p2.read()));
}

void matrix_mult::thread_add_ln57_2_fu_4609_p2() {
    add_ln57_2_fu_4609_p2 = (!zext_ln57_2_fu_4605_p1.read().is_01() || !tmp_11_fu_4591_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln57_2_fu_4605_p1.read()) + sc_biguint<9>(tmp_11_fu_4591_p3.read()));
}

void matrix_mult::thread_add_ln57_3_fu_4615_p2() {
    add_ln57_3_fu_4615_p2 = (!add_ln57_2_fu_4609_p2.read().is_01() || !sext_ln57_2_fu_4588_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln57_2_fu_4609_p2.read()) + sc_bigint<9>(sext_ln57_2_fu_4588_p1.read()));
}

void matrix_mult::thread_add_ln57_fu_4566_p2() {
    add_ln57_fu_4566_p2 = (!tmp_s_fu_4548_p3.read().is_01() || !zext_ln57_fu_4562_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_s_fu_4548_p3.read()) + sc_biguint<9>(zext_ln57_fu_4562_p1.read()));
}

void matrix_mult::thread_add_ln58_1_fu_4539_p2() {
    add_ln58_1_fu_4539_p2 = (!zext_ln58_fu_4506_p1.read().is_01() || !add_ln58_fu_4533_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln58_fu_4506_p1.read()) + sc_biguint<9>(add_ln58_fu_4533_p2.read()));
}

void matrix_mult::thread_add_ln58_fu_4533_p2() {
    add_ln58_fu_4533_p2 = (!zext_ln58_1_cast_fu_4513_p3.read().is_01() || !zext_ln58_2_cast_fu_4525_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln58_1_cast_fu_4513_p3.read()) + sc_biguint<9>(zext_ln58_2_cast_fu_4525_p3.read()));
}

void matrix_mult::thread_add_ln59_1_fu_4772_p2() {
    add_ln59_1_fu_4772_p2 = (!add_ln59_fu_4735_p2.read().is_01() || !zext_ln59_2_fu_4769_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln59_fu_4735_p2.read()) + sc_biguint<9>(zext_ln59_2_fu_4769_p1.read()));
}

void matrix_mult::thread_add_ln59_fu_4735_p2() {
    add_ln59_fu_4735_p2 = (!zext_ln59_1_fu_4731_p1.read().is_01() || !zext_ln59_fu_4720_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln59_1_fu_4731_p1.read()) + sc_biguint<9>(zext_ln59_fu_4720_p1.read()));
}

void matrix_mult::thread_add_ln81_10_fu_5102_p2() {
    add_ln81_10_fu_5102_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln81_11_fu_5119_p2() {
    add_ln81_11_fu_5119_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln81_12_fu_5136_p2() {
    add_ln81_12_fu_5136_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln81_13_fu_5153_p2() {
    add_ln81_13_fu_5153_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln81_14_fu_5170_p2() {
    add_ln81_14_fu_5170_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln81_15_fu_5192_p2() {
    add_ln81_15_fu_5192_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln81_16_fu_5209_p2() {
    add_ln81_16_fu_5209_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln81_17_fu_4845_p2() {
    add_ln81_17_fu_4845_p2 = (!ap_phi_mux_i3_0_phi_fu_2280_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_2280_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln81_18_fu_4879_p2() {
    add_ln81_18_fu_4879_p2 = (!zext_ln81_21_fu_4875_p1.read().is_01() || !tmp_13_fu_4859_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln81_21_fu_4875_p1.read()) + sc_biguint<9>(tmp_13_fu_4859_p3.read()));
}

void matrix_mult::thread_add_ln81_19_fu_5270_p2() {
    add_ln81_19_fu_5270_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln81_1_fu_4949_p2() {
    add_ln81_1_fu_4949_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln81_20_fu_5281_p2() {
    add_ln81_20_fu_5281_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln81_21_fu_5297_p2() {
    add_ln81_21_fu_5297_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln81_22_fu_5308_p2() {
    add_ln81_22_fu_5308_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln81_23_fu_5324_p2() {
    add_ln81_23_fu_5324_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln81_24_fu_5335_p2() {
    add_ln81_24_fu_5335_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln81_25_fu_5356_p2() {
    add_ln81_25_fu_5356_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln81_26_fu_5367_p2() {
    add_ln81_26_fu_5367_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln81_27_fu_5388_p2() {
    add_ln81_27_fu_5388_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln81_28_fu_5399_p2() {
    add_ln81_28_fu_5399_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln81_29_fu_5420_p2() {
    add_ln81_29_fu_5420_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln81_2_fu_4966_p2() {
    add_ln81_2_fu_4966_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln81_30_fu_5431_p2() {
    add_ln81_30_fu_5431_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln81_31_fu_5452_p2() {
    add_ln81_31_fu_5452_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln81_32_fu_5463_p2() {
    add_ln81_32_fu_5463_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln81_33_fu_5484_p2() {
    add_ln81_33_fu_5484_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln81_34_fu_5495_p2() {
    add_ln81_34_fu_5495_p2 = (!add_ln81_18_reg_6742_pp3_iter1_reg.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_18_reg_6742_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln81_3_fu_4983_p2() {
    add_ln81_3_fu_4983_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln81_4_fu_5000_p2() {
    add_ln81_4_fu_5000_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln81_5_fu_5017_p2() {
    add_ln81_5_fu_5017_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln81_6_fu_5034_p2() {
    add_ln81_6_fu_5034_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln81_7_fu_5051_p2() {
    add_ln81_7_fu_5051_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln81_8_fu_5068_p2() {
    add_ln81_8_fu_5068_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln81_9_fu_5085_p2() {
    add_ln81_9_fu_5085_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln81_reg_6712.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln81_fu_4833_p2() {
    add_ln81_fu_4833_p2 = (!zext_ln81_fu_4829_p1.read().is_01() || !shl_ln2_fu_4813_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln81_fu_4829_p1.read()) + sc_biguint<9>(shl_ln2_fu_4813_p3.read()));
}

void matrix_mult::thread_and_ln51_fu_4316_p2() {
    and_ln51_fu_4316_p2 = (icmp_ln54_fu_4310_p2.read() & xor_ln51_fu_4304_p2.read());
}

void matrix_mult::thread_and_ln57_1_fu_4707_p2() {
    and_ln57_1_fu_4707_p2 = (icmp_ln57_3_fu_4702_p2.read() & xor_ln57_1_fu_4696_p2.read());
}

void matrix_mult::thread_and_ln57_fu_4650_p2() {
    and_ln57_fu_4650_p2 = (icmp_ln57_fu_4645_p2.read() & xor_ln57_fu_4639_p2.read());
}

void matrix_mult::thread_and_ln58_fu_4392_p2() {
    and_ln58_fu_4392_p2 = (icmp_ln58_fu_4386_p2.read() & xor_ln58_fu_4380_p2.read());
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[3];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[4];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[5];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[6];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[7];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[8];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[9];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[10];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[11];
}

void matrix_mult::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[12];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[14];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[15];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[16];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage3() {
    ap_CS_fsm_pp1_stage3 = ap_CS_fsm.read()[17];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[18];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage5() {
    ap_CS_fsm_pp1_stage5 = ap_CS_fsm.read()[19];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage6() {
    ap_CS_fsm_pp1_stage6 = ap_CS_fsm.read()[20];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage7() {
    ap_CS_fsm_pp1_stage7 = ap_CS_fsm.read()[21];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage8() {
    ap_CS_fsm_pp1_stage8 = ap_CS_fsm.read()[22];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage9() {
    ap_CS_fsm_pp1_stage9 = ap_CS_fsm.read()[23];
}

void matrix_mult::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[25];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[27];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[28];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage10() {
    ap_CS_fsm_pp3_stage10 = ap_CS_fsm.read()[37];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage11() {
    ap_CS_fsm_pp3_stage11 = ap_CS_fsm.read()[38];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[29];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[30];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage4() {
    ap_CS_fsm_pp3_stage4 = ap_CS_fsm.read()[31];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage5() {
    ap_CS_fsm_pp3_stage5 = ap_CS_fsm.read()[32];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage6() {
    ap_CS_fsm_pp3_stage6 = ap_CS_fsm.read()[33];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage7() {
    ap_CS_fsm_pp3_stage7 = ap_CS_fsm.read()[34];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage8() {
    ap_CS_fsm_pp3_stage8 = ap_CS_fsm.read()[35];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage9() {
    ap_CS_fsm_pp3_stage9 = ap_CS_fsm.read()[36];
}

void matrix_mult::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matrix_mult::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[39];
}

void matrix_mult::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void matrix_mult::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[13];
}

void matrix_mult::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void matrix_mult::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[24];
}

void matrix_mult::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[26];
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

void matrix_mult::thread_ap_block_state100_pp3_stage6_iter0() {
    ap_block_state100_pp3_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state101_pp3_stage7_iter0() {
    ap_block_state101_pp3_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state102_pp3_stage8_iter0() {
    ap_block_state102_pp3_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state103_pp3_stage9_iter0() {
    ap_block_state103_pp3_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state104_pp3_stage10_iter0() {
    ap_block_state104_pp3_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state105_pp3_stage11_iter0() {
    ap_block_state105_pp3_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state106_pp3_stage0_iter1() {
    ap_block_state106_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state107_pp3_stage1_iter1() {
    ap_block_state107_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state108_pp3_stage2_iter1() {
    ap_block_state108_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state109_pp3_stage3_iter1() {
    ap_block_state109_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state10_pp0_stage6_iter0() {
    ap_block_state10_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state110_pp3_stage4_iter1() {
    ap_block_state110_pp3_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state111_pp3_stage5_iter1() {
    ap_block_state111_pp3_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state112_pp3_stage6_iter1() {
    ap_block_state112_pp3_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state113_pp3_stage7_iter1() {
    ap_block_state113_pp3_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state114_pp3_stage8_iter1() {
    ap_block_state114_pp3_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state115_pp3_stage9_iter1() {
    ap_block_state115_pp3_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state116_pp3_stage10_iter1() {
    ap_block_state116_pp3_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state117_pp3_stage11_iter1() {
    ap_block_state117_pp3_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state11_pp0_stage7_iter0() {
    ap_block_state11_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state12_pp0_stage8_iter0() {
    ap_block_state12_pp0_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state13_pp0_stage9_iter0() {
    ap_block_state13_pp0_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state14_pp0_stage0_iter1() {
    ap_block_state14_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state15_pp0_stage1_iter1() {
    ap_block_state15_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state16_pp0_stage2_iter1() {
    ap_block_state16_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state17_pp0_stage3_iter1() {
    ap_block_state17_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state18_pp0_stage4_iter1() {
    ap_block_state18_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state19_pp0_stage5_iter1() {
    ap_block_state19_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state20_pp0_stage6_iter1() {
    ap_block_state20_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state21_pp0_stage7_iter1() {
    ap_block_state21_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state22_pp0_stage8_iter1() {
    ap_block_state22_pp0_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state23_pp0_stage9_iter1() {
    ap_block_state23_pp0_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state24_pp0_stage0_iter2() {
    ap_block_state24_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state25_pp0_stage1_iter2() {
    ap_block_state25_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state26_pp0_stage2_iter2() {
    ap_block_state26_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state28_pp1_stage0_iter0() {
    ap_block_state28_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state29_pp1_stage1_iter0() {
    ap_block_state29_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state30_pp1_stage2_iter0() {
    ap_block_state30_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state31_pp1_stage3_iter0() {
    ap_block_state31_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state32_pp1_stage4_iter0() {
    ap_block_state32_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state33_pp1_stage5_iter0() {
    ap_block_state33_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state34_pp1_stage6_iter0() {
    ap_block_state34_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state35_pp1_stage7_iter0() {
    ap_block_state35_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state36_pp1_stage8_iter0() {
    ap_block_state36_pp1_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state37_pp1_stage9_iter0() {
    ap_block_state37_pp1_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state38_pp1_stage0_iter1() {
    ap_block_state38_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state39_pp1_stage1_iter1() {
    ap_block_state39_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state40_pp1_stage2_iter1() {
    ap_block_state40_pp1_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state41_pp1_stage3_iter1() {
    ap_block_state41_pp1_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state42_pp1_stage4_iter1() {
    ap_block_state42_pp1_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state43_pp1_stage5_iter1() {
    ap_block_state43_pp1_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state44_pp1_stage6_iter1() {
    ap_block_state44_pp1_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state45_pp1_stage7_iter1() {
    ap_block_state45_pp1_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state46_pp1_stage8_iter1() {
    ap_block_state46_pp1_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state47_pp1_stage9_iter1() {
    ap_block_state47_pp1_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state48_pp1_stage0_iter2() {
    ap_block_state48_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state49_pp1_stage1_iter2() {
    ap_block_state49_pp1_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state4_pp0_stage0_iter0() {
    ap_block_state4_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state50_pp1_stage2_iter2() {
    ap_block_state50_pp1_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state52_pp2_stage0_iter0() {
    ap_block_state52_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state53_pp2_stage0_iter1() {
    ap_block_state53_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state54_pp2_stage0_iter2() {
    ap_block_state54_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state55_pp2_stage0_iter3() {
    ap_block_state55_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state56_pp2_stage0_iter4() {
    ap_block_state56_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state57_pp2_stage0_iter5() {
    ap_block_state57_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state58_pp2_stage0_iter6() {
    ap_block_state58_pp2_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state59_pp2_stage0_iter7() {
    ap_block_state59_pp2_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state5_pp0_stage1_iter0() {
    ap_block_state5_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state60_pp2_stage0_iter8() {
    ap_block_state60_pp2_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state61_pp2_stage0_iter9() {
    ap_block_state61_pp2_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state62_pp2_stage0_iter10() {
    ap_block_state62_pp2_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state63_pp2_stage0_iter11() {
    ap_block_state63_pp2_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state64_pp2_stage0_iter12() {
    ap_block_state64_pp2_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state65_pp2_stage0_iter13() {
    ap_block_state65_pp2_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state66_pp2_stage0_iter14() {
    ap_block_state66_pp2_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state67_pp2_stage0_iter15() {
    ap_block_state67_pp2_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state68_pp2_stage0_iter16() {
    ap_block_state68_pp2_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state69_pp2_stage0_iter17() {
    ap_block_state69_pp2_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state6_pp0_stage2_iter0() {
    ap_block_state6_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state70_pp2_stage0_iter18() {
    ap_block_state70_pp2_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state71_pp2_stage0_iter19() {
    ap_block_state71_pp2_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state72_pp2_stage0_iter20() {
    ap_block_state72_pp2_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state73_pp2_stage0_iter21() {
    ap_block_state73_pp2_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state74_pp2_stage0_iter22() {
    ap_block_state74_pp2_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state75_pp2_stage0_iter23() {
    ap_block_state75_pp2_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state76_pp2_stage0_iter24() {
    ap_block_state76_pp2_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state77_pp2_stage0_iter25() {
    ap_block_state77_pp2_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state78_pp2_stage0_iter26() {
    ap_block_state78_pp2_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state79_pp2_stage0_iter27() {
    ap_block_state79_pp2_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state7_pp0_stage3_iter0() {
    ap_block_state7_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state80_pp2_stage0_iter28() {
    ap_block_state80_pp2_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state81_pp2_stage0_iter29() {
    ap_block_state81_pp2_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state82_pp2_stage0_iter30() {
    ap_block_state82_pp2_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state83_pp2_stage0_iter31() {
    ap_block_state83_pp2_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state84_pp2_stage0_iter32() {
    ap_block_state84_pp2_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state85_pp2_stage0_iter33() {
    ap_block_state85_pp2_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state86_pp2_stage0_iter34() {
    ap_block_state86_pp2_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state87_pp2_stage0_iter35() {
    ap_block_state87_pp2_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state88_pp2_stage0_iter36() {
    ap_block_state88_pp2_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state89_pp2_stage0_iter37() {
    ap_block_state89_pp2_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state8_pp0_stage4_iter0() {
    ap_block_state8_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state90_pp2_stage0_iter38() {
    ap_block_state90_pp2_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state91_pp2_stage0_iter39() {
    ap_block_state91_pp2_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state92_pp2_stage0_iter40() {
    ap_block_state92_pp2_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state94_pp3_stage0_iter0() {
    ap_block_state94_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state95_pp3_stage1_iter0() {
    ap_block_state95_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state96_pp3_stage2_iter0() {
    ap_block_state96_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state97_pp3_stage3_iter0() {
    ap_block_state97_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state98_pp3_stage4_iter0() {
    ap_block_state98_pp3_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state99_pp3_stage5_iter0() {
    ap_block_state99_pp3_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state9_pp0_stage5_iter0() {
    ap_block_state9_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_condition_1870() {
    ap_condition_1870 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter37_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln58_reg_6547_pp2_iter37_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln58_1_reg_6551_pp2_iter37_reg.read()));
}

void matrix_mult::thread_ap_condition_1875() {
    ap_condition_1875 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter37_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln58_reg_6547_pp2_iter37_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln58_1_reg_6551_pp2_iter37_reg.read()));
}

void matrix_mult::thread_ap_condition_2459() {
    ap_condition_2459 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()));
}

void matrix_mult::thread_ap_condition_pp0_exit_iter0_state4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_fu_2406_p2.read())) {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp1_exit_iter0_state28() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_fu_3339_p2.read())) {
        ap_condition_pp1_exit_iter0_state28 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state28 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp2_exit_iter38_state90() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter38.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp2_iter37.read(), ap_const_logic_0))) {
        ap_condition_pp2_exit_iter38_state90 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter38_state90 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp3_exit_iter0_state94() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln78_fu_4801_p2.read())) {
        ap_condition_pp3_exit_iter0_state94 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state94 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter40.read()))) {
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

void matrix_mult::thread_ap_phi_mux_i1_0_phi_fu_2199_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_reg_6023.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i1_0_phi_fu_2199_p4 = i_1_reg_6027.read();
    } else {
        ap_phi_mux_i1_0_phi_fu_2199_p4 = i1_0_reg_2195.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i3_0_phi_fu_2280_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln78_reg_6703.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i3_0_phi_fu_2280_p4 = i_2_reg_6707.read();
    } else {
        ap_phi_mux_i3_0_phi_fu_2280_p4 = i3_0_reg_2276.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i_0_phi_fu_2188_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln35_reg_5563.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_2188_p4 = i_reg_5567.read();
    } else {
        ap_phi_mux_i_0_phi_fu_2188_p4 = i_0_reg_2184.read();
    }
}

void matrix_mult::thread_ap_phi_mux_m_0_phi_fu_2255_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483_pp2_iter28_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter29.read()))) {
        ap_phi_mux_m_0_phi_fu_2255_p4 = select_ln52_4_reg_6575.read();
    } else {
        ap_phi_mux_m_0_phi_fu_2255_p4 = m_0_reg_2251.read();
    }
}

void matrix_mult::thread_ap_phi_mux_step_0_phi_fu_2221_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_reg_6483.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_step_0_phi_fu_2221_p4 = select_ln51_1_reg_6506.read();
    } else {
        ap_phi_mux_step_0_phi_fu_2221_p4 = step_0_reg_2217.read();
    }
}

void matrix_mult::thread_ap_phi_reg_pp2_iter0_b_val_reg_2263() {
    ap_phi_reg_pp2_iter0_b_val_reg_2263 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void matrix_mult::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_19_fu_4220_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_17_fu_4168_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_15_fu_4116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_13_fu_4064_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_11_fu_4012_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_9_fu_3960_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_7_fu_3908_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_5_fu_3856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_3_fu_3804_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln45_fu_3732_p1.read());
    } else {
        b_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_20_fu_4226_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_18_fu_4174_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_16_fu_4122_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_14_fu_4070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_12_fu_4018_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_10_fu_3966_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_8_fu_3914_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_6_fu_3862_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_4_fu_3810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln45_2_fu_3738_p1.read());
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
        b_1_address0 =  (sc_lv<8>) (zext_ln45_19_fu_4220_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_17_fu_4168_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_15_fu_4116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_13_fu_4064_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_11_fu_4012_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_9_fu_3960_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_7_fu_3908_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_5_fu_3856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_3_fu_3804_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln45_fu_3732_p1.read());
    } else {
        b_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_20_fu_4226_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_18_fu_4174_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_16_fu_4122_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_14_fu_4070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_12_fu_4018_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_10_fu_3966_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_8_fu_3914_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_6_fu_3862_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_4_fu_3810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln45_2_fu_3738_p1.read());
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
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln58_1_fu_4627_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_14_fu_4237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_12_fu_4185_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_10_fu_4133_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_8_fu_4081_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_6_fu_4029_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_4_fu_3977_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_2_fu_3925_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (sext_ln45_fu_3873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln45_24_fu_3821_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_address0 =  (sc_lv<8>) (zext_ln45_22_fu_3777_p1.read());
    } else {
        b_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_15_fu_4248_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_13_fu_4196_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_11_fu_4144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_9_fu_4092_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_7_fu_4040_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_5_fu_3988_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_3_fu_3936_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (sext_ln45_1_fu_3884_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln45_25_fu_3832_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_address1 =  (sc_lv<8>) (zext_ln45_23_fu_3789_p1.read());
    } else {
        b_buff_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read())) || 
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
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
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
        b_buff_0_d0 = select_ln45_18_fu_4254_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_16_fu_4202_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d0 = select_ln45_14_fu_4150_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_12_fu_4098_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_10_fu_4046_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_8_fu_3994_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_6_fu_3942_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_4_fu_3890_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_2_fu_3838_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_d0 = select_ln45_fu_3744_p3.read();
    } else {
        b_buff_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d1 = select_ln45_19_fu_4263_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_17_fu_4211_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_d1 = select_ln45_15_fu_4159_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_13_fu_4107_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_11_fu_4055_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_9_fu_4003_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_7_fu_3951_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_5_fu_3899_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_3_fu_3847_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_d1 = select_ln45_1_fu_3795_p3.read();
    } else {
        b_buff_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())))) {
        b_buff_0_we0 = ap_const_logic_1;
    } else {
        b_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())))) {
        b_buff_0_we1 = ap_const_logic_1;
    } else {
        b_buff_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read()))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln58_1_fu_4627_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_14_fu_4237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_12_fu_4185_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_10_fu_4133_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_8_fu_4081_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_6_fu_4029_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_4_fu_3977_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_2_fu_3925_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (sext_ln45_fu_3873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln45_24_fu_3821_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_address0 =  (sc_lv<8>) (zext_ln45_22_fu_3777_p1.read());
    } else {
        b_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_15_fu_4248_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_13_fu_4196_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_11_fu_4144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_9_fu_4092_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_7_fu_4040_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_5_fu_3988_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_3_fu_3936_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (sext_ln45_1_fu_3884_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln45_25_fu_3832_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_address1 =  (sc_lv<8>) (zext_ln45_23_fu_3789_p1.read());
    } else {
        b_buff_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_buff_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter37.read())) || 
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
        b_buff_1_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
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
        b_buff_1_ce1 = ap_const_logic_1;
    } else {
        b_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d0 = select_ln45_18_fu_4254_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_16_fu_4202_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d0 = select_ln45_14_fu_4150_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_12_fu_4098_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_10_fu_4046_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_8_fu_3994_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_6_fu_3942_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_4_fu_3890_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_2_fu_3838_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_d0 = select_ln45_fu_3744_p3.read();
    } else {
        b_buff_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d1 = select_ln45_19_fu_4263_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_17_fu_4211_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_d1 = select_ln45_15_fu_4159_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_13_fu_4107_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_11_fu_4055_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_9_fu_4003_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_7_fu_3951_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_5_fu_3899_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_3_fu_3847_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_d1 = select_ln45_1_fu_3795_p3.read();
    } else {
        b_buff_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_b_buff_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())))) {
        b_buff_1_we0 = ap_const_logic_1;
    } else {
        b_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_1_reg_6056_pp1_iter2_reg.read())))) {
        b_buff_1_we1 = ap_const_logic_1;
    } else {
        b_buff_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_20_fu_5531_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_18_fu_5521_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_16_fu_5511_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_14_fu_5479_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_12_fu_5447_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_10_fu_5415_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_8_fu_5383_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_5_fu_5346_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_4_fu_5319_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_3_fu_5292_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_2_fu_5265_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln81_1_fu_5237_p1.read());
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
            c_0_address1 =  (sc_lv<8>) (zext_ln81_19_fu_5526_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_17_fu_5516_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_15_fu_5506_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_13_fu_5474_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_11_fu_5442_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_9_fu_5410_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_7_fu_5378_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln81_6_fu_5351_p1.read());
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
        c_0_d0 = reg_2313.read();
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
        c_0_d0 = reg_2305.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_0_d0 = grp_fu_2287_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_0_d0 = grp_fu_2296_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_0_d0 = select_ln81_reg_6784.read();
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
        c_0_d1 = reg_2313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_0_d1 = reg_2305.read();
    } else {
        c_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_1_reg_6934.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_2_reg_6780_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_3_reg_6795_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_4_reg_6804_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_5_reg_6813_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_8_reg_6840_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_10_reg_6858_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_12_reg_6876_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_14_reg_6894_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_16_reg_6912_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_18_reg_6930_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_20_reg_6952_pp3_iter1_reg.read())))) {
        c_0_we0 = ap_const_logic_1;
    } else {
        c_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_6_reg_6822_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_7_reg_6831_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_9_reg_6849_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_11_reg_6867_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_13_reg_6885_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_15_reg_6903_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_17_reg_6921_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_19_reg_6943_pp3_iter1_reg.read())))) {
        c_0_we1 = ap_const_logic_1;
    } else {
        c_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_20_fu_5531_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_18_fu_5521_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_16_fu_5511_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_14_fu_5479_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_12_fu_5447_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_10_fu_5415_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_8_fu_5383_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_5_fu_5346_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_4_fu_5319_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_3_fu_5292_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_2_fu_5265_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln81_1_fu_5237_p1.read());
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
            c_1_address1 =  (sc_lv<8>) (zext_ln81_19_fu_5526_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_17_fu_5516_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_15_fu_5506_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_13_fu_5474_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_11_fu_5442_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_9_fu_5410_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_7_fu_5378_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln81_6_fu_5351_p1.read());
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
        c_1_d0 = reg_2313.read();
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
        c_1_d0 = reg_2305.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_1_d0 = grp_fu_2287_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_1_d0 = grp_fu_2296_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_1_d0 = select_ln81_reg_6784.read();
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
        c_1_d1 = reg_2313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_1_d1 = reg_2305.read();
    } else {
        c_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_1_reg_6934.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_2_reg_6780_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_3_reg_6795_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_4_reg_6804_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_5_reg_6813_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_8_reg_6840_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_10_reg_6858_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_12_reg_6876_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_14_reg_6894_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_16_reg_6912_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_18_reg_6930_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_20_reg_6952_pp3_iter1_reg.read())))) {
        c_1_we0 = ap_const_logic_1;
    } else {
        c_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_6_reg_6822_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_7_reg_6831_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_9_reg_6849_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_11_reg_6867_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_13_reg_6885_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_15_reg_6903_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_17_reg_6921_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln81_19_reg_6943_pp3_iter1_reg.read())))) {
        c_1_we1 = ap_const_logic_1;
    } else {
        c_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_15_fu_5500_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_13_fu_5468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_11_fu_5436_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_9_fu_5404_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_7_fu_5372_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_5_fu_5340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_3_fu_5313_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln81_1_fu_5286_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln81_25_fu_5259_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln81_23_fu_5231_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln59_3_fu_4778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln20_2_fu_2388_p1.read());
    } else {
        c_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_14_fu_5489_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_12_fu_5457_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_10_fu_5425_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_8_fu_5393_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_6_fu_5361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_4_fu_5329_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_2_fu_5302_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (sext_ln81_fu_5275_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (zext_ln81_24_fu_5248_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_0_address1 =  (sc_lv<8>) (zext_ln81_22_fu_4885_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter40.read()))) {
        c_buff_0_address1 = c_buff_0_addr_4_reg_6676_pp2_iter39_reg.read();
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter38.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter40.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)))) {
        c_buff_0_ce1 = ap_const_logic_1;
    } else {
        c_buff_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_2_reg_5541.read(), ap_const_lv1_1))) {
        c_buff_0_we0 = ap_const_logic_1;
    } else {
        c_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, select_ln52_2_reg_6656_pp2_iter39_reg.read()))) {
        c_buff_0_we1 = ap_const_logic_1;
    } else {
        c_buff_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_15_fu_5500_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_13_fu_5468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_11_fu_5436_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_9_fu_5404_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_7_fu_5372_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_5_fu_5340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_3_fu_5313_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln81_1_fu_5286_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln81_25_fu_5259_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln81_23_fu_5231_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln59_3_fu_4778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln20_2_fu_2388_p1.read());
    } else {
        c_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_14_fu_5489_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_12_fu_5457_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_10_fu_5425_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_8_fu_5393_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_6_fu_5361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_4_fu_5329_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_2_fu_5302_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (sext_ln81_fu_5275_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (zext_ln81_24_fu_5248_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_1_address1 =  (sc_lv<8>) (zext_ln81_22_fu_4885_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter40.read()))) {
        c_buff_1_address1 = c_buff_1_addr_4_reg_6682_pp2_iter39_reg.read();
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter38.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter40.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)))) {
        c_buff_1_ce1 = ap_const_logic_1;
    } else {
        c_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_2_reg_5541.read(), ap_const_lv1_0))) {
        c_buff_1_we0 = ap_const_logic_1;
    } else {
        c_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, select_ln52_2_reg_6656_pp2_iter39_reg.read()))) {
        c_buff_1_we1 = ap_const_logic_1;
    } else {
        c_buff_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_grp_fu_2287_p0() {
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
        grp_fu_2287_p0 = icmp_ln81_reg_6736_pp3_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2287_p0 = icmp_ln81_reg_6736.read();
    } else {
        grp_fu_2287_p0 =  (sc_lv<1>) ("X");
    }
}

void matrix_mult::thread_grp_fu_2287_p3() {
    grp_fu_2287_p3 = (!grp_fu_2287_p0.read()[0].is_01())? sc_lv<32>(): ((grp_fu_2287_p0.read()[0].to_bool())? c_buff_0_q1.read(): c_buff_1_q1.read());
}

void matrix_mult::thread_grp_fu_2296_p3() {
    grp_fu_2296_p3 = (!icmp_ln81_reg_6736_pp3_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln81_reg_6736_pp3_iter1_reg.read()[0].to_bool())? c_buff_0_q0.read(): c_buff_1_q0.read());
}

void matrix_mult::thread_grp_fu_4398_p1() {
    grp_fu_4398_p1 =  (sc_lv<5>) (ap_const_lv32_A);
}

void matrix_mult::thread_i_1_fu_3345_p2() {
    i_1_fu_3345_p2 = (!ap_phi_mux_i1_0_phi_fu_2199_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_2199_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_2_fu_4807_p2() {
    i_2_fu_4807_p2 = (!ap_phi_mux_i3_0_phi_fu_2280_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_2280_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_fu_2412_p2() {
    i_fu_2412_p2 = (!ap_phi_mux_i_0_phi_fu_2188_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_2188_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_icmp_ln20_1_fu_2400_p2() {
    icmp_ln20_1_fu_2400_p2 = (!phi_ln20_reg_2161.read().is_01() || !ap_const_lv5_13.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_reg_2161.read() == ap_const_lv5_13);
}

void matrix_mult::thread_icmp_ln20_2_fu_2327_p2() {
    icmp_ln20_2_fu_2327_p2 = (!phi_ln20_reg_2161.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(phi_ln20_reg_2161.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln20_fu_2394_p2() {
    icmp_ln20_fu_2394_p2 = (!phi_ln20_1_reg_2173.read().is_01() || !ap_const_lv5_13.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_1_reg_2173.read() == ap_const_lv5_13);
}

void matrix_mult::thread_icmp_ln35_fu_2406_p2() {
    icmp_ln35_fu_2406_p2 = (!ap_phi_mux_i_0_phi_fu_2188_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_2188_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln38_10_fu_2618_p2() {
    icmp_ln38_10_fu_2618_p2 = (!add_ln38_6_fu_2607_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_6_fu_2607_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_11_fu_2635_p2() {
    icmp_ln38_11_fu_2635_p2 = (!add_ln38_7_fu_2624_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_7_fu_2624_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_12_fu_2652_p2() {
    icmp_ln38_12_fu_2652_p2 = (!add_ln38_8_fu_2641_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_8_fu_2641_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_13_fu_2669_p2() {
    icmp_ln38_13_fu_2669_p2 = (!add_ln38_9_fu_2658_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_9_fu_2658_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_14_fu_2686_p2() {
    icmp_ln38_14_fu_2686_p2 = (!add_ln38_10_fu_2675_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_10_fu_2675_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_15_fu_2703_p2() {
    icmp_ln38_15_fu_2703_p2 = (!add_ln38_11_fu_2692_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_11_fu_2692_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_16_fu_2720_p2() {
    icmp_ln38_16_fu_2720_p2 = (!add_ln38_12_fu_2709_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_12_fu_2709_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_17_fu_2737_p2() {
    icmp_ln38_17_fu_2737_p2 = (!add_ln38_13_fu_2726_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_13_fu_2726_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_18_fu_2754_p2() {
    icmp_ln38_18_fu_2754_p2 = (!add_ln38_14_fu_2743_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_14_fu_2743_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_19_fu_2776_p2() {
    icmp_ln38_19_fu_2776_p2 = (!add_ln38_15_fu_2765_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_15_fu_2765_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_1_fu_2450_p2() {
    icmp_ln38_1_fu_2450_p2 = (!ap_phi_mux_i_0_phi_fu_2188_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_2188_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln38_20_fu_2793_p2() {
    icmp_ln38_20_fu_2793_p2 = (!add_ln38_16_fu_2782_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_16_fu_2782_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_2_fu_2482_p2() {
    icmp_ln38_2_fu_2482_p2 = (!or_ln38_fu_2470_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln38_fu_2470_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_3_fu_2499_p2() {
    icmp_ln38_3_fu_2499_p2 = (!or_ln38_1_fu_2488_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln38_1_fu_2488_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_4_fu_2516_p2() {
    icmp_ln38_4_fu_2516_p2 = (!or_ln38_2_fu_2505_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln38_2_fu_2505_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_5_fu_2533_p2() {
    icmp_ln38_5_fu_2533_p2 = (!add_ln38_1_fu_2522_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_1_fu_2522_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_6_fu_2550_p2() {
    icmp_ln38_6_fu_2550_p2 = (!add_ln38_2_fu_2539_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_2_fu_2539_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_7_fu_2567_p2() {
    icmp_ln38_7_fu_2567_p2 = (!add_ln38_3_fu_2556_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_3_fu_2556_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_8_fu_2584_p2() {
    icmp_ln38_8_fu_2584_p2 = (!add_ln38_4_fu_2573_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_4_fu_2573_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_9_fu_2601_p2() {
    icmp_ln38_9_fu_2601_p2 = (!add_ln38_5_fu_2590_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_5_fu_2590_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln38_fu_2760_p2() {
    icmp_ln38_fu_2760_p2 = (!add_ln38_reg_5572.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln38_reg_5572.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln42_fu_3339_p2() {
    icmp_ln42_fu_3339_p2 = (!ap_phi_mux_i1_0_phi_fu_2199_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i1_0_phi_fu_2199_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln45_10_fu_3551_p2() {
    icmp_ln45_10_fu_3551_p2 = (!add_ln45_6_fu_3540_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_6_fu_3540_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_11_fu_3568_p2() {
    icmp_ln45_11_fu_3568_p2 = (!add_ln45_7_fu_3557_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_7_fu_3557_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_12_fu_3585_p2() {
    icmp_ln45_12_fu_3585_p2 = (!add_ln45_8_fu_3574_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_8_fu_3574_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_13_fu_3602_p2() {
    icmp_ln45_13_fu_3602_p2 = (!add_ln45_9_fu_3591_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_9_fu_3591_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_14_fu_3619_p2() {
    icmp_ln45_14_fu_3619_p2 = (!add_ln45_10_fu_3608_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_10_fu_3608_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_15_fu_3636_p2() {
    icmp_ln45_15_fu_3636_p2 = (!add_ln45_11_fu_3625_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_11_fu_3625_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_16_fu_3653_p2() {
    icmp_ln45_16_fu_3653_p2 = (!add_ln45_12_fu_3642_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_12_fu_3642_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_17_fu_3670_p2() {
    icmp_ln45_17_fu_3670_p2 = (!add_ln45_13_fu_3659_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_13_fu_3659_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_18_fu_3687_p2() {
    icmp_ln45_18_fu_3687_p2 = (!add_ln45_14_fu_3676_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_14_fu_3676_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_19_fu_3709_p2() {
    icmp_ln45_19_fu_3709_p2 = (!add_ln45_15_fu_3698_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_15_fu_3698_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_1_fu_3383_p2() {
    icmp_ln45_1_fu_3383_p2 = (!ap_phi_mux_i1_0_phi_fu_2199_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_2199_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln45_20_fu_3726_p2() {
    icmp_ln45_20_fu_3726_p2 = (!add_ln45_16_fu_3715_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_16_fu_3715_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_2_fu_3415_p2() {
    icmp_ln45_2_fu_3415_p2 = (!or_ln45_fu_3403_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln45_fu_3403_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_3_fu_3432_p2() {
    icmp_ln45_3_fu_3432_p2 = (!or_ln45_1_fu_3421_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln45_1_fu_3421_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_4_fu_3449_p2() {
    icmp_ln45_4_fu_3449_p2 = (!or_ln45_2_fu_3438_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln45_2_fu_3438_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_5_fu_3466_p2() {
    icmp_ln45_5_fu_3466_p2 = (!add_ln45_1_fu_3455_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_1_fu_3455_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_6_fu_3483_p2() {
    icmp_ln45_6_fu_3483_p2 = (!add_ln45_2_fu_3472_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_2_fu_3472_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_7_fu_3500_p2() {
    icmp_ln45_7_fu_3500_p2 = (!add_ln45_3_fu_3489_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_3_fu_3489_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_8_fu_3517_p2() {
    icmp_ln45_8_fu_3517_p2 = (!add_ln45_4_fu_3506_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_4_fu_3506_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_9_fu_3534_p2() {
    icmp_ln45_9_fu_3534_p2 = (!add_ln45_5_fu_3523_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_5_fu_3523_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln45_fu_3693_p2() {
    icmp_ln45_fu_3693_p2 = (!add_ln45_reg_6032.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln45_reg_6032.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln51_fu_4272_p2() {
    icmp_ln51_fu_4272_p2 = (!indvar_flatten52_reg_2206.read().is_01() || !ap_const_lv15_5AA0.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten52_reg_2206.read() == ap_const_lv15_5AA0);
}

void matrix_mult::thread_icmp_ln52_fu_4290_p2() {
    icmp_ln52_fu_4290_p2 = (!indvar_flatten_reg_2229.read().is_01() || !ap_const_lv10_190.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2229.read() == ap_const_lv10_190);
}

void matrix_mult::thread_icmp_ln54_fu_4310_p2() {
    icmp_ln54_fu_4310_p2 = (!o_0_reg_2240.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(o_0_reg_2240.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln57_1_fu_4430_p2() {
    icmp_ln57_1_fu_4430_p2 = (!ap_phi_mux_m_0_phi_fu_2255_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_m_0_phi_fu_2255_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln57_2_fu_4483_p2() {
    icmp_ln57_2_fu_4483_p2 = (!step_reg_6492_pp2_iter35_reg.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): (sc_biguint<6>(step_reg_6492_pp2_iter35_reg.read()) < sc_biguint<6>(ap_const_lv6_14));
}

void matrix_mult::thread_icmp_ln57_3_fu_4702_p2() {
    icmp_ln57_3_fu_4702_p2 = (!sub_ln57_1_reg_6580_pp2_iter37_reg.read().is_01() || !ap_const_lv7_14.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln57_1_reg_6580_pp2_iter37_reg.read()) < sc_bigint<7>(ap_const_lv7_14));
}

void matrix_mult::thread_icmp_ln57_4_fu_4474_p2() {
    icmp_ln57_4_fu_4474_p2 = (!m_reg_6568.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(m_reg_6568.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln57_fu_4645_p2() {
    icmp_ln57_fu_4645_p2 = (!sub_ln57_reg_6555_pp2_iter37_reg.read().is_01() || !ap_const_lv7_14.is_01())? sc_lv<1>(): (sc_bigint<7>(sub_ln57_reg_6555_pp2_iter37_reg.read()) < sc_bigint<7>(ap_const_lv7_14));
}

void matrix_mult::thread_icmp_ln58_1_fu_4404_p2() {
    icmp_ln58_1_fu_4404_p2 = (!trunc_ln58_fu_4368_p1.read().is_01() || !ap_const_lv7_A.is_01())? sc_lv<1>(): (sc_biguint<7>(trunc_ln58_fu_4368_p1.read()) < sc_biguint<7>(ap_const_lv7_A));
}

void matrix_mult::thread_icmp_ln58_fu_4386_p2() {
    icmp_ln58_fu_4386_p2 = (!trunc_ln58_fu_4368_p1.read().is_01() || !ap_const_lv7_14.is_01())? sc_lv<1>(): (sc_bigint<7>(trunc_ln58_fu_4368_p1.read()) < sc_bigint<7>(ap_const_lv7_14));
}

void matrix_mult::thread_icmp_ln78_fu_4801_p2() {
    icmp_ln78_fu_4801_p2 = (!ap_phi_mux_i3_0_phi_fu_2280_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i3_0_phi_fu_2280_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln81_10_fu_5045_p2() {
    icmp_ln81_10_fu_5045_p2 = (!add_ln81_6_fu_5034_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_6_fu_5034_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_11_fu_5062_p2() {
    icmp_ln81_11_fu_5062_p2 = (!add_ln81_7_fu_5051_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_7_fu_5051_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_12_fu_5079_p2() {
    icmp_ln81_12_fu_5079_p2 = (!add_ln81_8_fu_5068_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_8_fu_5068_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_13_fu_5096_p2() {
    icmp_ln81_13_fu_5096_p2 = (!add_ln81_9_fu_5085_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_9_fu_5085_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_14_fu_5113_p2() {
    icmp_ln81_14_fu_5113_p2 = (!add_ln81_10_fu_5102_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_10_fu_5102_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_15_fu_5130_p2() {
    icmp_ln81_15_fu_5130_p2 = (!add_ln81_11_fu_5119_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_11_fu_5119_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_16_fu_5147_p2() {
    icmp_ln81_16_fu_5147_p2 = (!add_ln81_12_fu_5136_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_12_fu_5136_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_17_fu_5164_p2() {
    icmp_ln81_17_fu_5164_p2 = (!add_ln81_13_fu_5153_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_13_fu_5153_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_18_fu_5181_p2() {
    icmp_ln81_18_fu_5181_p2 = (!add_ln81_14_fu_5170_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_14_fu_5170_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_19_fu_5203_p2() {
    icmp_ln81_19_fu_5203_p2 = (!add_ln81_15_fu_5192_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_15_fu_5192_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_1_fu_5187_p2() {
    icmp_ln81_1_fu_5187_p2 = (!add_ln81_reg_6712.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_reg_6712.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_20_fu_5220_p2() {
    icmp_ln81_20_fu_5220_p2 = (!add_ln81_16_fu_5209_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_16_fu_5209_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_2_fu_4909_p2() {
    icmp_ln81_2_fu_4909_p2 = (!or_ln81_fu_4897_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln81_fu_4897_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_3_fu_4926_p2() {
    icmp_ln81_3_fu_4926_p2 = (!or_ln81_1_fu_4915_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln81_1_fu_4915_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_4_fu_4943_p2() {
    icmp_ln81_4_fu_4943_p2 = (!or_ln81_2_fu_4932_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln81_2_fu_4932_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_5_fu_4960_p2() {
    icmp_ln81_5_fu_4960_p2 = (!add_ln81_1_fu_4949_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_1_fu_4949_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_6_fu_4977_p2() {
    icmp_ln81_6_fu_4977_p2 = (!add_ln81_2_fu_4966_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_2_fu_4966_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_7_fu_4994_p2() {
    icmp_ln81_7_fu_4994_p2 = (!add_ln81_3_fu_4983_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_3_fu_4983_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_8_fu_5011_p2() {
    icmp_ln81_8_fu_5011_p2 = (!add_ln81_4_fu_5000_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_4_fu_5000_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_9_fu_5028_p2() {
    icmp_ln81_9_fu_5028_p2 = (!add_ln81_5_fu_5017_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln81_5_fu_5017_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln81_fu_4839_p2() {
    icmp_ln81_fu_4839_p2 = (!ap_phi_mux_i3_0_phi_fu_2280_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i3_0_phi_fu_2280_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_m_fu_4443_p2() {
    m_fu_4443_p2 = (!ap_const_lv5_1.is_01() || !select_ln51_fu_4436_p3.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(select_ln51_fu_4436_p3.read()));
}

void matrix_mult::thread_mul_ln10_fu_4784_p2() {
    mul_ln10_fu_4784_p2 = (!select_ln52_3_reg_6661.read().is_01() || !ap_phi_reg_pp2_iter39_b_val_reg_2263.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_3_reg_6661.read()) * sc_bigint<32>(ap_phi_reg_pp2_iter39_b_val_reg_2263.read());
}

void matrix_mult::thread_o_fu_4336_p2() {
    o_fu_4336_p2 = (!select_ln52_fu_4328_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(select_ln52_fu_4328_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_or_ln38_1_fu_2488_p2() {
    or_ln38_1_fu_2488_p2 = (add_ln38_reg_5572.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln38_2_fu_2505_p2() {
    or_ln38_2_fu_2505_p2 = (add_ln38_reg_5572.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln38_3_fu_2850_p2() {
    or_ln38_3_fu_2850_p2 = (add_ln38_18_fu_2838_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln38_4_fu_2883_p2() {
    or_ln38_4_fu_2883_p2 = (add_ln38_18_reg_5821.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln38_5_fu_2894_p2() {
    or_ln38_5_fu_2894_p2 = (add_ln38_18_reg_5821.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln38_fu_2470_p2() {
    or_ln38_fu_2470_p2 = (add_ln38_fu_2438_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln45_1_fu_3421_p2() {
    or_ln45_1_fu_3421_p2 = (add_ln45_reg_6032.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln45_2_fu_3438_p2() {
    or_ln45_2_fu_3438_p2 = (add_ln45_reg_6032.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln45_3_fu_3783_p2() {
    or_ln45_3_fu_3783_p2 = (add_ln45_18_fu_3771_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln45_4_fu_3816_p2() {
    or_ln45_4_fu_3816_p2 = (add_ln45_18_reg_6281.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln45_5_fu_3827_p2() {
    or_ln45_5_fu_3827_p2 = (add_ln45_18_reg_6281.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln45_fu_3403_p2() {
    or_ln45_fu_3403_p2 = (add_ln45_fu_3371_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln51_fu_4671_p2() {
    or_ln51_fu_4671_p2 = (icmp_ln52_reg_6498_pp2_iter37_reg.read() | icmp_ln57_1_reg_6562_pp2_iter37_reg.read());
}

void matrix_mult::thread_or_ln52_fu_4322_p2() {
    or_ln52_fu_4322_p2 = (and_ln51_fu_4316_p2.read() | icmp_ln52_fu_4290_p2.read());
}

void matrix_mult::thread_or_ln81_1_fu_4915_p2() {
    or_ln81_1_fu_4915_p2 = (add_ln81_reg_6712.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln81_2_fu_4932_p2() {
    or_ln81_2_fu_4932_p2 = (add_ln81_reg_6712.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln81_3_fu_5226_p2() {
    or_ln81_3_fu_5226_p2 = (add_ln81_18_reg_6742.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln81_4_fu_5243_p2() {
    or_ln81_4_fu_5243_p2 = (add_ln81_18_reg_6742_pp3_iter1_reg.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln81_5_fu_5254_p2() {
    or_ln81_5_fu_5254_p2 = (add_ln81_18_reg_6742_pp3_iter1_reg.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln81_fu_4897_p2() {
    or_ln81_fu_4897_p2 = (add_ln81_fu_4833_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_select_ln20_fu_2339_p3() {
    select_ln20_fu_2339_p3 = (!icmp_ln20_2_fu_2327_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln20_2_fu_2327_p2.read()[0].to_bool())? phi_ln20_reg_2161.read(): add_ln20_2_fu_2333_p2.read());
}

void matrix_mult::thread_select_ln38_10_fu_3113_p3() {
    select_ln38_10_fu_3113_p3 = (!icmp_ln38_11_reg_5701_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_11_reg_5701_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_11_fu_3122_p3() {
    select_ln38_11_fu_3122_p3 = (!icmp_ln38_12_reg_5711_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_12_reg_5711_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_12_fu_3165_p3() {
    select_ln38_12_fu_3165_p3 = (!icmp_ln38_13_reg_5721_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_13_reg_5721_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_13_fu_3174_p3() {
    select_ln38_13_fu_3174_p3 = (!icmp_ln38_14_reg_5731_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_14_reg_5731_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_14_fu_3217_p3() {
    select_ln38_14_fu_3217_p3 = (!icmp_ln38_15_reg_5741_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_15_reg_5741_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_15_fu_3226_p3() {
    select_ln38_15_fu_3226_p3 = (!icmp_ln38_16_reg_5751_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_16_reg_5751_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_16_fu_3269_p3() {
    select_ln38_16_fu_3269_p3 = (!icmp_ln38_17_reg_5761_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_17_reg_5761_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_17_fu_3278_p3() {
    select_ln38_17_fu_3278_p3 = (!icmp_ln38_18_reg_5771_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_18_reg_5771_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_18_fu_3321_p3() {
    select_ln38_18_fu_3321_p3 = (!icmp_ln38_19_reg_5786_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_19_reg_5786_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_19_fu_3330_p3() {
    select_ln38_19_fu_3330_p3 = (!icmp_ln38_20_reg_5796_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_20_reg_5796_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_1_fu_2862_p3() {
    select_ln38_1_fu_2862_p3 = (!icmp_ln38_2_reg_5611_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_2_reg_5611_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_20_fu_2462_p3() {
    select_ln38_20_fu_2462_p3 = (!icmp_ln38_1_fu_2450_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln38_1_fu_2450_p2.read()[0].to_bool())? ap_phi_mux_i_0_phi_fu_2188_p4.read(): add_ln38_17_fu_2456_p2.read());
}

void matrix_mult::thread_select_ln38_2_fu_2905_p3() {
    select_ln38_2_fu_2905_p3 = (!icmp_ln38_3_reg_5621_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_3_reg_5621_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_3_fu_2914_p3() {
    select_ln38_3_fu_2914_p3 = (!icmp_ln38_4_reg_5631_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_4_reg_5631_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_4_fu_2957_p3() {
    select_ln38_4_fu_2957_p3 = (!icmp_ln38_5_reg_5641_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_5_reg_5641_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_5_fu_2966_p3() {
    select_ln38_5_fu_2966_p3 = (!icmp_ln38_6_reg_5651_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_6_reg_5651_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_6_fu_3009_p3() {
    select_ln38_6_fu_3009_p3 = (!icmp_ln38_7_reg_5661_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_7_reg_5661_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_7_fu_3018_p3() {
    select_ln38_7_fu_3018_p3 = (!icmp_ln38_8_reg_5671_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_8_reg_5671_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_8_fu_3061_p3() {
    select_ln38_8_fu_3061_p3 = (!icmp_ln38_9_reg_5681_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_9_reg_5681_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln38_9_fu_3070_p3() {
    select_ln38_9_fu_3070_p3 = (!icmp_ln38_10_reg_5691_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_10_reg_5691_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln38_fu_2811_p3() {
    select_ln38_fu_2811_p3 = (!icmp_ln38_reg_5776.read()[0].is_01())? sc_lv<32>(): ((icmp_ln38_reg_5776.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln45_10_fu_4046_p3() {
    select_ln45_10_fu_4046_p3 = (!icmp_ln45_11_reg_6161_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_11_reg_6161_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_11_fu_4055_p3() {
    select_ln45_11_fu_4055_p3 = (!icmp_ln45_12_reg_6171_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_12_reg_6171_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_12_fu_4098_p3() {
    select_ln45_12_fu_4098_p3 = (!icmp_ln45_13_reg_6181_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_13_reg_6181_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_13_fu_4107_p3() {
    select_ln45_13_fu_4107_p3 = (!icmp_ln45_14_reg_6191_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_14_reg_6191_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_14_fu_4150_p3() {
    select_ln45_14_fu_4150_p3 = (!icmp_ln45_15_reg_6201_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_15_reg_6201_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_15_fu_4159_p3() {
    select_ln45_15_fu_4159_p3 = (!icmp_ln45_16_reg_6211_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_16_reg_6211_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_16_fu_4202_p3() {
    select_ln45_16_fu_4202_p3 = (!icmp_ln45_17_reg_6221_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_17_reg_6221_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_17_fu_4211_p3() {
    select_ln45_17_fu_4211_p3 = (!icmp_ln45_18_reg_6231_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_18_reg_6231_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_18_fu_4254_p3() {
    select_ln45_18_fu_4254_p3 = (!icmp_ln45_19_reg_6246_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_19_reg_6246_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_19_fu_4263_p3() {
    select_ln45_19_fu_4263_p3 = (!icmp_ln45_20_reg_6256_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_20_reg_6256_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_1_fu_3795_p3() {
    select_ln45_1_fu_3795_p3 = (!icmp_ln45_2_reg_6071_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_2_reg_6071_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_20_fu_3395_p3() {
    select_ln45_20_fu_3395_p3 = (!icmp_ln45_1_fu_3383_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln45_1_fu_3383_p2.read()[0].to_bool())? ap_phi_mux_i1_0_phi_fu_2199_p4.read(): add_ln45_17_fu_3389_p2.read());
}

void matrix_mult::thread_select_ln45_2_fu_3838_p3() {
    select_ln45_2_fu_3838_p3 = (!icmp_ln45_3_reg_6081_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_3_reg_6081_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_3_fu_3847_p3() {
    select_ln45_3_fu_3847_p3 = (!icmp_ln45_4_reg_6091_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_4_reg_6091_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_4_fu_3890_p3() {
    select_ln45_4_fu_3890_p3 = (!icmp_ln45_5_reg_6101_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_5_reg_6101_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_5_fu_3899_p3() {
    select_ln45_5_fu_3899_p3 = (!icmp_ln45_6_reg_6111_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_6_reg_6111_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_6_fu_3942_p3() {
    select_ln45_6_fu_3942_p3 = (!icmp_ln45_7_reg_6121_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_7_reg_6121_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_7_fu_3951_p3() {
    select_ln45_7_fu_3951_p3 = (!icmp_ln45_8_reg_6131_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_8_reg_6131_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_8_fu_3994_p3() {
    select_ln45_8_fu_3994_p3 = (!icmp_ln45_9_reg_6141_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_9_reg_6141_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln45_9_fu_4003_p3() {
    select_ln45_9_fu_4003_p3 = (!icmp_ln45_10_reg_6151_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_10_reg_6151_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln45_fu_3744_p3() {
    select_ln45_fu_3744_p3 = (!icmp_ln45_reg_6236.read()[0].is_01())? sc_lv<32>(): ((icmp_ln45_reg_6236.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln51_1_fu_4296_p3() {
    select_ln51_1_fu_4296_p3 = (!icmp_ln52_fu_4290_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln52_fu_4290_p2.read()[0].to_bool())? step_fu_4284_p2.read(): ap_phi_mux_step_0_phi_fu_2221_p4.read());
}

void matrix_mult::thread_select_ln51_2_fu_4488_p3() {
    select_ln51_2_fu_4488_p3 = (!icmp_ln52_reg_6498_pp2_iter35_reg.read()[0].is_01())? sc_lv<4>(): ((icmp_ln52_reg_6498_pp2_iter35_reg.read()[0].to_bool())? ap_const_lv4_0: trunc_ln57_fu_4479_p1.read());
}

void matrix_mult::thread_select_ln51_3_fu_4682_p3() {
    select_ln51_3_fu_4682_p3 = (!icmp_ln52_reg_6498_pp2_iter37_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_reg_6498_pp2_iter37_reg.read()[0].to_bool())? select_ln57_2_fu_4675_p3.read(): a_val_fu_4663_p3.read());
}

void matrix_mult::thread_select_ln51_fu_4436_p3() {
    select_ln51_fu_4436_p3 = (!icmp_ln52_reg_6498_pp2_iter27_reg.read()[0].is_01())? sc_lv<5>(): ((icmp_ln52_reg_6498_pp2_iter27_reg.read()[0].to_bool())? ap_const_lv5_0: ap_phi_mux_m_0_phi_fu_2255_p4.read());
}

void matrix_mult::thread_select_ln52_1_fu_4499_p3() {
    select_ln52_1_fu_4499_p3 = (!and_ln51_reg_6517_pp2_iter35_reg.read()[0].is_01())? sc_lv<4>(): ((and_ln51_reg_6517_pp2_iter35_reg.read()[0].to_bool())? trunc_ln57_1_fu_4495_p1.read(): select_ln51_2_fu_4488_p3.read());
}

void matrix_mult::thread_select_ln52_2_fu_4741_p3() {
    select_ln52_2_fu_4741_p3 = (!and_ln51_reg_6517_pp2_iter37_reg.read()[0].is_01())? sc_lv<1>(): ((and_ln51_reg_6517_pp2_iter37_reg.read()[0].to_bool())? icmp_ln57_4_reg_6587_pp2_iter37_reg.read(): or_ln51_fu_4671_p2.read());
}

void matrix_mult::thread_select_ln52_3_fu_4762_p3() {
    select_ln52_3_fu_4762_p3 = (!and_ln51_reg_6517_pp2_iter37_reg.read()[0].is_01())? sc_lv<32>(): ((and_ln51_reg_6517_pp2_iter37_reg.read()[0].to_bool())? select_ln57_4_fu_4754_p3.read(): select_ln51_3_fu_4682_p3.read());
}

void matrix_mult::thread_select_ln52_4_fu_4455_p3() {
    select_ln52_4_fu_4455_p3 = (!and_ln51_reg_6517_pp2_iter27_reg.read()[0].is_01())? sc_lv<5>(): ((and_ln51_reg_6517_pp2_iter27_reg.read()[0].to_bool())? m_fu_4443_p2.read(): select_ln51_fu_4436_p3.read());
}

void matrix_mult::thread_select_ln52_5_fu_4348_p3() {
    select_ln52_5_fu_4348_p3 = (!icmp_ln52_fu_4290_p2.read()[0].is_01())? sc_lv<10>(): ((icmp_ln52_fu_4290_p2.read()[0].to_bool())? ap_const_lv10_1: add_ln52_1_fu_4342_p2.read());
}

void matrix_mult::thread_select_ln52_fu_4328_p3() {
    select_ln52_fu_4328_p3 = (!or_ln52_fu_4322_p2.read()[0].is_01())? sc_lv<5>(): ((or_ln52_fu_4322_p2.read()[0].to_bool())? ap_const_lv5_0: o_0_reg_2240.read());
}

void matrix_mult::thread_select_ln57_2_fu_4675_p3() {
    select_ln57_2_fu_4675_p3 = (!icmp_ln57_2_reg_6599_pp2_iter37_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln57_2_reg_6599_pp2_iter37_reg.read()[0].to_bool())? a_buff_0_q0.read(): ap_const_lv32_0);
}

void matrix_mult::thread_select_ln57_3_fu_4747_p3() {
    select_ln57_3_fu_4747_p3 = (!icmp_ln57_4_reg_6587_pp2_iter37_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln57_4_reg_6587_pp2_iter37_reg.read()[0].to_bool())? a_buff_0_q0.read(): a_buff_1_q0.read());
}

void matrix_mult::thread_select_ln57_4_fu_4754_p3() {
    select_ln57_4_fu_4754_p3 = (!and_ln57_1_fu_4707_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln57_1_fu_4707_p2.read()[0].to_bool())? select_ln57_3_fu_4747_p3.read(): ap_const_lv32_0);
}

void matrix_mult::thread_select_ln57_fu_4656_p3() {
    select_ln57_fu_4656_p3 = (!icmp_ln57_1_reg_6562_pp2_iter37_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln57_1_reg_6562_pp2_iter37_reg.read()[0].to_bool())? a_buff_0_q0.read(): a_buff_1_q0.read());
}

void matrix_mult::thread_select_ln59_fu_4789_p3() {
    select_ln59_fu_4789_p3 = (!select_ln52_2_reg_6656_pp2_iter39_reg.read()[0].is_01())? sc_lv<32>(): ((select_ln52_2_reg_6656_pp2_iter39_reg.read()[0].to_bool())? c_buff_0_load_3_reg_6688.read(): c_buff_1_load_3_reg_6693.read());
}

void matrix_mult::thread_select_ln81_20_fu_4851_p3() {
    select_ln81_20_fu_4851_p3 = (!icmp_ln81_fu_4839_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln81_fu_4839_p2.read()[0].to_bool())? ap_phi_mux_i3_0_phi_fu_2280_p4.read(): add_ln81_17_fu_4845_p2.read());
}

void matrix_mult::thread_sext_ln38_10_fu_3200_p1() {
    sext_ln38_10_fu_3200_p1 = esl_sext<64,9>(add_ln38_29_fu_3195_p2.read());
}

void matrix_mult::thread_sext_ln38_11_fu_3211_p1() {
    sext_ln38_11_fu_3211_p1 = esl_sext<64,9>(add_ln38_30_fu_3206_p2.read());
}

void matrix_mult::thread_sext_ln38_12_fu_3252_p1() {
    sext_ln38_12_fu_3252_p1 = esl_sext<64,9>(add_ln38_31_fu_3247_p2.read());
}

void matrix_mult::thread_sext_ln38_13_fu_3263_p1() {
    sext_ln38_13_fu_3263_p1 = esl_sext<64,9>(add_ln38_32_fu_3258_p2.read());
}

void matrix_mult::thread_sext_ln38_14_fu_3304_p1() {
    sext_ln38_14_fu_3304_p1 = esl_sext<64,9>(add_ln38_33_fu_3299_p2.read());
}

void matrix_mult::thread_sext_ln38_15_fu_3315_p1() {
    sext_ln38_15_fu_3315_p1 = esl_sext<64,9>(add_ln38_34_fu_3310_p2.read());
}

void matrix_mult::thread_sext_ln38_1_fu_2951_p1() {
    sext_ln38_1_fu_2951_p1 = esl_sext<64,9>(add_ln38_20_fu_2946_p2.read());
}

void matrix_mult::thread_sext_ln38_2_fu_2992_p1() {
    sext_ln38_2_fu_2992_p1 = esl_sext<64,9>(add_ln38_21_fu_2987_p2.read());
}

void matrix_mult::thread_sext_ln38_3_fu_3003_p1() {
    sext_ln38_3_fu_3003_p1 = esl_sext<64,9>(add_ln38_22_fu_2998_p2.read());
}

void matrix_mult::thread_sext_ln38_4_fu_3044_p1() {
    sext_ln38_4_fu_3044_p1 = esl_sext<64,9>(add_ln38_23_fu_3039_p2.read());
}

void matrix_mult::thread_sext_ln38_5_fu_3055_p1() {
    sext_ln38_5_fu_3055_p1 = esl_sext<64,9>(add_ln38_24_fu_3050_p2.read());
}

void matrix_mult::thread_sext_ln38_6_fu_3096_p1() {
    sext_ln38_6_fu_3096_p1 = esl_sext<64,9>(add_ln38_25_fu_3091_p2.read());
}

void matrix_mult::thread_sext_ln38_7_fu_3107_p1() {
    sext_ln38_7_fu_3107_p1 = esl_sext<64,9>(add_ln38_26_fu_3102_p2.read());
}

void matrix_mult::thread_sext_ln38_8_fu_3148_p1() {
    sext_ln38_8_fu_3148_p1 = esl_sext<64,9>(add_ln38_27_fu_3143_p2.read());
}

void matrix_mult::thread_sext_ln38_9_fu_3159_p1() {
    sext_ln38_9_fu_3159_p1 = esl_sext<64,9>(add_ln38_28_fu_3154_p2.read());
}

void matrix_mult::thread_sext_ln38_fu_2940_p1() {
    sext_ln38_fu_2940_p1 = esl_sext<64,9>(add_ln38_19_fu_2935_p2.read());
}

void matrix_mult::thread_sext_ln45_10_fu_4133_p1() {
    sext_ln45_10_fu_4133_p1 = esl_sext<64,9>(add_ln45_29_fu_4128_p2.read());
}

void matrix_mult::thread_sext_ln45_11_fu_4144_p1() {
    sext_ln45_11_fu_4144_p1 = esl_sext<64,9>(add_ln45_30_fu_4139_p2.read());
}

void matrix_mult::thread_sext_ln45_12_fu_4185_p1() {
    sext_ln45_12_fu_4185_p1 = esl_sext<64,9>(add_ln45_31_fu_4180_p2.read());
}

void matrix_mult::thread_sext_ln45_13_fu_4196_p1() {
    sext_ln45_13_fu_4196_p1 = esl_sext<64,9>(add_ln45_32_fu_4191_p2.read());
}

void matrix_mult::thread_sext_ln45_14_fu_4237_p1() {
    sext_ln45_14_fu_4237_p1 = esl_sext<64,9>(add_ln45_33_fu_4232_p2.read());
}

void matrix_mult::thread_sext_ln45_15_fu_4248_p1() {
    sext_ln45_15_fu_4248_p1 = esl_sext<64,9>(add_ln45_34_fu_4243_p2.read());
}

void matrix_mult::thread_sext_ln45_1_fu_3884_p1() {
    sext_ln45_1_fu_3884_p1 = esl_sext<64,9>(add_ln45_20_fu_3879_p2.read());
}

void matrix_mult::thread_sext_ln45_2_fu_3925_p1() {
    sext_ln45_2_fu_3925_p1 = esl_sext<64,9>(add_ln45_21_fu_3920_p2.read());
}

void matrix_mult::thread_sext_ln45_3_fu_3936_p1() {
    sext_ln45_3_fu_3936_p1 = esl_sext<64,9>(add_ln45_22_fu_3931_p2.read());
}

void matrix_mult::thread_sext_ln45_4_fu_3977_p1() {
    sext_ln45_4_fu_3977_p1 = esl_sext<64,9>(add_ln45_23_fu_3972_p2.read());
}

void matrix_mult::thread_sext_ln45_5_fu_3988_p1() {
    sext_ln45_5_fu_3988_p1 = esl_sext<64,9>(add_ln45_24_fu_3983_p2.read());
}

void matrix_mult::thread_sext_ln45_6_fu_4029_p1() {
    sext_ln45_6_fu_4029_p1 = esl_sext<64,9>(add_ln45_25_fu_4024_p2.read());
}

void matrix_mult::thread_sext_ln45_7_fu_4040_p1() {
    sext_ln45_7_fu_4040_p1 = esl_sext<64,9>(add_ln45_26_fu_4035_p2.read());
}

void matrix_mult::thread_sext_ln45_8_fu_4081_p1() {
    sext_ln45_8_fu_4081_p1 = esl_sext<64,9>(add_ln45_27_fu_4076_p2.read());
}

void matrix_mult::thread_sext_ln45_9_fu_4092_p1() {
    sext_ln45_9_fu_4092_p1 = esl_sext<64,9>(add_ln45_28_fu_4087_p2.read());
}

void matrix_mult::thread_sext_ln45_fu_3873_p1() {
    sext_ln45_fu_3873_p1 = esl_sext<64,9>(add_ln45_19_fu_3868_p2.read());
}

void matrix_mult::thread_sext_ln57_1_fu_4578_p1() {
    sext_ln57_1_fu_4578_p1 = esl_sext<64,9>(add_ln57_1_fu_4572_p2.read());
}

void matrix_mult::thread_sext_ln57_2_fu_4588_p1() {
    sext_ln57_2_fu_4588_p1 = esl_sext<9,7>(sub_ln57_1_reg_6580_pp2_iter36_reg.read());
}

void matrix_mult::thread_sext_ln57_3_fu_4621_p1() {
    sext_ln57_3_fu_4621_p1 = esl_sext<64,9>(add_ln57_3_fu_4615_p2.read());
}

void matrix_mult::thread_sext_ln57_fu_4545_p1() {
    sext_ln57_fu_4545_p1 = esl_sext<9,7>(sub_ln57_reg_6555_pp2_iter36_reg.read());
}

void matrix_mult::thread_sext_ln81_10_fu_5425_p1() {
    sext_ln81_10_fu_5425_p1 = esl_sext<64,9>(add_ln81_29_fu_5420_p2.read());
}

void matrix_mult::thread_sext_ln81_11_fu_5436_p1() {
    sext_ln81_11_fu_5436_p1 = esl_sext<64,9>(add_ln81_30_fu_5431_p2.read());
}

void matrix_mult::thread_sext_ln81_12_fu_5457_p1() {
    sext_ln81_12_fu_5457_p1 = esl_sext<64,9>(add_ln81_31_fu_5452_p2.read());
}

void matrix_mult::thread_sext_ln81_13_fu_5468_p1() {
    sext_ln81_13_fu_5468_p1 = esl_sext<64,9>(add_ln81_32_fu_5463_p2.read());
}

void matrix_mult::thread_sext_ln81_14_fu_5489_p1() {
    sext_ln81_14_fu_5489_p1 = esl_sext<64,9>(add_ln81_33_fu_5484_p2.read());
}

void matrix_mult::thread_sext_ln81_15_fu_5500_p1() {
    sext_ln81_15_fu_5500_p1 = esl_sext<64,9>(add_ln81_34_fu_5495_p2.read());
}

void matrix_mult::thread_sext_ln81_1_fu_5286_p1() {
    sext_ln81_1_fu_5286_p1 = esl_sext<64,9>(add_ln81_20_fu_5281_p2.read());
}

void matrix_mult::thread_sext_ln81_2_fu_5302_p1() {
    sext_ln81_2_fu_5302_p1 = esl_sext<64,9>(add_ln81_21_fu_5297_p2.read());
}

void matrix_mult::thread_sext_ln81_3_fu_5313_p1() {
    sext_ln81_3_fu_5313_p1 = esl_sext<64,9>(add_ln81_22_fu_5308_p2.read());
}

void matrix_mult::thread_sext_ln81_4_fu_5329_p1() {
    sext_ln81_4_fu_5329_p1 = esl_sext<64,9>(add_ln81_23_fu_5324_p2.read());
}

void matrix_mult::thread_sext_ln81_5_fu_5340_p1() {
    sext_ln81_5_fu_5340_p1 = esl_sext<64,9>(add_ln81_24_fu_5335_p2.read());
}

void matrix_mult::thread_sext_ln81_6_fu_5361_p1() {
    sext_ln81_6_fu_5361_p1 = esl_sext<64,9>(add_ln81_25_fu_5356_p2.read());
}

void matrix_mult::thread_sext_ln81_7_fu_5372_p1() {
    sext_ln81_7_fu_5372_p1 = esl_sext<64,9>(add_ln81_26_fu_5367_p2.read());
}

void matrix_mult::thread_sext_ln81_8_fu_5393_p1() {
    sext_ln81_8_fu_5393_p1 = esl_sext<64,9>(add_ln81_27_fu_5388_p2.read());
}

void matrix_mult::thread_sext_ln81_9_fu_5404_p1() {
    sext_ln81_9_fu_5404_p1 = esl_sext<64,9>(add_ln81_28_fu_5399_p2.read());
}

void matrix_mult::thread_sext_ln81_fu_5275_p1() {
    sext_ln81_fu_5275_p1 = esl_sext<64,9>(add_ln81_19_fu_5270_p2.read());
}

void matrix_mult::thread_shl_ln1_fu_3351_p3() {
    shl_ln1_fu_3351_p3 = esl_concat<5,4>(ap_phi_mux_i1_0_phi_fu_2199_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln2_fu_4813_p3() {
    shl_ln2_fu_4813_p3 = esl_concat<5,4>(ap_phi_mux_i3_0_phi_fu_2280_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln38_1_fu_2426_p3() {
    shl_ln38_1_fu_2426_p3 = esl_concat<5,2>(ap_phi_mux_i_0_phi_fu_2188_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln45_1_fu_3359_p3() {
    shl_ln45_1_fu_3359_p3 = esl_concat<5,2>(ap_phi_mux_i1_0_phi_fu_2199_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln81_1_fu_4821_p3() {
    shl_ln81_1_fu_4821_p3 = esl_concat<5,2>(ap_phi_mux_i3_0_phi_fu_2280_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln_fu_2418_p3() {
    shl_ln_fu_2418_p3 = esl_concat<5,4>(ap_phi_mux_i_0_phi_fu_2188_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_step_fu_4284_p2() {
    step_fu_4284_p2 = (!ap_const_lv6_1.is_01() || !ap_phi_mux_step_0_phi_fu_2221_p4.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(ap_phi_mux_step_0_phi_fu_2221_p4.read()));
}

void matrix_mult::thread_sub_ln57_1_fu_4468_p2() {
    sub_ln57_1_fu_4468_p2 = (!zext_ln51_2_fu_4462_p1.read().is_01() || !zext_ln52_1_fu_4465_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln51_2_fu_4462_p1.read()) - sc_biguint<7>(zext_ln52_1_fu_4465_p1.read()));
}

void matrix_mult::thread_sub_ln57_fu_4418_p2() {
    sub_ln57_fu_4418_p2 = (!zext_ln51_fu_4410_p1.read().is_01() || !zext_ln52_fu_4414_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln51_fu_4410_p1.read()) - sc_biguint<7>(zext_ln52_fu_4414_p1.read()));
}

void matrix_mult::thread_sub_ln58_fu_4362_p2() {
    sub_ln58_fu_4362_p2 = (!zext_ln51_1_fu_4356_p1.read().is_01() || !zext_ln54_fu_4359_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln51_1_fu_4356_p1.read()) - sc_biguint<32>(zext_ln54_fu_4359_p1.read()));
}

void matrix_mult::thread_tmp_10_fu_4555_p3() {
    tmp_10_fu_4555_p3 = esl_concat<5,2>(urem_ln57_reg_6593.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_11_fu_4591_p3() {
    tmp_11_fu_4591_p3 = esl_concat<5,4>(urem_ln57_1_reg_6604.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_12_fu_4598_p3() {
    tmp_12_fu_4598_p3 = esl_concat<5,2>(urem_ln57_1_reg_6604.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_13_fu_4859_p3() {
    tmp_13_fu_4859_p3 = esl_concat<5,4>(select_ln81_20_fu_4851_p3.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_14_fu_4632_p3() {
    tmp_14_fu_4632_p3 = sub_ln57_reg_6555_pp2_iter37_reg.read().range(6, 6);
}

void matrix_mult::thread_tmp_15_fu_4689_p3() {
    tmp_15_fu_4689_p3 = sub_ln57_1_reg_6580_pp2_iter37_reg.read().range(6, 6);
}

void matrix_mult::thread_tmp_16_fu_4713_p3() {
    tmp_16_fu_4713_p3 = esl_concat<4,4>(select_ln52_1_reg_6610_pp2_iter37_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_17_fu_4724_p3() {
    tmp_17_fu_4724_p3 = esl_concat<4,2>(select_ln52_1_reg_6610_pp2_iter37_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_18_fu_4867_p3() {
    tmp_18_fu_4867_p3 = esl_concat<5,2>(select_ln81_20_fu_4851_p3.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_20_fu_4372_p3() {
    tmp_20_fu_4372_p3 = sub_ln58_fu_4362_p2.read().range(6, 6);
}

void matrix_mult::thread_tmp_5_fu_2355_p3() {
    tmp_5_fu_2355_p3 = esl_concat<5,2>(select_ln20_fu_2339_p3.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_6_fu_2820_p3() {
    tmp_6_fu_2820_p3 = esl_concat<5,4>(select_ln38_20_reg_5600_pp0_iter1_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_7_fu_2827_p3() {
    tmp_7_fu_2827_p3 = esl_concat<5,2>(select_ln38_20_reg_5600_pp0_iter1_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_8_fu_3753_p3() {
    tmp_8_fu_3753_p3 = esl_concat<5,4>(select_ln45_20_reg_6060_pp1_iter1_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_9_fu_3760_p3() {
    tmp_9_fu_3760_p3 = esl_concat<5,2>(select_ln45_20_reg_6060_pp1_iter1_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_fu_2347_p3() {
    tmp_fu_2347_p3 = esl_concat<5,4>(select_ln20_fu_2339_p3.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_s_fu_4548_p3() {
    tmp_s_fu_4548_p3 = esl_concat<5,4>(urem_ln57_reg_6593.read(), ap_const_lv4_0);
}

void matrix_mult::thread_trunc_ln57_1_fu_4495_p1() {
    trunc_ln57_1_fu_4495_p1 = grp_fu_4449_p2.read().range(4-1, 0);
}

void matrix_mult::thread_trunc_ln57_fu_4479_p1() {
    trunc_ln57_fu_4479_p1 = grp_fu_4424_p2.read().range(4-1, 0);
}

void matrix_mult::thread_trunc_ln58_1_fu_4509_p1() {
    trunc_ln58_1_fu_4509_p1 = grp_fu_4398_p2.read().range(5-1, 0);
}

void matrix_mult::thread_trunc_ln58_2_fu_4521_p1() {
    trunc_ln58_2_fu_4521_p1 = grp_fu_4398_p2.read().range(7-1, 0);
}

void matrix_mult::thread_trunc_ln58_fu_4368_p1() {
    trunc_ln58_fu_4368_p1 = sub_ln58_fu_4362_p2.read().range(7-1, 0);
}

void matrix_mult::thread_xor_ln51_fu_4304_p2() {
    xor_ln51_fu_4304_p2 = (icmp_ln52_fu_4290_p2.read() ^ ap_const_lv1_1);
}

void matrix_mult::thread_xor_ln57_1_fu_4696_p2() {
    xor_ln57_1_fu_4696_p2 = (tmp_15_fu_4689_p3.read() ^ ap_const_lv1_1);
}

void matrix_mult::thread_xor_ln57_fu_4639_p2() {
    xor_ln57_fu_4639_p2 = (tmp_14_fu_4632_p3.read() ^ ap_const_lv1_1);
}

void matrix_mult::thread_xor_ln58_fu_4380_p2() {
    xor_ln58_fu_4380_p2 = (tmp_20_fu_4372_p3.read() ^ ap_const_lv1_1);
}

void matrix_mult::thread_zext_ln20_1_fu_2379_p1() {
    zext_ln20_1_fu_2379_p1 = esl_zext<9,5>(phi_ln20_1_reg_2173.read());
}

void matrix_mult::thread_zext_ln20_2_fu_2388_p1() {
    zext_ln20_2_fu_2388_p1 = esl_zext<64,9>(add_ln20_4_fu_2383_p2.read());
}

void matrix_mult::thread_zext_ln20_fu_2363_p1() {
    zext_ln20_fu_2363_p1 = esl_zext<9,7>(tmp_5_fu_2355_p3.read());
}

void matrix_mult::thread_zext_ln38_10_fu_3033_p1() {
    zext_ln38_10_fu_3033_p1 = esl_zext<64,9>(grp_fu_2612_p2.read());
}

void matrix_mult::thread_zext_ln38_11_fu_3079_p1() {
    zext_ln38_11_fu_3079_p1 = esl_zext<64,9>(grp_fu_2629_p2.read());
}

void matrix_mult::thread_zext_ln38_12_fu_3085_p1() {
    zext_ln38_12_fu_3085_p1 = esl_zext<64,9>(grp_fu_2646_p2.read());
}

void matrix_mult::thread_zext_ln38_13_fu_3131_p1() {
    zext_ln38_13_fu_3131_p1 = esl_zext<64,9>(grp_fu_2663_p2.read());
}

void matrix_mult::thread_zext_ln38_14_fu_3137_p1() {
    zext_ln38_14_fu_3137_p1 = esl_zext<64,9>(grp_fu_2680_p2.read());
}

void matrix_mult::thread_zext_ln38_15_fu_3183_p1() {
    zext_ln38_15_fu_3183_p1 = esl_zext<64,9>(grp_fu_2697_p2.read());
}

void matrix_mult::thread_zext_ln38_16_fu_3189_p1() {
    zext_ln38_16_fu_3189_p1 = esl_zext<64,9>(grp_fu_2714_p2.read());
}

void matrix_mult::thread_zext_ln38_17_fu_3235_p1() {
    zext_ln38_17_fu_3235_p1 = esl_zext<64,9>(grp_fu_2731_p2.read());
}

void matrix_mult::thread_zext_ln38_18_fu_3241_p1() {
    zext_ln38_18_fu_3241_p1 = esl_zext<64,9>(grp_fu_2748_p2.read());
}

void matrix_mult::thread_zext_ln38_19_fu_3287_p1() {
    zext_ln38_19_fu_3287_p1 = esl_zext<64,9>(grp_fu_2770_p2.read());
}

void matrix_mult::thread_zext_ln38_1_fu_2434_p1() {
    zext_ln38_1_fu_2434_p1 = esl_zext<9,7>(shl_ln38_1_fu_2426_p3.read());
}

void matrix_mult::thread_zext_ln38_20_fu_3293_p1() {
    zext_ln38_20_fu_3293_p1 = esl_zext<64,9>(grp_fu_2787_p2.read());
}

void matrix_mult::thread_zext_ln38_21_fu_2834_p1() {
    zext_ln38_21_fu_2834_p1 = esl_zext<9,7>(tmp_7_fu_2827_p3.read());
}

void matrix_mult::thread_zext_ln38_22_fu_2844_p1() {
    zext_ln38_22_fu_2844_p1 = esl_zext<64,9>(add_ln38_18_fu_2838_p2.read());
}

void matrix_mult::thread_zext_ln38_23_fu_2856_p1() {
    zext_ln38_23_fu_2856_p1 = esl_zext<64,9>(or_ln38_3_fu_2850_p2.read());
}

void matrix_mult::thread_zext_ln38_24_fu_2888_p1() {
    zext_ln38_24_fu_2888_p1 = esl_zext<64,9>(or_ln38_4_fu_2883_p2.read());
}

void matrix_mult::thread_zext_ln38_25_fu_2899_p1() {
    zext_ln38_25_fu_2899_p1 = esl_zext<64,9>(or_ln38_5_fu_2894_p2.read());
}

void matrix_mult::thread_zext_ln38_2_fu_2805_p1() {
    zext_ln38_2_fu_2805_p1 = esl_zext<64,9>(grp_fu_2476_p2.read());
}

void matrix_mult::thread_zext_ln38_3_fu_2871_p1() {
    zext_ln38_3_fu_2871_p1 = esl_zext<64,9>(grp_fu_2493_p2.read());
}

void matrix_mult::thread_zext_ln38_4_fu_2877_p1() {
    zext_ln38_4_fu_2877_p1 = esl_zext<64,9>(grp_fu_2510_p2.read());
}

void matrix_mult::thread_zext_ln38_5_fu_2923_p1() {
    zext_ln38_5_fu_2923_p1 = esl_zext<64,9>(grp_fu_2527_p2.read());
}

void matrix_mult::thread_zext_ln38_6_fu_2929_p1() {
    zext_ln38_6_fu_2929_p1 = esl_zext<64,9>(grp_fu_2544_p2.read());
}

void matrix_mult::thread_zext_ln38_7_fu_2975_p1() {
    zext_ln38_7_fu_2975_p1 = esl_zext<64,9>(grp_fu_2561_p2.read());
}

void matrix_mult::thread_zext_ln38_8_fu_2981_p1() {
    zext_ln38_8_fu_2981_p1 = esl_zext<64,9>(grp_fu_2578_p2.read());
}

void matrix_mult::thread_zext_ln38_9_fu_3027_p1() {
    zext_ln38_9_fu_3027_p1 = esl_zext<64,9>(grp_fu_2595_p2.read());
}

void matrix_mult::thread_zext_ln38_fu_2799_p1() {
    zext_ln38_fu_2799_p1 = esl_zext<64,9>(grp_fu_2444_p2.read());
}

void matrix_mult::thread_zext_ln45_10_fu_3966_p1() {
    zext_ln45_10_fu_3966_p1 = esl_zext<64,9>(grp_fu_3545_p2.read());
}

void matrix_mult::thread_zext_ln45_11_fu_4012_p1() {
    zext_ln45_11_fu_4012_p1 = esl_zext<64,9>(grp_fu_3562_p2.read());
}

void matrix_mult::thread_zext_ln45_12_fu_4018_p1() {
    zext_ln45_12_fu_4018_p1 = esl_zext<64,9>(grp_fu_3579_p2.read());
}

void matrix_mult::thread_zext_ln45_13_fu_4064_p1() {
    zext_ln45_13_fu_4064_p1 = esl_zext<64,9>(grp_fu_3596_p2.read());
}

void matrix_mult::thread_zext_ln45_14_fu_4070_p1() {
    zext_ln45_14_fu_4070_p1 = esl_zext<64,9>(grp_fu_3613_p2.read());
}

void matrix_mult::thread_zext_ln45_15_fu_4116_p1() {
    zext_ln45_15_fu_4116_p1 = esl_zext<64,9>(grp_fu_3630_p2.read());
}

void matrix_mult::thread_zext_ln45_16_fu_4122_p1() {
    zext_ln45_16_fu_4122_p1 = esl_zext<64,9>(grp_fu_3647_p2.read());
}

void matrix_mult::thread_zext_ln45_17_fu_4168_p1() {
    zext_ln45_17_fu_4168_p1 = esl_zext<64,9>(grp_fu_3664_p2.read());
}

void matrix_mult::thread_zext_ln45_18_fu_4174_p1() {
    zext_ln45_18_fu_4174_p1 = esl_zext<64,9>(grp_fu_3681_p2.read());
}

void matrix_mult::thread_zext_ln45_19_fu_4220_p1() {
    zext_ln45_19_fu_4220_p1 = esl_zext<64,9>(grp_fu_3703_p2.read());
}

void matrix_mult::thread_zext_ln45_1_fu_3367_p1() {
    zext_ln45_1_fu_3367_p1 = esl_zext<9,7>(shl_ln45_1_fu_3359_p3.read());
}

void matrix_mult::thread_zext_ln45_20_fu_4226_p1() {
    zext_ln45_20_fu_4226_p1 = esl_zext<64,9>(grp_fu_3720_p2.read());
}

void matrix_mult::thread_zext_ln45_21_fu_3767_p1() {
    zext_ln45_21_fu_3767_p1 = esl_zext<9,7>(tmp_9_fu_3760_p3.read());
}

void matrix_mult::thread_zext_ln45_22_fu_3777_p1() {
    zext_ln45_22_fu_3777_p1 = esl_zext<64,9>(add_ln45_18_fu_3771_p2.read());
}

void matrix_mult::thread_zext_ln45_23_fu_3789_p1() {
    zext_ln45_23_fu_3789_p1 = esl_zext<64,9>(or_ln45_3_fu_3783_p2.read());
}

void matrix_mult::thread_zext_ln45_24_fu_3821_p1() {
    zext_ln45_24_fu_3821_p1 = esl_zext<64,9>(or_ln45_4_fu_3816_p2.read());
}

void matrix_mult::thread_zext_ln45_25_fu_3832_p1() {
    zext_ln45_25_fu_3832_p1 = esl_zext<64,9>(or_ln45_5_fu_3827_p2.read());
}

void matrix_mult::thread_zext_ln45_2_fu_3738_p1() {
    zext_ln45_2_fu_3738_p1 = esl_zext<64,9>(grp_fu_3409_p2.read());
}

void matrix_mult::thread_zext_ln45_3_fu_3804_p1() {
    zext_ln45_3_fu_3804_p1 = esl_zext<64,9>(grp_fu_3426_p2.read());
}

void matrix_mult::thread_zext_ln45_4_fu_3810_p1() {
    zext_ln45_4_fu_3810_p1 = esl_zext<64,9>(grp_fu_3443_p2.read());
}

void matrix_mult::thread_zext_ln45_5_fu_3856_p1() {
    zext_ln45_5_fu_3856_p1 = esl_zext<64,9>(grp_fu_3460_p2.read());
}

void matrix_mult::thread_zext_ln45_6_fu_3862_p1() {
    zext_ln45_6_fu_3862_p1 = esl_zext<64,9>(grp_fu_3477_p2.read());
}

void matrix_mult::thread_zext_ln45_7_fu_3908_p1() {
    zext_ln45_7_fu_3908_p1 = esl_zext<64,9>(grp_fu_3494_p2.read());
}

void matrix_mult::thread_zext_ln45_8_fu_3914_p1() {
    zext_ln45_8_fu_3914_p1 = esl_zext<64,9>(grp_fu_3511_p2.read());
}

void matrix_mult::thread_zext_ln45_9_fu_3960_p1() {
    zext_ln45_9_fu_3960_p1 = esl_zext<64,9>(grp_fu_3528_p2.read());
}

void matrix_mult::thread_zext_ln45_fu_3732_p1() {
    zext_ln45_fu_3732_p1 = esl_zext<64,9>(grp_fu_3377_p2.read());
}

void matrix_mult::thread_zext_ln51_1_fu_4356_p1() {
    zext_ln51_1_fu_4356_p1 = esl_zext<32,6>(select_ln51_1_reg_6506.read());
}

void matrix_mult::thread_zext_ln51_2_fu_4462_p1() {
    zext_ln51_2_fu_4462_p1 = esl_zext<7,6>(select_ln51_1_reg_6506_pp2_iter28_reg.read());
}

void matrix_mult::thread_zext_ln51_fu_4410_p1() {
    zext_ln51_fu_4410_p1 = esl_zext<7,6>(step_0_reg_2217_pp2_iter27_reg.read());
}

void matrix_mult::thread_zext_ln52_1_fu_4465_p1() {
    zext_ln52_1_fu_4465_p1 = esl_zext<7,5>(m_reg_6568.read());
}

void matrix_mult::thread_zext_ln52_fu_4414_p1() {
    zext_ln52_fu_4414_p1 = esl_zext<7,5>(ap_phi_mux_m_0_phi_fu_2255_p4.read());
}

void matrix_mult::thread_zext_ln54_fu_4359_p1() {
    zext_ln54_fu_4359_p1 = esl_zext<32,5>(select_ln52_reg_6525.read());
}

void matrix_mult::thread_zext_ln57_1_fu_4584_p1() {
    zext_ln57_1_fu_4584_p1 = esl_zext<64,6>(step_reg_6492_pp2_iter36_reg.read());
}

void matrix_mult::thread_zext_ln57_2_fu_4605_p1() {
    zext_ln57_2_fu_4605_p1 = esl_zext<9,7>(tmp_12_fu_4598_p3.read());
}

void matrix_mult::thread_zext_ln57_fu_4562_p1() {
    zext_ln57_fu_4562_p1 = esl_zext<9,7>(tmp_10_fu_4555_p3.read());
}

void matrix_mult::thread_zext_ln58_1_cast_fu_4513_p3() {
    zext_ln58_1_cast_fu_4513_p3 = esl_concat<5,4>(trunc_ln58_1_fu_4509_p1.read(), ap_const_lv4_0);
}

void matrix_mult::thread_zext_ln58_1_fu_4627_p1() {
    zext_ln58_1_fu_4627_p1 = esl_zext<64,9>(add_ln58_1_reg_6616.read());
}

void matrix_mult::thread_zext_ln58_2_cast_fu_4525_p3() {
    zext_ln58_2_cast_fu_4525_p3 = esl_concat<7,2>(trunc_ln58_2_fu_4521_p1.read(), ap_const_lv2_0);
}

void matrix_mult::thread_zext_ln58_fu_4506_p1() {
    zext_ln58_fu_4506_p1 = esl_zext<9,5>(select_ln52_reg_6525_pp2_iter35_reg.read());
}

void matrix_mult::thread_zext_ln59_1_fu_4731_p1() {
    zext_ln59_1_fu_4731_p1 = esl_zext<9,6>(tmp_17_fu_4724_p3.read());
}

void matrix_mult::thread_zext_ln59_2_fu_4769_p1() {
    zext_ln59_2_fu_4769_p1 = esl_zext<9,5>(select_ln52_reg_6525_pp2_iter37_reg.read());
}

void matrix_mult::thread_zext_ln59_3_fu_4778_p1() {
    zext_ln59_3_fu_4778_p1 = esl_zext<64,9>(add_ln59_1_fu_4772_p2.read());
}

void matrix_mult::thread_zext_ln59_fu_4720_p1() {
    zext_ln59_fu_4720_p1 = esl_zext<9,8>(tmp_16_fu_4713_p3.read());
}

void matrix_mult::thread_zext_ln81_10_fu_5415_p1() {
    zext_ln81_10_fu_5415_p1 = esl_zext<64,9>(urem_ln81_9_reg_7086.read());
}

void matrix_mult::thread_zext_ln81_11_fu_5442_p1() {
    zext_ln81_11_fu_5442_p1 = esl_zext<64,9>(urem_ln81_10_reg_7111.read());
}

void matrix_mult::thread_zext_ln81_12_fu_5447_p1() {
    zext_ln81_12_fu_5447_p1 = esl_zext<64,9>(urem_ln81_11_reg_7116.read());
}

void matrix_mult::thread_zext_ln81_13_fu_5474_p1() {
    zext_ln81_13_fu_5474_p1 = esl_zext<64,9>(urem_ln81_12_reg_7141.read());
}

void matrix_mult::thread_zext_ln81_14_fu_5479_p1() {
    zext_ln81_14_fu_5479_p1 = esl_zext<64,9>(urem_ln81_13_reg_7146.read());
}

void matrix_mult::thread_zext_ln81_15_fu_5506_p1() {
    zext_ln81_15_fu_5506_p1 = esl_zext<64,9>(urem_ln81_14_reg_7171.read());
}

void matrix_mult::thread_zext_ln81_16_fu_5511_p1() {
    zext_ln81_16_fu_5511_p1 = esl_zext<64,9>(urem_ln81_15_reg_7176.read());
}

void matrix_mult::thread_zext_ln81_17_fu_5516_p1() {
    zext_ln81_17_fu_5516_p1 = esl_zext<64,9>(urem_ln81_16_reg_7201.read());
}

void matrix_mult::thread_zext_ln81_18_fu_5521_p1() {
    zext_ln81_18_fu_5521_p1 = esl_zext<64,9>(urem_ln81_17_reg_7206.read());
}

void matrix_mult::thread_zext_ln81_19_fu_5526_p1() {
    zext_ln81_19_fu_5526_p1 = esl_zext<64,9>(urem_ln81_18_reg_7231.read());
}

void matrix_mult::thread_zext_ln81_1_fu_5237_p1() {
    zext_ln81_1_fu_5237_p1 = esl_zext<64,9>(grp_fu_4891_p2.read());
}

void matrix_mult::thread_zext_ln81_20_fu_5531_p1() {
    zext_ln81_20_fu_5531_p1 = esl_zext<64,9>(urem_ln81_19_reg_7236.read());
}

void matrix_mult::thread_zext_ln81_21_fu_4875_p1() {
    zext_ln81_21_fu_4875_p1 = esl_zext<9,7>(tmp_18_fu_4867_p3.read());
}

void matrix_mult::thread_zext_ln81_22_fu_4885_p1() {
    zext_ln81_22_fu_4885_p1 = esl_zext<64,9>(add_ln81_18_fu_4879_p2.read());
}

void matrix_mult::thread_zext_ln81_23_fu_5231_p1() {
    zext_ln81_23_fu_5231_p1 = esl_zext<64,9>(or_ln81_3_fu_5226_p2.read());
}

void matrix_mult::thread_zext_ln81_24_fu_5248_p1() {
    zext_ln81_24_fu_5248_p1 = esl_zext<64,9>(or_ln81_4_fu_5243_p2.read());
}

void matrix_mult::thread_zext_ln81_25_fu_5259_p1() {
    zext_ln81_25_fu_5259_p1 = esl_zext<64,9>(or_ln81_5_fu_5254_p2.read());
}

void matrix_mult::thread_zext_ln81_2_fu_5265_p1() {
    zext_ln81_2_fu_5265_p1 = esl_zext<64,9>(urem_ln81_1_reg_6966.read());
}

void matrix_mult::thread_zext_ln81_3_fu_5292_p1() {
    zext_ln81_3_fu_5292_p1 = esl_zext<64,9>(urem_ln81_2_reg_6991.read());
}

void matrix_mult::thread_zext_ln81_4_fu_5319_p1() {
    zext_ln81_4_fu_5319_p1 = esl_zext<64,9>(urem_ln81_3_reg_6996.read());
}

void matrix_mult::thread_zext_ln81_5_fu_5346_p1() {
    zext_ln81_5_fu_5346_p1 = esl_zext<64,9>(urem_ln81_4_reg_7021.read());
}

void matrix_mult::thread_zext_ln81_6_fu_5351_p1() {
    zext_ln81_6_fu_5351_p1 = esl_zext<64,9>(urem_ln81_5_reg_7026.read());
}

void matrix_mult::thread_zext_ln81_7_fu_5378_p1() {
    zext_ln81_7_fu_5378_p1 = esl_zext<64,9>(urem_ln81_6_reg_7051.read());
}

void matrix_mult::thread_zext_ln81_8_fu_5383_p1() {
    zext_ln81_8_fu_5383_p1 = esl_zext<64,9>(urem_ln81_7_reg_7056.read());
}

void matrix_mult::thread_zext_ln81_9_fu_5410_p1() {
    zext_ln81_9_fu_5410_p1 = esl_zext<64,9>(urem_ln81_8_reg_7081.read());
}

void matrix_mult::thread_zext_ln81_fu_4829_p1() {
    zext_ln81_fu_4829_p1 = esl_zext<9,7>(shl_ln81_1_fu_4821_p3.read());
}

}

