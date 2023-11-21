#include "matrix_mult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mult::thread_a_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_19_fu_3881_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_17_fu_3829_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_15_fu_3777_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_13_fu_3725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_11_fu_3673_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_9_fu_3621_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_7_fu_3569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_5_fu_3517_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_3_fu_3465_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<8>) (zext_ln28_fu_3393_p1.read());
    } else {
        a_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_20_fu_3887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_18_fu_3835_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_16_fu_3783_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_14_fu_3731_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_12_fu_3679_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_10_fu_3627_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_8_fu_3575_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_6_fu_3523_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_4_fu_3471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_0_address1 =  (sc_lv<8>) (zext_ln28_2_fu_3399_p1.read());
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
        a_1_address0 =  (sc_lv<8>) (zext_ln28_19_fu_3881_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_17_fu_3829_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_15_fu_3777_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_13_fu_3725_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_11_fu_3673_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_9_fu_3621_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_7_fu_3569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_5_fu_3517_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_3_fu_3465_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<8>) (zext_ln28_fu_3393_p1.read());
    } else {
        a_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_20_fu_3887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_18_fu_3835_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_16_fu_3783_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_14_fu_3731_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_12_fu_3679_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_10_fu_3627_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_8_fu_3575_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_6_fu_3523_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_4_fu_3471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_1_address1 =  (sc_lv<8>) (zext_ln28_2_fu_3399_p1.read());
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        a_buff_0_address0 =  (sc_lv<8>) (zext_ln52_3_fu_4729_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_14_fu_3898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_12_fu_3846_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_10_fu_3794_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_8_fu_3742_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_6_fu_3690_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_4_fu_3638_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_2_fu_3586_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (sext_ln28_fu_3534_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (zext_ln28_24_fu_3482_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<8>) (zext_ln28_22_fu_3438_p1.read());
    } else {
        a_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_15_fu_3909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_13_fu_3857_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_11_fu_3805_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_9_fu_3753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_7_fu_3701_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_5_fu_3649_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_3_fu_3597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (sext_ln28_1_fu_3545_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (zext_ln28_25_fu_3493_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_address1 =  (sc_lv<8>) (zext_ln28_23_fu_3450_p1.read());
    } else {
        a_buff_0_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
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
        a_buff_0_d0 = select_ln28_18_fu_3915_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_16_fu_3863_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d0 = select_ln28_14_fu_3811_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_12_fu_3759_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_10_fu_3707_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_8_fu_3655_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_6_fu_3603_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_4_fu_3551_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_2_fu_3499_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_d0 = select_ln28_fu_3405_p3.read();
    } else {
        a_buff_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d1 = select_ln28_19_fu_3924_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_17_fu_3872_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_0_d1 = select_ln28_15_fu_3820_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_13_fu_3768_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_11_fu_3716_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_9_fu_3664_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_7_fu_3612_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_5_fu_3560_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_3_fu_3508_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_0_d1 = select_ln28_1_fu_3456_p3.read();
    } else {
        a_buff_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter2_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter2_reg.read(), ap_const_lv1_1)))) {
        a_buff_0_we0 = ap_const_logic_1;
    } else {
        a_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter1_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter2_reg.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(icmp_ln28_1_reg_5925_pp0_iter2_reg.read(), ap_const_lv1_1)))) {
        a_buff_0_we1 = ap_const_logic_1;
    } else {
        a_buff_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        a_buff_1_address0 =  (sc_lv<8>) (zext_ln52_3_fu_4729_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_14_fu_3898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_12_fu_3846_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_10_fu_3794_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_8_fu_3742_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_6_fu_3690_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_4_fu_3638_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_2_fu_3586_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (sext_ln28_fu_3534_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (zext_ln28_24_fu_3482_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<8>) (zext_ln28_22_fu_3438_p1.read());
    } else {
        a_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_15_fu_3909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_13_fu_3857_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_11_fu_3805_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_9_fu_3753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_7_fu_3701_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_5_fu_3649_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_3_fu_3597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (sext_ln28_1_fu_3545_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (zext_ln28_25_fu_3493_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_address1 =  (sc_lv<8>) (zext_ln28_23_fu_3450_p1.read());
    } else {
        a_buff_1_address1 = "XXXXXXXX";
    }
}

void matrix_mult::thread_a_buff_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
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
        a_buff_1_d0 = select_ln28_18_fu_3915_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_16_fu_3863_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d0 = select_ln28_14_fu_3811_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_12_fu_3759_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_10_fu_3707_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_8_fu_3655_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_6_fu_3603_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_4_fu_3551_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_2_fu_3499_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_d0 = select_ln28_fu_3405_p3.read();
    } else {
        a_buff_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d1 = select_ln28_19_fu_3924_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_17_fu_3872_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_buff_1_d1 = select_ln28_15_fu_3820_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_13_fu_3768_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_11_fu_3716_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_9_fu_3664_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_7_fu_3612_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_5_fu_3560_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_3_fu_3508_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_1_d1 = select_ln28_1_fu_3456_p3.read();
    } else {
        a_buff_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_a_buff_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter2_reg.read())))) {
        a_buff_1_we0 = ap_const_logic_1;
    } else {
        a_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter2_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_1_reg_5925_pp0_iter2_reg.read())))) {
        a_buff_1_we1 = ap_const_logic_1;
    } else {
        a_buff_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_add_ln28_10_fu_3269_p2() {
    add_ln28_10_fu_3269_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln28_11_fu_3286_p2() {
    add_ln28_11_fu_3286_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln28_12_fu_3303_p2() {
    add_ln28_12_fu_3303_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln28_13_fu_3320_p2() {
    add_ln28_13_fu_3320_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln28_14_fu_3337_p2() {
    add_ln28_14_fu_3337_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln28_15_fu_3359_p2() {
    add_ln28_15_fu_3359_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln28_16_fu_3376_p2() {
    add_ln28_16_fu_3376_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln28_17_fu_3050_p2() {
    add_ln28_17_fu_3050_p2 = (!ap_phi_mux_i_0_phi_fu_2876_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_2876_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln28_18_fu_3432_p2() {
    add_ln28_18_fu_3432_p2 = (!zext_ln28_21_fu_3428_p1.read().is_01() || !tmp_4_fu_3414_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln28_21_fu_3428_p1.read()) + sc_biguint<9>(tmp_4_fu_3414_p3.read()));
}

void matrix_mult::thread_add_ln28_19_fu_3529_p2() {
    add_ln28_19_fu_3529_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln28_1_fu_3116_p2() {
    add_ln28_1_fu_3116_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln28_20_fu_3540_p2() {
    add_ln28_20_fu_3540_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln28_21_fu_3581_p2() {
    add_ln28_21_fu_3581_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln28_22_fu_3592_p2() {
    add_ln28_22_fu_3592_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln28_23_fu_3633_p2() {
    add_ln28_23_fu_3633_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln28_24_fu_3644_p2() {
    add_ln28_24_fu_3644_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln28_25_fu_3685_p2() {
    add_ln28_25_fu_3685_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln28_26_fu_3696_p2() {
    add_ln28_26_fu_3696_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln28_27_fu_3737_p2() {
    add_ln28_27_fu_3737_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln28_28_fu_3748_p2() {
    add_ln28_28_fu_3748_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln28_29_fu_3789_p2() {
    add_ln28_29_fu_3789_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln28_2_fu_3133_p2() {
    add_ln28_2_fu_3133_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln28_30_fu_3800_p2() {
    add_ln28_30_fu_3800_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln28_31_fu_3841_p2() {
    add_ln28_31_fu_3841_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln28_32_fu_3852_p2() {
    add_ln28_32_fu_3852_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln28_33_fu_3893_p2() {
    add_ln28_33_fu_3893_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln28_34_fu_3904_p2() {
    add_ln28_34_fu_3904_p2 = (!add_ln28_18_reg_6150.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_18_reg_6150.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln28_3_fu_3150_p2() {
    add_ln28_3_fu_3150_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln28_4_fu_3167_p2() {
    add_ln28_4_fu_3167_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln28_5_fu_3184_p2() {
    add_ln28_5_fu_3184_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln28_6_fu_3201_p2() {
    add_ln28_6_fu_3201_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln28_7_fu_3218_p2() {
    add_ln28_7_fu_3218_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln28_8_fu_3235_p2() {
    add_ln28_8_fu_3235_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln28_9_fu_3252_p2() {
    add_ln28_9_fu_3252_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln28_reg_5901.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln28_fu_3032_p2() {
    add_ln28_fu_3032_p2 = (!zext_ln28_1_fu_3028_p1.read().is_01() || !shl_ln_fu_3012_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln28_1_fu_3028_p1.read()) + sc_biguint<9>(shl_ln_fu_3012_p3.read()));
}

void matrix_mult::thread_add_ln35_10_fu_4202_p2() {
    add_ln35_10_fu_4202_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln35_11_fu_4219_p2() {
    add_ln35_11_fu_4219_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln35_12_fu_4236_p2() {
    add_ln35_12_fu_4236_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln35_13_fu_4253_p2() {
    add_ln35_13_fu_4253_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln35_14_fu_4270_p2() {
    add_ln35_14_fu_4270_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln35_15_fu_4292_p2() {
    add_ln35_15_fu_4292_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln35_16_fu_4309_p2() {
    add_ln35_16_fu_4309_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln35_17_fu_3983_p2() {
    add_ln35_17_fu_3983_p2 = (!ap_phi_mux_i1_0_phi_fu_2887_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_2887_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln35_1_fu_4049_p2() {
    add_ln35_1_fu_4049_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln35_2_fu_4066_p2() {
    add_ln35_2_fu_4066_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln35_3_fu_4083_p2() {
    add_ln35_3_fu_4083_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln35_4_fu_4100_p2() {
    add_ln35_4_fu_4100_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln35_5_fu_4117_p2() {
    add_ln35_5_fu_4117_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln35_6_fu_4134_p2() {
    add_ln35_6_fu_4134_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln35_7_fu_4151_p2() {
    add_ln35_7_fu_4151_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln35_8_fu_4168_p2() {
    add_ln35_8_fu_4168_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln35_9_fu_4185_p2() {
    add_ln35_9_fu_4185_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln35_reg_6361.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln35_fu_3965_p2() {
    add_ln35_fu_3965_p2 = (!zext_ln35_21_fu_3961_p1.read().is_01() || !shl_ln1_fu_3945_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln35_21_fu_3961_p1.read()) + sc_biguint<9>(shl_ln1_fu_3945_p3.read()));
}

void matrix_mult::thread_add_ln52_10_fu_5044_p2() {
    add_ln52_10_fu_5044_p2 = (!reg_2976.read().is_01() || !mul_ln52_10_reg_7486.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2976.read()) + sc_biguint<32>(mul_ln52_10_reg_7486.read()));
}

void matrix_mult::thread_add_ln52_11_fu_5049_p2() {
    add_ln52_11_fu_5049_p2 = (!reg_2980.read().is_01() || !mul_ln52_11_reg_7491.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2980.read()) + sc_biguint<32>(mul_ln52_11_reg_7491.read()));
}

void matrix_mult::thread_add_ln52_12_fu_5062_p2() {
    add_ln52_12_fu_5062_p2 = (!reg_2966.read().is_01() || !mul_ln52_12_reg_7506.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2966.read()) + sc_biguint<32>(mul_ln52_12_reg_7506.read()));
}

void matrix_mult::thread_add_ln52_13_fu_5067_p2() {
    add_ln52_13_fu_5067_p2 = (!reg_2971.read().is_01() || !mul_ln52_13_reg_7511.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2971.read()) + sc_biguint<32>(mul_ln52_13_reg_7511.read()));
}

void matrix_mult::thread_add_ln52_14_fu_5080_p2() {
    add_ln52_14_fu_5080_p2 = (!reg_2976.read().is_01() || !mul_ln52_14_reg_7526.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2976.read()) + sc_biguint<32>(mul_ln52_14_reg_7526.read()));
}

void matrix_mult::thread_add_ln52_15_fu_5085_p2() {
    add_ln52_15_fu_5085_p2 = (!reg_2980.read().is_01() || !mul_ln52_15_reg_7531.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2980.read()) + sc_biguint<32>(mul_ln52_15_reg_7531.read()));
}

void matrix_mult::thread_add_ln52_16_fu_5098_p2() {
    add_ln52_16_fu_5098_p2 = (!reg_2966.read().is_01() || !mul_ln52_16_reg_7546.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2966.read()) + sc_biguint<32>(mul_ln52_16_reg_7546.read()));
}

void matrix_mult::thread_add_ln52_17_fu_5103_p2() {
    add_ln52_17_fu_5103_p2 = (!reg_2971.read().is_01() || !mul_ln52_17_reg_7551.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2971.read()) + sc_biguint<32>(mul_ln52_17_reg_7551.read()));
}

void matrix_mult::thread_add_ln52_18_fu_5116_p2() {
    add_ln52_18_fu_5116_p2 = (!reg_2976.read().is_01() || !mul_ln52_18_reg_7566.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2976.read()) + sc_biguint<32>(mul_ln52_18_reg_7566.read()));
}

void matrix_mult::thread_add_ln52_19_fu_5121_p2() {
    add_ln52_19_fu_5121_p2 = (!reg_2980.read().is_01() || !mul_ln52_19_reg_7571.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2980.read()) + sc_biguint<32>(mul_ln52_19_reg_7571.read()));
}

void matrix_mult::thread_add_ln52_1_fu_4959_p2() {
    add_ln52_1_fu_4959_p2 = (!reg_2971.read().is_01() || !mul_ln52_1_reg_7391.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2971.read()) + sc_biguint<32>(mul_ln52_1_reg_7391.read()));
}

void matrix_mult::thread_add_ln52_20_fu_4668_p2() {
    add_ln52_20_fu_4668_p2 = (!m_0_reg_2894.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(m_0_reg_2894.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln52_21_fu_4702_p2() {
    add_ln52_21_fu_4702_p2 = (!zext_ln52_fu_4698_p1.read().is_01() || !tmp_8_fu_4682_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln52_fu_4698_p1.read()) + sc_biguint<9>(tmp_8_fu_4682_p3.read()));
}

void matrix_mult::thread_add_ln52_22_fu_4724_p2() {
    add_ln52_22_fu_4724_p2 = (!zext_ln52_1_fu_4720_p1.read().is_01() || !add_ln52_21_reg_7014.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln52_1_fu_4720_p1.read()) + sc_biguint<9>(add_ln52_21_reg_7014.read()));
}

void matrix_mult::thread_add_ln52_23_fu_4741_p2() {
    add_ln52_23_fu_4741_p2 = (!n_0_reg_2917.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(n_0_reg_2917.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln52_2_fu_4972_p2() {
    add_ln52_2_fu_4972_p2 = (!reg_2976.read().is_01() || !mul_ln52_2_reg_7406.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2976.read()) + sc_biguint<32>(mul_ln52_2_reg_7406.read()));
}

void matrix_mult::thread_add_ln52_3_fu_4977_p2() {
    add_ln52_3_fu_4977_p2 = (!reg_2980.read().is_01() || !mul_ln52_3_reg_7411.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2980.read()) + sc_biguint<32>(mul_ln52_3_reg_7411.read()));
}

void matrix_mult::thread_add_ln52_4_fu_4990_p2() {
    add_ln52_4_fu_4990_p2 = (!reg_2966.read().is_01() || !mul_ln52_4_reg_7426.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2966.read()) + sc_biguint<32>(mul_ln52_4_reg_7426.read()));
}

void matrix_mult::thread_add_ln52_5_fu_4995_p2() {
    add_ln52_5_fu_4995_p2 = (!reg_2971.read().is_01() || !mul_ln52_5_reg_7431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2971.read()) + sc_biguint<32>(mul_ln52_5_reg_7431.read()));
}

void matrix_mult::thread_add_ln52_6_fu_5008_p2() {
    add_ln52_6_fu_5008_p2 = (!reg_2976.read().is_01() || !mul_ln52_6_reg_7446.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2976.read()) + sc_biguint<32>(mul_ln52_6_reg_7446.read()));
}

void matrix_mult::thread_add_ln52_7_fu_5013_p2() {
    add_ln52_7_fu_5013_p2 = (!reg_2980.read().is_01() || !mul_ln52_7_reg_7451.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2980.read()) + sc_biguint<32>(mul_ln52_7_reg_7451.read()));
}

void matrix_mult::thread_add_ln52_8_fu_5026_p2() {
    add_ln52_8_fu_5026_p2 = (!reg_2966.read().is_01() || !mul_ln52_8_reg_7466.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2966.read()) + sc_biguint<32>(mul_ln52_8_reg_7466.read()));
}

void matrix_mult::thread_add_ln52_9_fu_5031_p2() {
    add_ln52_9_fu_5031_p2 = (!reg_2971.read().is_01() || !mul_ln52_9_reg_7471.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2971.read()) + sc_biguint<32>(mul_ln52_9_reg_7471.read()));
}

void matrix_mult::thread_add_ln52_fu_4954_p2() {
    add_ln52_fu_4954_p2 = (!reg_2966.read().is_01() || !mul_ln52_reg_7386.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_2966.read()) + sc_biguint<32>(mul_ln52_reg_7386.read()));
}

void matrix_mult::thread_add_ln57_fu_5147_p2() {
    add_ln57_fu_5147_p2 = (!add_ln52_21_reg_7014.read().is_01() || !zext_ln57_1_fu_5143_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln52_21_reg_7014.read()) + sc_biguint<9>(zext_ln57_1_fu_5143_p1.read()));
}

void matrix_mult::thread_add_ln65_10_fu_5458_p2() {
    add_ln65_10_fu_5458_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln65_11_fu_5475_p2() {
    add_ln65_11_fu_5475_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln65_12_fu_5492_p2() {
    add_ln65_12_fu_5492_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln65_13_fu_5509_p2() {
    add_ln65_13_fu_5509_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln65_14_fu_5526_p2() {
    add_ln65_14_fu_5526_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln65_15_fu_5548_p2() {
    add_ln65_15_fu_5548_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln65_16_fu_5565_p2() {
    add_ln65_16_fu_5565_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln65_17_fu_5201_p2() {
    add_ln65_17_fu_5201_p2 = (!ap_phi_mux_i5_0_phi_fu_2943_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i5_0_phi_fu_2943_p4.read()) + sc_bigint<5>(ap_const_lv5_16));
}

void matrix_mult::thread_add_ln65_18_fu_5235_p2() {
    add_ln65_18_fu_5235_p2 = (!zext_ln65_21_fu_5231_p1.read().is_01() || !tmp_6_fu_5215_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln65_21_fu_5231_p1.read()) + sc_biguint<9>(tmp_6_fu_5215_p3.read()));
}

void matrix_mult::thread_add_ln65_19_fu_5626_p2() {
    add_ln65_19_fu_5626_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln65_1_fu_5305_p2() {
    add_ln65_1_fu_5305_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void matrix_mult::thread_add_ln65_20_fu_5637_p2() {
    add_ln65_20_fu_5637_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln65_21_fu_5653_p2() {
    add_ln65_21_fu_5653_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln65_22_fu_5664_p2() {
    add_ln65_22_fu_5664_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln65_23_fu_5680_p2() {
    add_ln65_23_fu_5680_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln65_24_fu_5691_p2() {
    add_ln65_24_fu_5691_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln65_25_fu_5712_p2() {
    add_ln65_25_fu_5712_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln65_26_fu_5723_p2() {
    add_ln65_26_fu_5723_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln65_27_fu_5744_p2() {
    add_ln65_27_fu_5744_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln65_28_fu_5755_p2() {
    add_ln65_28_fu_5755_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_D.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_D));
}

void matrix_mult::thread_add_ln65_29_fu_5776_p2() {
    add_ln65_29_fu_5776_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_E.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_E));
}

void matrix_mult::thread_add_ln65_2_fu_5322_p2() {
    add_ln65_2_fu_5322_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_5.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_5));
}

void matrix_mult::thread_add_ln65_30_fu_5787_p2() {
    add_ln65_30_fu_5787_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_F.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_F));
}

void matrix_mult::thread_add_ln65_31_fu_5808_p2() {
    add_ln65_31_fu_5808_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void matrix_mult::thread_add_ln65_32_fu_5819_p2() {
    add_ln65_32_fu_5819_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_11.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_11));
}

void matrix_mult::thread_add_ln65_33_fu_5840_p2() {
    add_ln65_33_fu_5840_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_12.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_12));
}

void matrix_mult::thread_add_ln65_34_fu_5851_p2() {
    add_ln65_34_fu_5851_p2 = (!add_ln65_18_reg_7643_pp3_iter1_reg.read().is_01() || !ap_const_lv9_13.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_18_reg_7643_pp3_iter1_reg.read()) + sc_biguint<9>(ap_const_lv9_13));
}

void matrix_mult::thread_add_ln65_3_fu_5339_p2() {
    add_ln65_3_fu_5339_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_6.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_6));
}

void matrix_mult::thread_add_ln65_4_fu_5356_p2() {
    add_ln65_4_fu_5356_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_7.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_7));
}

void matrix_mult::thread_add_ln65_5_fu_5373_p2() {
    add_ln65_5_fu_5373_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void matrix_mult::thread_add_ln65_6_fu_5390_p2() {
    add_ln65_6_fu_5390_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_9.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_9));
}

void matrix_mult::thread_add_ln65_7_fu_5407_p2() {
    add_ln65_7_fu_5407_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_A.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_A));
}

void matrix_mult::thread_add_ln65_8_fu_5424_p2() {
    add_ln65_8_fu_5424_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_B.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_B));
}

void matrix_mult::thread_add_ln65_9_fu_5441_p2() {
    add_ln65_9_fu_5441_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_C.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln65_reg_7613.read()) + sc_biguint<9>(ap_const_lv9_C));
}

void matrix_mult::thread_add_ln65_fu_5189_p2() {
    add_ln65_fu_5189_p2 = (!zext_ln65_fu_5185_p1.read().is_01() || !shl_ln2_fu_5169_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln65_fu_5185_p1.read()) + sc_biguint<9>(shl_ln2_fu_5169_p3.read()));
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

void matrix_mult::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[48];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[49];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage10() {
    ap_CS_fsm_pp3_stage10 = ap_CS_fsm.read()[58];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage11() {
    ap_CS_fsm_pp3_stage11 = ap_CS_fsm.read()[59];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[50];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[51];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage4() {
    ap_CS_fsm_pp3_stage4 = ap_CS_fsm.read()[52];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage5() {
    ap_CS_fsm_pp3_stage5 = ap_CS_fsm.read()[53];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage6() {
    ap_CS_fsm_pp3_stage6 = ap_CS_fsm.read()[54];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage7() {
    ap_CS_fsm_pp3_stage7 = ap_CS_fsm.read()[55];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage8() {
    ap_CS_fsm_pp3_stage8 = ap_CS_fsm.read()[56];
}

void matrix_mult::thread_ap_CS_fsm_pp3_stage9() {
    ap_CS_fsm_pp3_stage9 = ap_CS_fsm.read()[57];
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

void matrix_mult::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[23];
}

void matrix_mult::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[24];
}

void matrix_mult::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[25];
}

void matrix_mult::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[26];
}

void matrix_mult::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[27];
}

void matrix_mult::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[28];
}

void matrix_mult::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[29];
}

void matrix_mult::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[30];
}

void matrix_mult::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[31];
}

void matrix_mult::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[32];
}

void matrix_mult::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[33];
}

void matrix_mult::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[34];
}

void matrix_mult::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[35];
}

void matrix_mult::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[36];
}

void matrix_mult::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[37];
}

void matrix_mult::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[38];
}

void matrix_mult::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[39];
}

void matrix_mult::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[40];
}

void matrix_mult::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[41];
}

void matrix_mult::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[42];
}

void matrix_mult::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[43];
}

void matrix_mult::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[44];
}

void matrix_mult::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[45];
}

void matrix_mult::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[46];
}

void matrix_mult::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[47];
}

void matrix_mult::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[60];
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

void matrix_mult::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state75_pp3_stage0_iter0() {
    ap_block_state75_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state76_pp3_stage1_iter0() {
    ap_block_state76_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state77_pp3_stage2_iter0() {
    ap_block_state77_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state78_pp3_stage3_iter0() {
    ap_block_state78_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state79_pp3_stage4_iter0() {
    ap_block_state79_pp3_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state80_pp3_stage5_iter0() {
    ap_block_state80_pp3_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state81_pp3_stage6_iter0() {
    ap_block_state81_pp3_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state82_pp3_stage7_iter0() {
    ap_block_state82_pp3_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state83_pp3_stage8_iter0() {
    ap_block_state83_pp3_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state84_pp3_stage9_iter0() {
    ap_block_state84_pp3_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state85_pp3_stage10_iter0() {
    ap_block_state85_pp3_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state86_pp3_stage11_iter0() {
    ap_block_state86_pp3_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state87_pp3_stage0_iter1() {
    ap_block_state87_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state88_pp3_stage1_iter1() {
    ap_block_state88_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state89_pp3_stage2_iter1() {
    ap_block_state89_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state90_pp3_stage3_iter1() {
    ap_block_state90_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state91_pp3_stage4_iter1() {
    ap_block_state91_pp3_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state92_pp3_stage5_iter1() {
    ap_block_state92_pp3_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state93_pp3_stage6_iter1() {
    ap_block_state93_pp3_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state94_pp3_stage7_iter1() {
    ap_block_state94_pp3_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state95_pp3_stage8_iter1() {
    ap_block_state95_pp3_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state96_pp3_stage9_iter1() {
    ap_block_state96_pp3_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state97_pp3_stage10_iter1() {
    ap_block_state97_pp3_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state98_pp3_stage11_iter1() {
    ap_block_state98_pp3_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln25_fu_3000_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp1_exit_iter0_state26() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_fu_3933_p2.read())) {
        ap_condition_pp1_exit_iter0_state26 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state26 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp3_exit_iter0_state75() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln62_fu_5157_p2.read())) {
        ap_condition_pp3_exit_iter0_state75 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state75 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
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

void matrix_mult::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_phi_mux_i1_0_phi_fu_2887_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_reg_6352.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i1_0_phi_fu_2887_p4 = i_1_reg_6356.read();
    } else {
        ap_phi_mux_i1_0_phi_fu_2887_p4 = i1_0_reg_2883.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i5_0_phi_fu_2943_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln62_reg_7604.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i5_0_phi_fu_2943_p4 = i_2_reg_7608.read();
    } else {
        ap_phi_mux_i5_0_phi_fu_2943_p4 = i5_0_reg_2939.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i_0_phi_fu_2876_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln25_reg_5892.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_2876_p4 = i_reg_5896.read();
    } else {
        ap_phi_mux_i_0_phi_fu_2876_p4 = i_0_reg_2872.read();
    }
}

void matrix_mult::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_19_fu_4603_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_17_fu_4573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_15_fu_4543_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_13_fu_4513_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_11_fu_4483_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_9_fu_4453_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_7_fu_4423_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_5_fu_4393_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_3_fu_4363_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<8>) (zext_ln35_fu_4326_p1.read());
    } else {
        b_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_20_fu_4609_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_18_fu_4579_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_16_fu_4549_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_14_fu_4519_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_12_fu_4489_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_10_fu_4459_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_8_fu_4429_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_6_fu_4399_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_4_fu_4369_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_0_address1 =  (sc_lv<8>) (zext_ln35_2_fu_4332_p1.read());
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
        b_1_address0 =  (sc_lv<8>) (zext_ln35_19_fu_4603_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_17_fu_4573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_15_fu_4543_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_13_fu_4513_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_11_fu_4483_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_9_fu_4453_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_7_fu_4423_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_5_fu_4393_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_3_fu_4363_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (zext_ln35_fu_4326_p1.read());
    } else {
        b_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_b_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_20_fu_4609_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_18_fu_4579_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_16_fu_4549_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_14_fu_4519_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_12_fu_4489_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_10_fu_4459_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_8_fu_4429_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_6_fu_4399_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_4_fu_4369_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        b_1_address1 =  (sc_lv<8>) (zext_ln35_2_fu_4332_p1.read());
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_0_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_0_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4347_p1.read());
    } else {
        b_buff_0_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_0_we0 = ap_const_logic_1;
    } else {
        b_buff_0_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_10_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_10_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_10_we0 = ap_const_logic_1;
    } else {
        b_buff_0_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_11_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_0_11_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_11_we0 = ap_const_logic_1;
    } else {
        b_buff_0_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_12_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_12_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_12_we0 = ap_const_logic_1;
    } else {
        b_buff_0_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_13_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_0_13_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_13_we0 = ap_const_logic_1;
    } else {
        b_buff_0_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_14_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_14_address0 = b_buff_0_14_addr_1_reg_6779.read();
    } else {
        b_buff_0_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_14_we0 = ap_const_logic_1;
    } else {
        b_buff_0_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_15_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_15_address0 = b_buff_0_15_addr_1_reg_6799.read();
    } else {
        b_buff_0_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_15_we0 = ap_const_logic_1;
    } else {
        b_buff_0_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_16_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_16_address0 = b_buff_0_16_addr_1_reg_6809.read();
    } else {
        b_buff_0_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_0_16_we0 = ap_const_logic_1;
    } else {
        b_buff_0_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_17_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_0_17_address0 = b_buff_0_17_addr_1_reg_6819.read();
    } else {
        b_buff_0_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_0_17_we0 = ap_const_logic_1;
    } else {
        b_buff_0_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_18_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_18_address0 = b_buff_0_18_addr_1_reg_6829.read();
    } else {
        b_buff_0_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_0_18_we0 = ap_const_logic_1;
    } else {
        b_buff_0_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_19_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_0_19_address0 = b_buff_0_19_addr_1_reg_6839.read();
    } else {
        b_buff_0_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_0_19_we0 = ap_const_logic_1;
    } else {
        b_buff_0_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_1_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_0_1_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4347_p1.read());
    } else {
        b_buff_0_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_1_we0 = ap_const_logic_1;
    } else {
        b_buff_0_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_2_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_2_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_2_we0 = ap_const_logic_1;
    } else {
        b_buff_0_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_3_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_0_3_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_3_we0 = ap_const_logic_1;
    } else {
        b_buff_0_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_4_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_4_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_4_we0 = ap_const_logic_1;
    } else {
        b_buff_0_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_5_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_0_5_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_5_we0 = ap_const_logic_1;
    } else {
        b_buff_0_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_6_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_6_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_6_we0 = ap_const_logic_1;
    } else {
        b_buff_0_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_7_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_0_7_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_7_we0 = ap_const_logic_1;
    } else {
        b_buff_0_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_8_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_8_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_8_we0 = ap_const_logic_1;
    } else {
        b_buff_0_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_0_9_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_0_9_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_0_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_0_9_we0 = ap_const_logic_1;
    } else {
        b_buff_0_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_0_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_0_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4347_p1.read());
    } else {
        b_buff_1_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_0_we0 = ap_const_logic_1;
    } else {
        b_buff_1_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_10_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_10_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_10_we0 = ap_const_logic_1;
    } else {
        b_buff_1_10_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_11_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        b_buff_1_11_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_11_we0 = ap_const_logic_1;
    } else {
        b_buff_1_11_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_12_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_12_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_12_we0 = ap_const_logic_1;
    } else {
        b_buff_1_12_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_13_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        b_buff_1_13_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_13_we0 = ap_const_logic_1;
    } else {
        b_buff_1_13_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_14_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_14_address0 = b_buff_1_14_addr_1_reg_6784.read();
    } else {
        b_buff_1_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_14_we0 = ap_const_logic_1;
    } else {
        b_buff_1_14_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_15_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_15_address0 = b_buff_1_15_addr_1_reg_6804.read();
    } else {
        b_buff_1_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_15_we0 = ap_const_logic_1;
    } else {
        b_buff_1_15_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_16_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_16_address0 = b_buff_1_16_addr_1_reg_6814.read();
    } else {
        b_buff_1_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_1_16_we0 = ap_const_logic_1;
    } else {
        b_buff_1_16_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_17_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        b_buff_1_17_address0 = b_buff_1_17_addr_1_reg_6824.read();
    } else {
        b_buff_1_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_1_17_we0 = ap_const_logic_1;
    } else {
        b_buff_1_17_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_18_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_18_address0 = b_buff_1_18_addr_1_reg_6834.read();
    } else {
        b_buff_1_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_1_18_we0 = ap_const_logic_1;
    } else {
        b_buff_1_18_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_19_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        b_buff_1_19_address0 = b_buff_1_19_addr_1_reg_6844.read();
    } else {
        b_buff_1_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter2_reg.read()))) {
        b_buff_1_19_we0 = ap_const_logic_1;
    } else {
        b_buff_1_19_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_1_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        b_buff_1_1_address0 =  (sc_lv<4>) (zext_ln35_1_fu_4347_p1.read());
    } else {
        b_buff_1_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_1_we0 = ap_const_logic_1;
    } else {
        b_buff_1_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_2_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_2_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_2_we0 = ap_const_logic_1;
    } else {
        b_buff_1_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_3_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        b_buff_1_3_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_3_we0 = ap_const_logic_1;
    } else {
        b_buff_1_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_4_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_4_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_4_we0 = ap_const_logic_1;
    } else {
        b_buff_1_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_5_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        b_buff_1_5_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_5_we0 = ap_const_logic_1;
    } else {
        b_buff_1_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_6_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_6_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_6_we0 = ap_const_logic_1;
    } else {
        b_buff_1_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_7_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        b_buff_1_7_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_7_we0 = ap_const_logic_1;
    } else {
        b_buff_1_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_8_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_8_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_8_we0 = ap_const_logic_1;
    } else {
        b_buff_1_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        b_buff_1_9_address0 =  (sc_lv<4>) (zext_ln52_2_fu_4755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        b_buff_1_9_address0 =  (sc_lv<4>) (zext_ln35_1_reg_6609.read());
    } else {
        b_buff_1_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln35_1_reg_6385_pp1_iter1_reg.read()))) {
        b_buff_1_9_we0 = ap_const_logic_1;
    } else {
        b_buff_1_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_20_fu_5887_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_18_fu_5877_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_16_fu_5867_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_14_fu_5835_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_12_fu_5803_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_10_fu_5771_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_8_fu_5739_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_5_fu_5702_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_4_fu_5675_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_3_fu_5648_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_2_fu_5621_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_0_address0 =  (sc_lv<8>) (zext_ln65_1_fu_5593_p1.read());
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
            c_0_address1 =  (sc_lv<8>) (zext_ln65_19_fu_5882_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_17_fu_5872_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_15_fu_5862_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_13_fu_5830_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_11_fu_5798_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_9_fu_5766_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_7_fu_5734_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_0_address1 =  (sc_lv<8>) (zext_ln65_6_fu_5707_p1.read());
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
        c_0_d0 = reg_2992.read();
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
        c_0_d0 = reg_2984.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)))) {
        c_0_d0 = grp_fu_2957_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_0_d0 = select_ln65_reg_7685.read();
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
        c_0_d1 = reg_2992.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_0_d1 = reg_2984.read();
    } else {
        c_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_1_reg_7835.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_2_reg_7681_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_3_reg_7696_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_4_reg_7705_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_5_reg_7714_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_8_reg_7741_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_10_reg_7759_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_12_reg_7777_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_14_reg_7795_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_16_reg_7813_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_18_reg_7831_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_20_reg_7853_pp3_iter1_reg.read())))) {
        c_0_we0 = ap_const_logic_1;
    } else {
        c_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_6_reg_7723_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_7_reg_7732_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_9_reg_7750_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_11_reg_7768_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_13_reg_7786_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_15_reg_7804_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_17_reg_7822_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln65_19_reg_7844_pp3_iter1_reg.read())))) {
        c_0_we1 = ap_const_logic_1;
    } else {
        c_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_20_fu_5887_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_18_fu_5877_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_16_fu_5867_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_14_fu_5835_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_12_fu_5803_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_10_fu_5771_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_8_fu_5739_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_5_fu_5702_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_4_fu_5675_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_3_fu_5648_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_2_fu_5621_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_1_address0 =  (sc_lv<8>) (zext_ln65_1_fu_5593_p1.read());
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
            c_1_address1 =  (sc_lv<8>) (zext_ln65_19_fu_5882_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_17_fu_5872_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_15_fu_5862_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_13_fu_5830_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_11_fu_5798_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_9_fu_5766_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_7_fu_5734_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_1_address1 =  (sc_lv<8>) (zext_ln65_6_fu_5707_p1.read());
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
        c_1_d0 = reg_2992.read();
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
        c_1_d0 = reg_2984.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)))) {
        c_1_d0 = grp_fu_2957_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_1_d0 = select_ln65_reg_7685.read();
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
        c_1_d1 = reg_2992.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_1_d1 = reg_2984.read();
    } else {
        c_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_1_reg_7835.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_2_reg_7681_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_3_reg_7696_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_4_reg_7705_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_5_reg_7714_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_8_reg_7741_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_10_reg_7759_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_12_reg_7777_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_14_reg_7795_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_16_reg_7813_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_18_reg_7831_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_20_reg_7853_pp3_iter1_reg.read())))) {
        c_1_we0 = ap_const_logic_1;
    } else {
        c_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_6_reg_7723_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_7_reg_7732_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_9_reg_7750_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_11_reg_7768_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_13_reg_7786_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_15_reg_7804_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_17_reg_7822_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln65_19_reg_7844_pp3_iter1_reg.read())))) {
        c_1_we1 = ap_const_logic_1;
    } else {
        c_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_15_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_13_fu_5824_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_11_fu_5792_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_9_fu_5760_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_7_fu_5728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_5_fu_5696_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_3_fu_5669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (sext_ln65_1_fu_5642_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln65_25_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln65_22_fu_5241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        c_buff_0_address0 =  (sc_lv<8>) (zext_ln57_2_fu_5152_p1.read());
    } else {
        c_buff_0_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_14_fu_5845_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_12_fu_5813_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_10_fu_5781_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_8_fu_5749_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_6_fu_5717_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_4_fu_5685_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_2_fu_5658_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (sext_ln65_fu_5631_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (zext_ln65_24_fu_5604_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_buff_0_address1 =  (sc_lv<8>) (zext_ln65_23_fu_5587_p1.read());
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
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
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln52_reg_7009.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()))) {
        c_buff_0_we0 = ap_const_logic_1;
    } else {
        c_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_15_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_13_fu_5824_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_11_fu_5792_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_9_fu_5760_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_7_fu_5728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_5_fu_5696_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_3_fu_5669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (sext_ln65_1_fu_5642_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln65_25_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln65_22_fu_5241_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        c_buff_1_address0 =  (sc_lv<8>) (zext_ln57_2_fu_5152_p1.read());
    } else {
        c_buff_1_address0 = "XXXXXXXX";
    }
}

void matrix_mult::thread_c_buff_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_14_fu_5845_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_12_fu_5813_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_10_fu_5781_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_8_fu_5749_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_6_fu_5717_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_4_fu_5685_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_2_fu_5658_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (sext_ln65_fu_5631_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (zext_ln65_24_fu_5604_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
            c_buff_1_address1 =  (sc_lv<8>) (zext_ln65_23_fu_5587_p1.read());
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
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
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln52_reg_7009.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()))) {
        c_buff_1_we0 = ap_const_logic_1;
    } else {
        c_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_vec_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_13);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_11);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_F);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_D);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_B);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()))) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        c_vec_address0 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        c_vec_address0 =  (sc_lv<5>) (zext_ln45_fu_4657_p1.read());
    } else {
        c_vec_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void matrix_mult::thread_c_vec_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        c_vec_address1 =  (sc_lv<5>) (zext_ln57_fu_5138_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_12);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_10);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_E);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_C);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_A);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()))) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        c_vec_address1 =  (sc_lv<5>) (ap_const_lv64_1);
    } else {
        c_vec_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void matrix_mult::thread_c_vec_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        c_vec_ce0 = ap_const_logic_1;
    } else {
        c_vec_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_vec_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        c_vec_ce1 = ap_const_logic_1;
    } else {
        c_vec_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_vec_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        c_vec_d0 = add_ln52_19_reg_7581.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        c_vec_d0 = add_ln52_17_reg_7561.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        c_vec_d0 = add_ln52_15_reg_7541.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        c_vec_d0 = add_ln52_13_reg_7521.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        c_vec_d0 = add_ln52_11_reg_7501.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        c_vec_d0 = add_ln52_9_reg_7481.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        c_vec_d0 = add_ln52_7_reg_7461.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        c_vec_d0 = add_ln52_5_reg_7441.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        c_vec_d0 = add_ln52_3_reg_7421.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        c_vec_d0 = add_ln52_1_reg_7401.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        c_vec_d0 = ap_const_lv32_0;
    } else {
        c_vec_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_vec_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        c_vec_d1 = add_ln52_18_reg_7576.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        c_vec_d1 = add_ln52_16_reg_7556.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        c_vec_d1 = add_ln52_14_reg_7536.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read())) {
        c_vec_d1 = add_ln52_12_reg_7516.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read())) {
        c_vec_d1 = add_ln52_10_reg_7496.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        c_vec_d1 = add_ln52_8_reg_7476.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        c_vec_d1 = add_ln52_6_reg_7456.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        c_vec_d1 = add_ln52_4_reg_7436.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        c_vec_d1 = add_ln52_2_reg_7416.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        c_vec_d1 = add_ln52_reg_7396.read();
    } else {
        c_vec_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_vec_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_fu_4645_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        c_vec_we0 = ap_const_logic_1;
    } else {
        c_vec_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_vec_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        c_vec_we1 = ap_const_logic_1;
    } else {
        c_vec_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_grp_fu_2950_p0() {
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
        grp_fu_2950_p0 = icmp_ln65_reg_7637_pp3_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2950_p0 = icmp_ln65_reg_7637.read();
    } else {
        grp_fu_2950_p0 =  (sc_lv<1>) ("X");
    }
}

void matrix_mult::thread_grp_fu_2950_p3() {
    grp_fu_2950_p3 = (!grp_fu_2950_p0.read()[0].is_01())? sc_lv<32>(): ((grp_fu_2950_p0.read()[0].to_bool())? c_buff_0_q0.read(): c_buff_1_q0.read());
}

void matrix_mult::thread_grp_fu_2957_p3() {
    grp_fu_2957_p3 = (!icmp_ln65_reg_7637_pp3_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln65_reg_7637_pp3_iter1_reg.read()[0].to_bool())? c_buff_0_q1.read(): c_buff_1_q1.read());
}

void matrix_mult::thread_i_1_fu_3939_p2() {
    i_1_fu_3939_p2 = (!ap_phi_mux_i1_0_phi_fu_2887_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_2887_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_2_fu_5163_p2() {
    i_2_fu_5163_p2 = (!ap_phi_mux_i5_0_phi_fu_2943_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i5_0_phi_fu_2943_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_i_fu_3006_p2() {
    i_fu_3006_p2 = (!ap_phi_mux_i_0_phi_fu_2876_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_2876_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_icmp_ln25_fu_3000_p2() {
    icmp_ln25_fu_3000_p2 = (!ap_phi_mux_i_0_phi_fu_2876_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_2876_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln28_10_fu_3212_p2() {
    icmp_ln28_10_fu_3212_p2 = (!add_ln28_6_fu_3201_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_6_fu_3201_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_11_fu_3229_p2() {
    icmp_ln28_11_fu_3229_p2 = (!add_ln28_7_fu_3218_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_7_fu_3218_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_12_fu_3246_p2() {
    icmp_ln28_12_fu_3246_p2 = (!add_ln28_8_fu_3235_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_8_fu_3235_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_13_fu_3263_p2() {
    icmp_ln28_13_fu_3263_p2 = (!add_ln28_9_fu_3252_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_9_fu_3252_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_14_fu_3280_p2() {
    icmp_ln28_14_fu_3280_p2 = (!add_ln28_10_fu_3269_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_10_fu_3269_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_15_fu_3297_p2() {
    icmp_ln28_15_fu_3297_p2 = (!add_ln28_11_fu_3286_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_11_fu_3286_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_16_fu_3314_p2() {
    icmp_ln28_16_fu_3314_p2 = (!add_ln28_12_fu_3303_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_12_fu_3303_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_17_fu_3331_p2() {
    icmp_ln28_17_fu_3331_p2 = (!add_ln28_13_fu_3320_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_13_fu_3320_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_18_fu_3348_p2() {
    icmp_ln28_18_fu_3348_p2 = (!add_ln28_14_fu_3337_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_14_fu_3337_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_19_fu_3370_p2() {
    icmp_ln28_19_fu_3370_p2 = (!add_ln28_15_fu_3359_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_15_fu_3359_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_1_fu_3044_p2() {
    icmp_ln28_1_fu_3044_p2 = (!ap_phi_mux_i_0_phi_fu_2876_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i_0_phi_fu_2876_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln28_20_fu_3387_p2() {
    icmp_ln28_20_fu_3387_p2 = (!add_ln28_16_fu_3376_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_16_fu_3376_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_2_fu_3076_p2() {
    icmp_ln28_2_fu_3076_p2 = (!or_ln28_fu_3064_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_fu_3064_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_3_fu_3093_p2() {
    icmp_ln28_3_fu_3093_p2 = (!or_ln28_1_fu_3082_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_1_fu_3082_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_4_fu_3110_p2() {
    icmp_ln28_4_fu_3110_p2 = (!or_ln28_2_fu_3099_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln28_2_fu_3099_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_5_fu_3127_p2() {
    icmp_ln28_5_fu_3127_p2 = (!add_ln28_1_fu_3116_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_1_fu_3116_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_6_fu_3144_p2() {
    icmp_ln28_6_fu_3144_p2 = (!add_ln28_2_fu_3133_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_2_fu_3133_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_7_fu_3161_p2() {
    icmp_ln28_7_fu_3161_p2 = (!add_ln28_3_fu_3150_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_3_fu_3150_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_8_fu_3178_p2() {
    icmp_ln28_8_fu_3178_p2 = (!add_ln28_4_fu_3167_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_4_fu_3167_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_9_fu_3195_p2() {
    icmp_ln28_9_fu_3195_p2 = (!add_ln28_5_fu_3184_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_5_fu_3184_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln28_fu_3354_p2() {
    icmp_ln28_fu_3354_p2 = (!add_ln28_reg_5901.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln28_reg_5901.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln32_fu_3933_p2() {
    icmp_ln32_fu_3933_p2 = (!ap_phi_mux_i1_0_phi_fu_2887_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i1_0_phi_fu_2887_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln35_10_fu_4145_p2() {
    icmp_ln35_10_fu_4145_p2 = (!add_ln35_6_fu_4134_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_6_fu_4134_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_11_fu_4162_p2() {
    icmp_ln35_11_fu_4162_p2 = (!add_ln35_7_fu_4151_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_7_fu_4151_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_12_fu_4179_p2() {
    icmp_ln35_12_fu_4179_p2 = (!add_ln35_8_fu_4168_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_8_fu_4168_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_13_fu_4196_p2() {
    icmp_ln35_13_fu_4196_p2 = (!add_ln35_9_fu_4185_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_9_fu_4185_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_14_fu_4213_p2() {
    icmp_ln35_14_fu_4213_p2 = (!add_ln35_10_fu_4202_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_10_fu_4202_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_15_fu_4230_p2() {
    icmp_ln35_15_fu_4230_p2 = (!add_ln35_11_fu_4219_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_11_fu_4219_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_16_fu_4247_p2() {
    icmp_ln35_16_fu_4247_p2 = (!add_ln35_12_fu_4236_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_12_fu_4236_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_17_fu_4264_p2() {
    icmp_ln35_17_fu_4264_p2 = (!add_ln35_13_fu_4253_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_13_fu_4253_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_18_fu_4281_p2() {
    icmp_ln35_18_fu_4281_p2 = (!add_ln35_14_fu_4270_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_14_fu_4270_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_19_fu_4303_p2() {
    icmp_ln35_19_fu_4303_p2 = (!add_ln35_15_fu_4292_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_15_fu_4292_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_1_fu_3977_p2() {
    icmp_ln35_1_fu_3977_p2 = (!ap_phi_mux_i1_0_phi_fu_2887_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i1_0_phi_fu_2887_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln35_20_fu_4320_p2() {
    icmp_ln35_20_fu_4320_p2 = (!add_ln35_16_fu_4309_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_16_fu_4309_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_2_fu_4009_p2() {
    icmp_ln35_2_fu_4009_p2 = (!or_ln35_fu_3997_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_fu_3997_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_3_fu_4026_p2() {
    icmp_ln35_3_fu_4026_p2 = (!or_ln35_1_fu_4015_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_1_fu_4015_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_4_fu_4043_p2() {
    icmp_ln35_4_fu_4043_p2 = (!or_ln35_2_fu_4032_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln35_2_fu_4032_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_5_fu_4060_p2() {
    icmp_ln35_5_fu_4060_p2 = (!add_ln35_1_fu_4049_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_1_fu_4049_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_6_fu_4077_p2() {
    icmp_ln35_6_fu_4077_p2 = (!add_ln35_2_fu_4066_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_2_fu_4066_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_7_fu_4094_p2() {
    icmp_ln35_7_fu_4094_p2 = (!add_ln35_3_fu_4083_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_3_fu_4083_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_8_fu_4111_p2() {
    icmp_ln35_8_fu_4111_p2 = (!add_ln35_4_fu_4100_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_4_fu_4100_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_9_fu_4128_p2() {
    icmp_ln35_9_fu_4128_p2 = (!add_ln35_5_fu_4117_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_5_fu_4117_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln35_fu_4287_p2() {
    icmp_ln35_fu_4287_p2 = (!add_ln35_reg_6361.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln35_reg_6361.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln40_fu_4633_p2() {
    icmp_ln40_fu_4633_p2 = (!m_0_reg_2894.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(m_0_reg_2894.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln44_fu_4645_p2() {
    icmp_ln44_fu_4645_p2 = (!o_0_reg_2906.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(o_0_reg_2906.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln48_fu_4708_p2() {
    icmp_ln48_fu_4708_p2 = (!n_0_reg_2917.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(n_0_reg_2917.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln52_1_fu_4735_p2() {
    icmp_ln52_1_fu_4735_p2 = (!n_0_reg_2917.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(n_0_reg_2917.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln52_fu_4662_p2() {
    icmp_ln52_fu_4662_p2 = (!m_0_reg_2894.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(m_0_reg_2894.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_icmp_ln56_fu_5126_p2() {
    icmp_ln56_fu_5126_p2 = (!o4_0_reg_2928.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(o4_0_reg_2928.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln62_fu_5157_p2() {
    icmp_ln62_fu_5157_p2 = (!ap_phi_mux_i5_0_phi_fu_2943_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i5_0_phi_fu_2943_p4.read() == ap_const_lv5_14);
}

void matrix_mult::thread_icmp_ln65_10_fu_5401_p2() {
    icmp_ln65_10_fu_5401_p2 = (!add_ln65_6_fu_5390_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_6_fu_5390_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_11_fu_5418_p2() {
    icmp_ln65_11_fu_5418_p2 = (!add_ln65_7_fu_5407_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_7_fu_5407_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_12_fu_5435_p2() {
    icmp_ln65_12_fu_5435_p2 = (!add_ln65_8_fu_5424_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_8_fu_5424_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_13_fu_5452_p2() {
    icmp_ln65_13_fu_5452_p2 = (!add_ln65_9_fu_5441_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_9_fu_5441_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_14_fu_5469_p2() {
    icmp_ln65_14_fu_5469_p2 = (!add_ln65_10_fu_5458_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_10_fu_5458_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_15_fu_5486_p2() {
    icmp_ln65_15_fu_5486_p2 = (!add_ln65_11_fu_5475_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_11_fu_5475_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_16_fu_5503_p2() {
    icmp_ln65_16_fu_5503_p2 = (!add_ln65_12_fu_5492_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_12_fu_5492_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_17_fu_5520_p2() {
    icmp_ln65_17_fu_5520_p2 = (!add_ln65_13_fu_5509_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_13_fu_5509_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_18_fu_5537_p2() {
    icmp_ln65_18_fu_5537_p2 = (!add_ln65_14_fu_5526_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_14_fu_5526_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_19_fu_5559_p2() {
    icmp_ln65_19_fu_5559_p2 = (!add_ln65_15_fu_5548_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_15_fu_5548_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_1_fu_5543_p2() {
    icmp_ln65_1_fu_5543_p2 = (!add_ln65_reg_7613.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_reg_7613.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_20_fu_5576_p2() {
    icmp_ln65_20_fu_5576_p2 = (!add_ln65_16_fu_5565_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_16_fu_5565_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_2_fu_5265_p2() {
    icmp_ln65_2_fu_5265_p2 = (!or_ln65_fu_5253_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln65_fu_5253_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_3_fu_5282_p2() {
    icmp_ln65_3_fu_5282_p2 = (!or_ln65_1_fu_5271_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln65_1_fu_5271_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_4_fu_5299_p2() {
    icmp_ln65_4_fu_5299_p2 = (!or_ln65_2_fu_5288_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(or_ln65_2_fu_5288_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_5_fu_5316_p2() {
    icmp_ln65_5_fu_5316_p2 = (!add_ln65_1_fu_5305_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_1_fu_5305_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_6_fu_5333_p2() {
    icmp_ln65_6_fu_5333_p2 = (!add_ln65_2_fu_5322_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_2_fu_5322_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_7_fu_5350_p2() {
    icmp_ln65_7_fu_5350_p2 = (!add_ln65_3_fu_5339_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_3_fu_5339_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_8_fu_5367_p2() {
    icmp_ln65_8_fu_5367_p2 = (!add_ln65_4_fu_5356_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_4_fu_5356_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_9_fu_5384_p2() {
    icmp_ln65_9_fu_5384_p2 = (!add_ln65_5_fu_5373_p2.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<1>(): (sc_biguint<9>(add_ln65_5_fu_5373_p2.read()) < sc_biguint<9>(ap_const_lv9_C8));
}

void matrix_mult::thread_icmp_ln65_fu_5195_p2() {
    icmp_ln65_fu_5195_p2 = (!ap_phi_mux_i5_0_phi_fu_2943_p4.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): (sc_biguint<5>(ap_phi_mux_i5_0_phi_fu_2943_p4.read()) < sc_biguint<5>(ap_const_lv5_A));
}

void matrix_mult::thread_m_fu_4639_p2() {
    m_fu_4639_p2 = (!m_0_reg_2894.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(m_0_reg_2894.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_mul_ln52_10_fu_5036_p2() {
    mul_ln52_10_fu_5036_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_11_reg_7336.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_11_reg_7336.read());
}

void matrix_mult::thread_mul_ln52_11_fu_5040_p2() {
    mul_ln52_11_fu_5040_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_12_reg_7341.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_12_reg_7341.read());
}

void matrix_mult::thread_mul_ln52_12_fu_5054_p2() {
    mul_ln52_12_fu_5054_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_13_reg_7346.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_13_reg_7346.read());
}

void matrix_mult::thread_mul_ln52_13_fu_5058_p2() {
    mul_ln52_13_fu_5058_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_14_reg_7351.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_14_reg_7351.read());
}

void matrix_mult::thread_mul_ln52_14_fu_5072_p2() {
    mul_ln52_14_fu_5072_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_15_reg_7356.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_15_reg_7356.read());
}

void matrix_mult::thread_mul_ln52_15_fu_5076_p2() {
    mul_ln52_15_fu_5076_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_16_reg_7361.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_16_reg_7361.read());
}

void matrix_mult::thread_mul_ln52_16_fu_5090_p2() {
    mul_ln52_16_fu_5090_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_17_reg_7366.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_17_reg_7366.read());
}

void matrix_mult::thread_mul_ln52_17_fu_5094_p2() {
    mul_ln52_17_fu_5094_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_18_reg_7371.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_18_reg_7371.read());
}

void matrix_mult::thread_mul_ln52_18_fu_5108_p2() {
    mul_ln52_18_fu_5108_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_19_reg_7376.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_19_reg_7376.read());
}

void matrix_mult::thread_mul_ln52_19_fu_5112_p2() {
    mul_ln52_19_fu_5112_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_20_reg_7381.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_20_reg_7381.read());
}

void matrix_mult::thread_mul_ln52_1_fu_4950_p2() {
    mul_ln52_1_fu_4950_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_2_reg_7291.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_2_reg_7291.read());
}

void matrix_mult::thread_mul_ln52_2_fu_4964_p2() {
    mul_ln52_2_fu_4964_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_3_reg_7296.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_3_reg_7296.read());
}

void matrix_mult::thread_mul_ln52_3_fu_4968_p2() {
    mul_ln52_3_fu_4968_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_4_reg_7301.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_4_reg_7301.read());
}

void matrix_mult::thread_mul_ln52_4_fu_4982_p2() {
    mul_ln52_4_fu_4982_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_5_reg_7306.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_5_reg_7306.read());
}

void matrix_mult::thread_mul_ln52_5_fu_4986_p2() {
    mul_ln52_5_fu_4986_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_6_reg_7311.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_6_reg_7311.read());
}

void matrix_mult::thread_mul_ln52_6_fu_5000_p2() {
    mul_ln52_6_fu_5000_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_7_reg_7316.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_7_reg_7316.read());
}

void matrix_mult::thread_mul_ln52_7_fu_5004_p2() {
    mul_ln52_7_fu_5004_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_8_reg_7321.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_8_reg_7321.read());
}

void matrix_mult::thread_mul_ln52_8_fu_5018_p2() {
    mul_ln52_8_fu_5018_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_9_reg_7326.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_9_reg_7326.read());
}

void matrix_mult::thread_mul_ln52_9_fu_5022_p2() {
    mul_ln52_9_fu_5022_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_10_reg_7331.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_10_reg_7331.read());
}

void matrix_mult::thread_mul_ln52_fu_4946_p2() {
    mul_ln52_fu_4946_p2 = (!select_ln52_reg_7262.read().is_01() || !select_ln52_1_reg_7286.read().is_01())? sc_lv<32>(): sc_bigint<32>(select_ln52_reg_7262.read()) * sc_bigint<32>(select_ln52_1_reg_7286.read());
}

void matrix_mult::thread_n_fu_4714_p2() {
    n_fu_4714_p2 = (!n_0_reg_2917.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(n_0_reg_2917.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_o_1_fu_5132_p2() {
    o_1_fu_5132_p2 = (!o4_0_reg_2928.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(o4_0_reg_2928.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_o_fu_4651_p2() {
    o_fu_4651_p2 = (!o_0_reg_2906.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(o_0_reg_2906.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void matrix_mult::thread_or_ln28_1_fu_3082_p2() {
    or_ln28_1_fu_3082_p2 = (add_ln28_reg_5901.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln28_2_fu_3099_p2() {
    or_ln28_2_fu_3099_p2 = (add_ln28_reg_5901.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln28_3_fu_3444_p2() {
    or_ln28_3_fu_3444_p2 = (add_ln28_18_fu_3432_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln28_4_fu_3477_p2() {
    or_ln28_4_fu_3477_p2 = (add_ln28_18_reg_6150.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln28_5_fu_3488_p2() {
    or_ln28_5_fu_3488_p2 = (add_ln28_18_reg_6150.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln28_fu_3064_p2() {
    or_ln28_fu_3064_p2 = (add_ln28_fu_3032_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln35_1_fu_4015_p2() {
    or_ln35_1_fu_4015_p2 = (add_ln35_reg_6361.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln35_2_fu_4032_p2() {
    or_ln35_2_fu_4032_p2 = (add_ln35_reg_6361.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln35_fu_3997_p2() {
    or_ln35_fu_3997_p2 = (add_ln35_fu_3965_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln65_1_fu_5271_p2() {
    or_ln65_1_fu_5271_p2 = (add_ln65_reg_7613.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln65_2_fu_5288_p2() {
    or_ln65_2_fu_5288_p2 = (add_ln65_reg_7613.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln65_3_fu_5582_p2() {
    or_ln65_3_fu_5582_p2 = (add_ln65_18_reg_7643.read() | ap_const_lv9_1);
}

void matrix_mult::thread_or_ln65_4_fu_5599_p2() {
    or_ln65_4_fu_5599_p2 = (add_ln65_18_reg_7643_pp3_iter1_reg.read() | ap_const_lv9_2);
}

void matrix_mult::thread_or_ln65_5_fu_5610_p2() {
    or_ln65_5_fu_5610_p2 = (add_ln65_18_reg_7643_pp3_iter1_reg.read() | ap_const_lv9_3);
}

void matrix_mult::thread_or_ln65_fu_5253_p2() {
    or_ln65_fu_5253_p2 = (add_ln65_fu_5189_p2.read() | ap_const_lv9_1);
}

void matrix_mult::thread_select_ln28_10_fu_3707_p3() {
    select_ln28_10_fu_3707_p3 = (!icmp_ln28_11_reg_6030_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_11_reg_6030_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_11_fu_3716_p3() {
    select_ln28_11_fu_3716_p3 = (!icmp_ln28_12_reg_6040_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_12_reg_6040_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_12_fu_3759_p3() {
    select_ln28_12_fu_3759_p3 = (!icmp_ln28_13_reg_6050_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_13_reg_6050_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_13_fu_3768_p3() {
    select_ln28_13_fu_3768_p3 = (!icmp_ln28_14_reg_6060_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_14_reg_6060_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_14_fu_3811_p3() {
    select_ln28_14_fu_3811_p3 = (!icmp_ln28_15_reg_6070_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_15_reg_6070_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_15_fu_3820_p3() {
    select_ln28_15_fu_3820_p3 = (!icmp_ln28_16_reg_6080_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_16_reg_6080_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_16_fu_3863_p3() {
    select_ln28_16_fu_3863_p3 = (!icmp_ln28_17_reg_6090_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_17_reg_6090_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_17_fu_3872_p3() {
    select_ln28_17_fu_3872_p3 = (!icmp_ln28_18_reg_6100_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_18_reg_6100_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_18_fu_3915_p3() {
    select_ln28_18_fu_3915_p3 = (!icmp_ln28_19_reg_6115_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_19_reg_6115_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_19_fu_3924_p3() {
    select_ln28_19_fu_3924_p3 = (!icmp_ln28_20_reg_6125_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_20_reg_6125_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_1_fu_3456_p3() {
    select_ln28_1_fu_3456_p3 = (!icmp_ln28_2_reg_5940_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_2_reg_5940_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_20_fu_3056_p3() {
    select_ln28_20_fu_3056_p3 = (!icmp_ln28_1_fu_3044_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln28_1_fu_3044_p2.read()[0].to_bool())? ap_phi_mux_i_0_phi_fu_2876_p4.read(): add_ln28_17_fu_3050_p2.read());
}

void matrix_mult::thread_select_ln28_2_fu_3499_p3() {
    select_ln28_2_fu_3499_p3 = (!icmp_ln28_3_reg_5950_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_3_reg_5950_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_3_fu_3508_p3() {
    select_ln28_3_fu_3508_p3 = (!icmp_ln28_4_reg_5960_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_4_reg_5960_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_4_fu_3551_p3() {
    select_ln28_4_fu_3551_p3 = (!icmp_ln28_5_reg_5970_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_5_reg_5970_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_5_fu_3560_p3() {
    select_ln28_5_fu_3560_p3 = (!icmp_ln28_6_reg_5980_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_6_reg_5980_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_6_fu_3603_p3() {
    select_ln28_6_fu_3603_p3 = (!icmp_ln28_7_reg_5990_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_7_reg_5990_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_7_fu_3612_p3() {
    select_ln28_7_fu_3612_p3 = (!icmp_ln28_8_reg_6000_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_8_reg_6000_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_8_fu_3655_p3() {
    select_ln28_8_fu_3655_p3 = (!icmp_ln28_9_reg_6010_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_9_reg_6010_pp0_iter1_reg.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln28_9_fu_3664_p3() {
    select_ln28_9_fu_3664_p3 = (!icmp_ln28_10_reg_6020_pp0_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_10_reg_6020_pp0_iter1_reg.read()[0].to_bool())? a_0_q1.read(): a_1_q1.read());
}

void matrix_mult::thread_select_ln28_fu_3405_p3() {
    select_ln28_fu_3405_p3 = (!icmp_ln28_reg_6105.read()[0].is_01())? sc_lv<32>(): ((icmp_ln28_reg_6105.read()[0].to_bool())? a_0_q0.read(): a_1_q0.read());
}

void matrix_mult::thread_select_ln35_10_fu_4495_p3() {
    select_ln35_10_fu_4495_p3 = (!icmp_ln35_11_reg_6489_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_11_reg_6489_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_11_fu_4504_p3() {
    select_ln35_11_fu_4504_p3 = (!icmp_ln35_12_reg_6499_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_12_reg_6499_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_12_fu_4525_p3() {
    select_ln35_12_fu_4525_p3 = (!icmp_ln35_13_reg_6509_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_13_reg_6509_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_13_fu_4534_p3() {
    select_ln35_13_fu_4534_p3 = (!icmp_ln35_14_reg_6519_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_14_reg_6519_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_14_fu_4555_p3() {
    select_ln35_14_fu_4555_p3 = (!icmp_ln35_15_reg_6529_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_15_reg_6529_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_15_fu_4564_p3() {
    select_ln35_15_fu_4564_p3 = (!icmp_ln35_16_reg_6539_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_16_reg_6539_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_16_fu_4585_p3() {
    select_ln35_16_fu_4585_p3 = (!icmp_ln35_17_reg_6549_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_17_reg_6549_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_17_fu_4594_p3() {
    select_ln35_17_fu_4594_p3 = (!icmp_ln35_18_reg_6559_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_18_reg_6559_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_18_fu_4615_p3() {
    select_ln35_18_fu_4615_p3 = (!icmp_ln35_19_reg_6574_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_19_reg_6574_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_19_fu_4624_p3() {
    select_ln35_19_fu_4624_p3 = (!icmp_ln35_20_reg_6584_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_20_reg_6584_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_1_fu_4354_p3() {
    select_ln35_1_fu_4354_p3 = (!icmp_ln35_2_reg_6399_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_2_reg_6399_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_20_fu_3989_p3() {
    select_ln35_20_fu_3989_p3 = (!icmp_ln35_1_fu_3977_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln35_1_fu_3977_p2.read()[0].to_bool())? ap_phi_mux_i1_0_phi_fu_2887_p4.read(): add_ln35_17_fu_3983_p2.read());
}

void matrix_mult::thread_select_ln35_2_fu_4375_p3() {
    select_ln35_2_fu_4375_p3 = (!icmp_ln35_3_reg_6409_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_3_reg_6409_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_3_fu_4384_p3() {
    select_ln35_3_fu_4384_p3 = (!icmp_ln35_4_reg_6419_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_4_reg_6419_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_4_fu_4405_p3() {
    select_ln35_4_fu_4405_p3 = (!icmp_ln35_5_reg_6429_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_5_reg_6429_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_5_fu_4414_p3() {
    select_ln35_5_fu_4414_p3 = (!icmp_ln35_6_reg_6439_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_6_reg_6439_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_6_fu_4435_p3() {
    select_ln35_6_fu_4435_p3 = (!icmp_ln35_7_reg_6449_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_7_reg_6449_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_7_fu_4444_p3() {
    select_ln35_7_fu_4444_p3 = (!icmp_ln35_8_reg_6459_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_8_reg_6459_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_8_fu_4465_p3() {
    select_ln35_8_fu_4465_p3 = (!icmp_ln35_9_reg_6469_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_9_reg_6469_pp1_iter1_reg.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln35_9_fu_4474_p3() {
    select_ln35_9_fu_4474_p3 = (!icmp_ln35_10_reg_6479_pp1_iter1_reg.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_10_reg_6479_pp1_iter1_reg.read()[0].to_bool())? b_0_q1.read(): b_1_q1.read());
}

void matrix_mult::thread_select_ln35_fu_4338_p3() {
    select_ln35_fu_4338_p3 = (!icmp_ln35_reg_6564.read()[0].is_01())? sc_lv<32>(): ((icmp_ln35_reg_6564.read()[0].to_bool())? b_0_q0.read(): b_1_q0.read());
}

void matrix_mult::thread_select_ln52_10_fu_4869_p3() {
    select_ln52_10_fu_4869_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_9_q0.read(): b_buff_1_9_q0.read());
}

void matrix_mult::thread_select_ln52_11_fu_4876_p3() {
    select_ln52_11_fu_4876_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_10_q0.read(): b_buff_1_10_q0.read());
}

void matrix_mult::thread_select_ln52_12_fu_4883_p3() {
    select_ln52_12_fu_4883_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_11_q0.read(): b_buff_1_11_q0.read());
}

void matrix_mult::thread_select_ln52_13_fu_4890_p3() {
    select_ln52_13_fu_4890_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_12_q0.read(): b_buff_1_12_q0.read());
}

void matrix_mult::thread_select_ln52_14_fu_4897_p3() {
    select_ln52_14_fu_4897_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_13_q0.read(): b_buff_1_13_q0.read());
}

void matrix_mult::thread_select_ln52_15_fu_4904_p3() {
    select_ln52_15_fu_4904_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_14_q0.read(): b_buff_1_14_q0.read());
}

void matrix_mult::thread_select_ln52_16_fu_4911_p3() {
    select_ln52_16_fu_4911_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_15_q0.read(): b_buff_1_15_q0.read());
}

void matrix_mult::thread_select_ln52_17_fu_4918_p3() {
    select_ln52_17_fu_4918_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_16_q0.read(): b_buff_1_16_q0.read());
}

void matrix_mult::thread_select_ln52_18_fu_4925_p3() {
    select_ln52_18_fu_4925_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_17_q0.read(): b_buff_1_17_q0.read());
}

void matrix_mult::thread_select_ln52_19_fu_4932_p3() {
    select_ln52_19_fu_4932_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_18_q0.read(): b_buff_1_18_q0.read());
}

void matrix_mult::thread_select_ln52_1_fu_4806_p3() {
    select_ln52_1_fu_4806_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_0_q0.read(): b_buff_1_0_q0.read());
}

void matrix_mult::thread_select_ln52_20_fu_4939_p3() {
    select_ln52_20_fu_4939_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_19_q0.read(): b_buff_1_19_q0.read());
}

void matrix_mult::thread_select_ln52_21_fu_4674_p3() {
    select_ln52_21_fu_4674_p3 = (!icmp_ln52_fu_4662_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln52_fu_4662_p2.read()[0].to_bool())? m_0_reg_2894.read(): add_ln52_20_fu_4668_p2.read());
}

void matrix_mult::thread_select_ln52_22_fu_4747_p3() {
    select_ln52_22_fu_4747_p3 = (!icmp_ln52_1_fu_4735_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln52_1_fu_4735_p2.read()[0].to_bool())? n_0_reg_2917.read(): add_ln52_23_fu_4741_p2.read());
}

void matrix_mult::thread_select_ln52_2_fu_4813_p3() {
    select_ln52_2_fu_4813_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_1_q0.read(): b_buff_1_1_q0.read());
}

void matrix_mult::thread_select_ln52_3_fu_4820_p3() {
    select_ln52_3_fu_4820_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_2_q0.read(): b_buff_1_2_q0.read());
}

void matrix_mult::thread_select_ln52_4_fu_4827_p3() {
    select_ln52_4_fu_4827_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_3_q0.read(): b_buff_1_3_q0.read());
}

void matrix_mult::thread_select_ln52_5_fu_4834_p3() {
    select_ln52_5_fu_4834_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_4_q0.read(): b_buff_1_4_q0.read());
}

void matrix_mult::thread_select_ln52_6_fu_4841_p3() {
    select_ln52_6_fu_4841_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_5_q0.read(): b_buff_1_5_q0.read());
}

void matrix_mult::thread_select_ln52_7_fu_4848_p3() {
    select_ln52_7_fu_4848_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_6_q0.read(): b_buff_1_6_q0.read());
}

void matrix_mult::thread_select_ln52_8_fu_4855_p3() {
    select_ln52_8_fu_4855_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_7_q0.read(): b_buff_1_7_q0.read());
}

void matrix_mult::thread_select_ln52_9_fu_4862_p3() {
    select_ln52_9_fu_4862_p3 = (!icmp_ln52_1_reg_7038.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_1_reg_7038.read()[0].to_bool())? b_buff_0_8_q0.read(): b_buff_1_8_q0.read());
}

void matrix_mult::thread_select_ln52_fu_4799_p3() {
    select_ln52_fu_4799_p3 = (!icmp_ln52_reg_7009.read()[0].is_01())? sc_lv<32>(): ((icmp_ln52_reg_7009.read()[0].to_bool())? a_buff_0_q0.read(): a_buff_1_q0.read());
}

void matrix_mult::thread_select_ln65_20_fu_5207_p3() {
    select_ln65_20_fu_5207_p3 = (!icmp_ln65_fu_5195_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln65_fu_5195_p2.read()[0].to_bool())? ap_phi_mux_i5_0_phi_fu_2943_p4.read(): add_ln65_17_fu_5201_p2.read());
}

void matrix_mult::thread_sext_ln28_10_fu_3794_p1() {
    sext_ln28_10_fu_3794_p1 = esl_sext<64,9>(add_ln28_29_fu_3789_p2.read());
}

void matrix_mult::thread_sext_ln28_11_fu_3805_p1() {
    sext_ln28_11_fu_3805_p1 = esl_sext<64,9>(add_ln28_30_fu_3800_p2.read());
}

void matrix_mult::thread_sext_ln28_12_fu_3846_p1() {
    sext_ln28_12_fu_3846_p1 = esl_sext<64,9>(add_ln28_31_fu_3841_p2.read());
}

void matrix_mult::thread_sext_ln28_13_fu_3857_p1() {
    sext_ln28_13_fu_3857_p1 = esl_sext<64,9>(add_ln28_32_fu_3852_p2.read());
}

void matrix_mult::thread_sext_ln28_14_fu_3898_p1() {
    sext_ln28_14_fu_3898_p1 = esl_sext<64,9>(add_ln28_33_fu_3893_p2.read());
}

void matrix_mult::thread_sext_ln28_15_fu_3909_p1() {
    sext_ln28_15_fu_3909_p1 = esl_sext<64,9>(add_ln28_34_fu_3904_p2.read());
}

void matrix_mult::thread_sext_ln28_1_fu_3545_p1() {
    sext_ln28_1_fu_3545_p1 = esl_sext<64,9>(add_ln28_20_fu_3540_p2.read());
}

void matrix_mult::thread_sext_ln28_2_fu_3586_p1() {
    sext_ln28_2_fu_3586_p1 = esl_sext<64,9>(add_ln28_21_fu_3581_p2.read());
}

void matrix_mult::thread_sext_ln28_3_fu_3597_p1() {
    sext_ln28_3_fu_3597_p1 = esl_sext<64,9>(add_ln28_22_fu_3592_p2.read());
}

void matrix_mult::thread_sext_ln28_4_fu_3638_p1() {
    sext_ln28_4_fu_3638_p1 = esl_sext<64,9>(add_ln28_23_fu_3633_p2.read());
}

void matrix_mult::thread_sext_ln28_5_fu_3649_p1() {
    sext_ln28_5_fu_3649_p1 = esl_sext<64,9>(add_ln28_24_fu_3644_p2.read());
}

void matrix_mult::thread_sext_ln28_6_fu_3690_p1() {
    sext_ln28_6_fu_3690_p1 = esl_sext<64,9>(add_ln28_25_fu_3685_p2.read());
}

void matrix_mult::thread_sext_ln28_7_fu_3701_p1() {
    sext_ln28_7_fu_3701_p1 = esl_sext<64,9>(add_ln28_26_fu_3696_p2.read());
}

void matrix_mult::thread_sext_ln28_8_fu_3742_p1() {
    sext_ln28_8_fu_3742_p1 = esl_sext<64,9>(add_ln28_27_fu_3737_p2.read());
}

void matrix_mult::thread_sext_ln28_9_fu_3753_p1() {
    sext_ln28_9_fu_3753_p1 = esl_sext<64,9>(add_ln28_28_fu_3748_p2.read());
}

void matrix_mult::thread_sext_ln28_fu_3534_p1() {
    sext_ln28_fu_3534_p1 = esl_sext<64,9>(add_ln28_19_fu_3529_p2.read());
}

void matrix_mult::thread_sext_ln65_10_fu_5781_p1() {
    sext_ln65_10_fu_5781_p1 = esl_sext<64,9>(add_ln65_29_fu_5776_p2.read());
}

void matrix_mult::thread_sext_ln65_11_fu_5792_p1() {
    sext_ln65_11_fu_5792_p1 = esl_sext<64,9>(add_ln65_30_fu_5787_p2.read());
}

void matrix_mult::thread_sext_ln65_12_fu_5813_p1() {
    sext_ln65_12_fu_5813_p1 = esl_sext<64,9>(add_ln65_31_fu_5808_p2.read());
}

void matrix_mult::thread_sext_ln65_13_fu_5824_p1() {
    sext_ln65_13_fu_5824_p1 = esl_sext<64,9>(add_ln65_32_fu_5819_p2.read());
}

void matrix_mult::thread_sext_ln65_14_fu_5845_p1() {
    sext_ln65_14_fu_5845_p1 = esl_sext<64,9>(add_ln65_33_fu_5840_p2.read());
}

void matrix_mult::thread_sext_ln65_15_fu_5856_p1() {
    sext_ln65_15_fu_5856_p1 = esl_sext<64,9>(add_ln65_34_fu_5851_p2.read());
}

void matrix_mult::thread_sext_ln65_1_fu_5642_p1() {
    sext_ln65_1_fu_5642_p1 = esl_sext<64,9>(add_ln65_20_fu_5637_p2.read());
}

void matrix_mult::thread_sext_ln65_2_fu_5658_p1() {
    sext_ln65_2_fu_5658_p1 = esl_sext<64,9>(add_ln65_21_fu_5653_p2.read());
}

void matrix_mult::thread_sext_ln65_3_fu_5669_p1() {
    sext_ln65_3_fu_5669_p1 = esl_sext<64,9>(add_ln65_22_fu_5664_p2.read());
}

void matrix_mult::thread_sext_ln65_4_fu_5685_p1() {
    sext_ln65_4_fu_5685_p1 = esl_sext<64,9>(add_ln65_23_fu_5680_p2.read());
}

void matrix_mult::thread_sext_ln65_5_fu_5696_p1() {
    sext_ln65_5_fu_5696_p1 = esl_sext<64,9>(add_ln65_24_fu_5691_p2.read());
}

void matrix_mult::thread_sext_ln65_6_fu_5717_p1() {
    sext_ln65_6_fu_5717_p1 = esl_sext<64,9>(add_ln65_25_fu_5712_p2.read());
}

void matrix_mult::thread_sext_ln65_7_fu_5728_p1() {
    sext_ln65_7_fu_5728_p1 = esl_sext<64,9>(add_ln65_26_fu_5723_p2.read());
}

void matrix_mult::thread_sext_ln65_8_fu_5749_p1() {
    sext_ln65_8_fu_5749_p1 = esl_sext<64,9>(add_ln65_27_fu_5744_p2.read());
}

void matrix_mult::thread_sext_ln65_9_fu_5760_p1() {
    sext_ln65_9_fu_5760_p1 = esl_sext<64,9>(add_ln65_28_fu_5755_p2.read());
}

void matrix_mult::thread_sext_ln65_fu_5631_p1() {
    sext_ln65_fu_5631_p1 = esl_sext<64,9>(add_ln65_19_fu_5626_p2.read());
}

void matrix_mult::thread_shl_ln1_fu_3945_p3() {
    shl_ln1_fu_3945_p3 = esl_concat<5,4>(ap_phi_mux_i1_0_phi_fu_2887_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln28_1_fu_3020_p3() {
    shl_ln28_1_fu_3020_p3 = esl_concat<5,2>(ap_phi_mux_i_0_phi_fu_2876_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln2_fu_5169_p3() {
    shl_ln2_fu_5169_p3 = esl_concat<5,4>(ap_phi_mux_i5_0_phi_fu_2943_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_shl_ln35_1_fu_3953_p3() {
    shl_ln35_1_fu_3953_p3 = esl_concat<5,2>(ap_phi_mux_i1_0_phi_fu_2887_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln65_1_fu_5177_p3() {
    shl_ln65_1_fu_5177_p3 = esl_concat<5,2>(ap_phi_mux_i5_0_phi_fu_2943_p4.read(), ap_const_lv2_0);
}

void matrix_mult::thread_shl_ln_fu_3012_p3() {
    shl_ln_fu_3012_p3 = esl_concat<5,4>(ap_phi_mux_i_0_phi_fu_2876_p4.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_4_fu_3414_p3() {
    tmp_4_fu_3414_p3 = esl_concat<5,4>(select_ln28_20_reg_5929_pp0_iter1_reg.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_5_fu_3421_p3() {
    tmp_5_fu_3421_p3 = esl_concat<5,2>(select_ln28_20_reg_5929_pp0_iter1_reg.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_6_fu_5215_p3() {
    tmp_6_fu_5215_p3 = esl_concat<5,4>(select_ln65_20_fu_5207_p3.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_7_fu_5223_p3() {
    tmp_7_fu_5223_p3 = esl_concat<5,2>(select_ln65_20_fu_5207_p3.read(), ap_const_lv2_0);
}

void matrix_mult::thread_tmp_8_fu_4682_p3() {
    tmp_8_fu_4682_p3 = esl_concat<5,4>(select_ln52_21_fu_4674_p3.read(), ap_const_lv4_0);
}

void matrix_mult::thread_tmp_9_fu_4690_p3() {
    tmp_9_fu_4690_p3 = esl_concat<5,2>(select_ln52_21_fu_4674_p3.read(), ap_const_lv2_0);
}

void matrix_mult::thread_zext_ln28_10_fu_3627_p1() {
    zext_ln28_10_fu_3627_p1 = esl_zext<64,9>(grp_fu_3206_p2.read());
}

void matrix_mult::thread_zext_ln28_11_fu_3673_p1() {
    zext_ln28_11_fu_3673_p1 = esl_zext<64,9>(grp_fu_3223_p2.read());
}

void matrix_mult::thread_zext_ln28_12_fu_3679_p1() {
    zext_ln28_12_fu_3679_p1 = esl_zext<64,9>(grp_fu_3240_p2.read());
}

void matrix_mult::thread_zext_ln28_13_fu_3725_p1() {
    zext_ln28_13_fu_3725_p1 = esl_zext<64,9>(grp_fu_3257_p2.read());
}

void matrix_mult::thread_zext_ln28_14_fu_3731_p1() {
    zext_ln28_14_fu_3731_p1 = esl_zext<64,9>(grp_fu_3274_p2.read());
}

void matrix_mult::thread_zext_ln28_15_fu_3777_p1() {
    zext_ln28_15_fu_3777_p1 = esl_zext<64,9>(grp_fu_3291_p2.read());
}

void matrix_mult::thread_zext_ln28_16_fu_3783_p1() {
    zext_ln28_16_fu_3783_p1 = esl_zext<64,9>(grp_fu_3308_p2.read());
}

void matrix_mult::thread_zext_ln28_17_fu_3829_p1() {
    zext_ln28_17_fu_3829_p1 = esl_zext<64,9>(grp_fu_3325_p2.read());
}

void matrix_mult::thread_zext_ln28_18_fu_3835_p1() {
    zext_ln28_18_fu_3835_p1 = esl_zext<64,9>(grp_fu_3342_p2.read());
}

void matrix_mult::thread_zext_ln28_19_fu_3881_p1() {
    zext_ln28_19_fu_3881_p1 = esl_zext<64,9>(grp_fu_3364_p2.read());
}

void matrix_mult::thread_zext_ln28_1_fu_3028_p1() {
    zext_ln28_1_fu_3028_p1 = esl_zext<9,7>(shl_ln28_1_fu_3020_p3.read());
}

void matrix_mult::thread_zext_ln28_20_fu_3887_p1() {
    zext_ln28_20_fu_3887_p1 = esl_zext<64,9>(grp_fu_3381_p2.read());
}

void matrix_mult::thread_zext_ln28_21_fu_3428_p1() {
    zext_ln28_21_fu_3428_p1 = esl_zext<9,7>(tmp_5_fu_3421_p3.read());
}

void matrix_mult::thread_zext_ln28_22_fu_3438_p1() {
    zext_ln28_22_fu_3438_p1 = esl_zext<64,9>(add_ln28_18_fu_3432_p2.read());
}

void matrix_mult::thread_zext_ln28_23_fu_3450_p1() {
    zext_ln28_23_fu_3450_p1 = esl_zext<64,9>(or_ln28_3_fu_3444_p2.read());
}

void matrix_mult::thread_zext_ln28_24_fu_3482_p1() {
    zext_ln28_24_fu_3482_p1 = esl_zext<64,9>(or_ln28_4_fu_3477_p2.read());
}

void matrix_mult::thread_zext_ln28_25_fu_3493_p1() {
    zext_ln28_25_fu_3493_p1 = esl_zext<64,9>(or_ln28_5_fu_3488_p2.read());
}

void matrix_mult::thread_zext_ln28_2_fu_3399_p1() {
    zext_ln28_2_fu_3399_p1 = esl_zext<64,9>(grp_fu_3070_p2.read());
}

void matrix_mult::thread_zext_ln28_3_fu_3465_p1() {
    zext_ln28_3_fu_3465_p1 = esl_zext<64,9>(grp_fu_3087_p2.read());
}

void matrix_mult::thread_zext_ln28_4_fu_3471_p1() {
    zext_ln28_4_fu_3471_p1 = esl_zext<64,9>(grp_fu_3104_p2.read());
}

void matrix_mult::thread_zext_ln28_5_fu_3517_p1() {
    zext_ln28_5_fu_3517_p1 = esl_zext<64,9>(grp_fu_3121_p2.read());
}

void matrix_mult::thread_zext_ln28_6_fu_3523_p1() {
    zext_ln28_6_fu_3523_p1 = esl_zext<64,9>(grp_fu_3138_p2.read());
}

void matrix_mult::thread_zext_ln28_7_fu_3569_p1() {
    zext_ln28_7_fu_3569_p1 = esl_zext<64,9>(grp_fu_3155_p2.read());
}

void matrix_mult::thread_zext_ln28_8_fu_3575_p1() {
    zext_ln28_8_fu_3575_p1 = esl_zext<64,9>(grp_fu_3172_p2.read());
}

void matrix_mult::thread_zext_ln28_9_fu_3621_p1() {
    zext_ln28_9_fu_3621_p1 = esl_zext<64,9>(grp_fu_3189_p2.read());
}

void matrix_mult::thread_zext_ln28_fu_3393_p1() {
    zext_ln28_fu_3393_p1 = esl_zext<64,9>(grp_fu_3038_p2.read());
}

void matrix_mult::thread_zext_ln35_10_fu_4459_p1() {
    zext_ln35_10_fu_4459_p1 = esl_zext<64,9>(grp_fu_4139_p2.read());
}

void matrix_mult::thread_zext_ln35_11_fu_4483_p1() {
    zext_ln35_11_fu_4483_p1 = esl_zext<64,9>(grp_fu_4156_p2.read());
}

void matrix_mult::thread_zext_ln35_12_fu_4489_p1() {
    zext_ln35_12_fu_4489_p1 = esl_zext<64,9>(grp_fu_4173_p2.read());
}

void matrix_mult::thread_zext_ln35_13_fu_4513_p1() {
    zext_ln35_13_fu_4513_p1 = esl_zext<64,9>(grp_fu_4190_p2.read());
}

void matrix_mult::thread_zext_ln35_14_fu_4519_p1() {
    zext_ln35_14_fu_4519_p1 = esl_zext<64,9>(grp_fu_4207_p2.read());
}

void matrix_mult::thread_zext_ln35_15_fu_4543_p1() {
    zext_ln35_15_fu_4543_p1 = esl_zext<64,9>(grp_fu_4224_p2.read());
}

void matrix_mult::thread_zext_ln35_16_fu_4549_p1() {
    zext_ln35_16_fu_4549_p1 = esl_zext<64,9>(grp_fu_4241_p2.read());
}

void matrix_mult::thread_zext_ln35_17_fu_4573_p1() {
    zext_ln35_17_fu_4573_p1 = esl_zext<64,9>(grp_fu_4258_p2.read());
}

void matrix_mult::thread_zext_ln35_18_fu_4579_p1() {
    zext_ln35_18_fu_4579_p1 = esl_zext<64,9>(grp_fu_4275_p2.read());
}

void matrix_mult::thread_zext_ln35_19_fu_4603_p1() {
    zext_ln35_19_fu_4603_p1 = esl_zext<64,9>(grp_fu_4297_p2.read());
}

void matrix_mult::thread_zext_ln35_1_fu_4347_p1() {
    zext_ln35_1_fu_4347_p1 = esl_zext<64,5>(select_ln35_20_reg_6389_pp1_iter1_reg.read());
}

void matrix_mult::thread_zext_ln35_20_fu_4609_p1() {
    zext_ln35_20_fu_4609_p1 = esl_zext<64,9>(grp_fu_4314_p2.read());
}

void matrix_mult::thread_zext_ln35_21_fu_3961_p1() {
    zext_ln35_21_fu_3961_p1 = esl_zext<9,7>(shl_ln35_1_fu_3953_p3.read());
}

void matrix_mult::thread_zext_ln35_2_fu_4332_p1() {
    zext_ln35_2_fu_4332_p1 = esl_zext<64,9>(grp_fu_4003_p2.read());
}

void matrix_mult::thread_zext_ln35_3_fu_4363_p1() {
    zext_ln35_3_fu_4363_p1 = esl_zext<64,9>(grp_fu_4020_p2.read());
}

void matrix_mult::thread_zext_ln35_4_fu_4369_p1() {
    zext_ln35_4_fu_4369_p1 = esl_zext<64,9>(grp_fu_4037_p2.read());
}

void matrix_mult::thread_zext_ln35_5_fu_4393_p1() {
    zext_ln35_5_fu_4393_p1 = esl_zext<64,9>(grp_fu_4054_p2.read());
}

void matrix_mult::thread_zext_ln35_6_fu_4399_p1() {
    zext_ln35_6_fu_4399_p1 = esl_zext<64,9>(grp_fu_4071_p2.read());
}

void matrix_mult::thread_zext_ln35_7_fu_4423_p1() {
    zext_ln35_7_fu_4423_p1 = esl_zext<64,9>(grp_fu_4088_p2.read());
}

void matrix_mult::thread_zext_ln35_8_fu_4429_p1() {
    zext_ln35_8_fu_4429_p1 = esl_zext<64,9>(grp_fu_4105_p2.read());
}

void matrix_mult::thread_zext_ln35_9_fu_4453_p1() {
    zext_ln35_9_fu_4453_p1 = esl_zext<64,9>(grp_fu_4122_p2.read());
}

void matrix_mult::thread_zext_ln35_fu_4326_p1() {
    zext_ln35_fu_4326_p1 = esl_zext<64,9>(grp_fu_3971_p2.read());
}

void matrix_mult::thread_zext_ln45_fu_4657_p1() {
    zext_ln45_fu_4657_p1 = esl_zext<64,5>(o_0_reg_2906.read());
}

void matrix_mult::thread_zext_ln52_1_fu_4720_p1() {
    zext_ln52_1_fu_4720_p1 = esl_zext<9,5>(n_0_reg_2917.read());
}

void matrix_mult::thread_zext_ln52_2_fu_4755_p1() {
    zext_ln52_2_fu_4755_p1 = esl_zext<64,5>(select_ln52_22_fu_4747_p3.read());
}

void matrix_mult::thread_zext_ln52_3_fu_4729_p1() {
    zext_ln52_3_fu_4729_p1 = esl_zext<64,9>(add_ln52_22_fu_4724_p2.read());
}

void matrix_mult::thread_zext_ln52_fu_4698_p1() {
    zext_ln52_fu_4698_p1 = esl_zext<9,7>(tmp_9_fu_4690_p3.read());
}

void matrix_mult::thread_zext_ln57_1_fu_5143_p1() {
    zext_ln57_1_fu_5143_p1 = esl_zext<9,5>(o4_0_reg_2928.read());
}

void matrix_mult::thread_zext_ln57_2_fu_5152_p1() {
    zext_ln57_2_fu_5152_p1 = esl_zext<64,9>(add_ln57_reg_7594.read());
}

void matrix_mult::thread_zext_ln57_fu_5138_p1() {
    zext_ln57_fu_5138_p1 = esl_zext<64,5>(o4_0_reg_2928.read());
}

void matrix_mult::thread_zext_ln65_10_fu_5771_p1() {
    zext_ln65_10_fu_5771_p1 = esl_zext<64,9>(urem_ln65_9_reg_7987.read());
}

void matrix_mult::thread_zext_ln65_11_fu_5798_p1() {
    zext_ln65_11_fu_5798_p1 = esl_zext<64,9>(urem_ln65_10_reg_8012.read());
}

void matrix_mult::thread_zext_ln65_12_fu_5803_p1() {
    zext_ln65_12_fu_5803_p1 = esl_zext<64,9>(urem_ln65_11_reg_8017.read());
}

void matrix_mult::thread_zext_ln65_13_fu_5830_p1() {
    zext_ln65_13_fu_5830_p1 = esl_zext<64,9>(urem_ln65_12_reg_8042.read());
}

void matrix_mult::thread_zext_ln65_14_fu_5835_p1() {
    zext_ln65_14_fu_5835_p1 = esl_zext<64,9>(urem_ln65_13_reg_8047.read());
}

void matrix_mult::thread_zext_ln65_15_fu_5862_p1() {
    zext_ln65_15_fu_5862_p1 = esl_zext<64,9>(urem_ln65_14_reg_8072.read());
}

void matrix_mult::thread_zext_ln65_16_fu_5867_p1() {
    zext_ln65_16_fu_5867_p1 = esl_zext<64,9>(urem_ln65_15_reg_8077.read());
}

void matrix_mult::thread_zext_ln65_17_fu_5872_p1() {
    zext_ln65_17_fu_5872_p1 = esl_zext<64,9>(urem_ln65_16_reg_8102.read());
}

void matrix_mult::thread_zext_ln65_18_fu_5877_p1() {
    zext_ln65_18_fu_5877_p1 = esl_zext<64,9>(urem_ln65_17_reg_8107.read());
}

void matrix_mult::thread_zext_ln65_19_fu_5882_p1() {
    zext_ln65_19_fu_5882_p1 = esl_zext<64,9>(urem_ln65_18_reg_8132.read());
}

void matrix_mult::thread_zext_ln65_1_fu_5593_p1() {
    zext_ln65_1_fu_5593_p1 = esl_zext<64,9>(grp_fu_5247_p2.read());
}

void matrix_mult::thread_zext_ln65_20_fu_5887_p1() {
    zext_ln65_20_fu_5887_p1 = esl_zext<64,9>(urem_ln65_19_reg_8137.read());
}

void matrix_mult::thread_zext_ln65_21_fu_5231_p1() {
    zext_ln65_21_fu_5231_p1 = esl_zext<9,7>(tmp_7_fu_5223_p3.read());
}

void matrix_mult::thread_zext_ln65_22_fu_5241_p1() {
    zext_ln65_22_fu_5241_p1 = esl_zext<64,9>(add_ln65_18_fu_5235_p2.read());
}

void matrix_mult::thread_zext_ln65_23_fu_5587_p1() {
    zext_ln65_23_fu_5587_p1 = esl_zext<64,9>(or_ln65_3_fu_5582_p2.read());
}

void matrix_mult::thread_zext_ln65_24_fu_5604_p1() {
    zext_ln65_24_fu_5604_p1 = esl_zext<64,9>(or_ln65_4_fu_5599_p2.read());
}

void matrix_mult::thread_zext_ln65_25_fu_5615_p1() {
    zext_ln65_25_fu_5615_p1 = esl_zext<64,9>(or_ln65_5_fu_5610_p2.read());
}

void matrix_mult::thread_zext_ln65_2_fu_5621_p1() {
    zext_ln65_2_fu_5621_p1 = esl_zext<64,9>(urem_ln65_1_reg_7867.read());
}

void matrix_mult::thread_zext_ln65_3_fu_5648_p1() {
    zext_ln65_3_fu_5648_p1 = esl_zext<64,9>(urem_ln65_2_reg_7892.read());
}

void matrix_mult::thread_zext_ln65_4_fu_5675_p1() {
    zext_ln65_4_fu_5675_p1 = esl_zext<64,9>(urem_ln65_3_reg_7897.read());
}

void matrix_mult::thread_zext_ln65_5_fu_5702_p1() {
    zext_ln65_5_fu_5702_p1 = esl_zext<64,9>(urem_ln65_4_reg_7922.read());
}

void matrix_mult::thread_zext_ln65_6_fu_5707_p1() {
    zext_ln65_6_fu_5707_p1 = esl_zext<64,9>(urem_ln65_5_reg_7927.read());
}

void matrix_mult::thread_zext_ln65_7_fu_5734_p1() {
    zext_ln65_7_fu_5734_p1 = esl_zext<64,9>(urem_ln65_6_reg_7952.read());
}

void matrix_mult::thread_zext_ln65_8_fu_5739_p1() {
    zext_ln65_8_fu_5739_p1 = esl_zext<64,9>(urem_ln65_7_reg_7957.read());
}

void matrix_mult::thread_zext_ln65_9_fu_5766_p1() {
    zext_ln65_9_fu_5766_p1 = esl_zext<64,9>(urem_ln65_8_reg_7982.read());
}

void matrix_mult::thread_zext_ln65_fu_5185_p1() {
    zext_ln65_fu_5185_p1 = esl_zext<9,7>(shl_ln65_1_fu_5177_p3.read());
}

}

