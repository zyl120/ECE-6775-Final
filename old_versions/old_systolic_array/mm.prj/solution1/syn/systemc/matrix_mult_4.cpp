#include "matrix_mult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mult::thread_a_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_address0 =  (sc_lv<7>) (zext_ln23_9_fu_13867_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_address0 =  (sc_lv<7>) (zext_ln23_7_fu_13847_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_address0 =  (sc_lv<7>) (zext_ln23_5_fu_13827_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_address0 =  (sc_lv<7>) (zext_ln23_3_fu_13807_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_address0 =  (sc_lv<7>) (zext_ln23_1_fu_13780_p1.read());
        } else {
            a_address0 = "XXXXXXX";
        }
    } else {
        a_address0 = "XXXXXXX";
    }
}

void matrix_mult::thread_a_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_address1 =  (sc_lv<7>) (zext_ln23_10_fu_13877_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_address1 =  (sc_lv<7>) (zext_ln23_8_fu_13857_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_address1 =  (sc_lv<7>) (zext_ln23_6_fu_13837_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_address1 =  (sc_lv<7>) (zext_ln23_4_fu_13817_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_address1 =  (sc_lv<7>) (zext_ln23_2_fu_13791_p1.read());
        } else {
            a_address1 = "XXXXXXX";
        }
    } else {
        a_address1 = "XXXXXXX";
    }
}

void matrix_mult::thread_a_buff_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_0_address0 =  (sc_lv<4>) (zext_ln23_fu_13796_p1.read());
    } else {
        a_buff_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_0_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        a_buff_0_ce0 = ap_const_logic_1;
    } else {
        a_buff_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_0_ce1 = ap_const_logic_1;
    } else {
        a_buff_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0))) {
        a_buff_0_we0 = ap_const_logic_1;
    } else {
        a_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        a_buff_1_address0 =  (sc_lv<4>) (zext_ln23_fu_13796_p1.read());
    } else {
        a_buff_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_1_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        a_buff_1_ce0 = ap_const_logic_1;
    } else {
        a_buff_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_1_ce1 = ap_const_logic_1;
    } else {
        a_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0))) {
        a_buff_1_we0 = ap_const_logic_1;
    } else {
        a_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_buff_2_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_2_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        a_buff_2_ce0 = ap_const_logic_1;
    } else {
        a_buff_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_2_ce1 = ap_const_logic_1;
    } else {
        a_buff_2_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        a_buff_2_we0 = ap_const_logic_1;
    } else {
        a_buff_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        a_buff_3_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_3_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        a_buff_3_ce0 = ap_const_logic_1;
    } else {
        a_buff_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_3_ce1 = ap_const_logic_1;
    } else {
        a_buff_3_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        a_buff_3_we0 = ap_const_logic_1;
    } else {
        a_buff_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_4_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_4_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        a_buff_4_ce0 = ap_const_logic_1;
    } else {
        a_buff_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_4_ce1 = ap_const_logic_1;
    } else {
        a_buff_4_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        a_buff_4_we0 = ap_const_logic_1;
    } else {
        a_buff_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        a_buff_5_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_5_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        a_buff_5_ce0 = ap_const_logic_1;
    } else {
        a_buff_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_5_ce1 = ap_const_logic_1;
    } else {
        a_buff_5_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        a_buff_5_we0 = ap_const_logic_1;
    } else {
        a_buff_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_6_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_6_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        a_buff_6_ce0 = ap_const_logic_1;
    } else {
        a_buff_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_6_ce1 = ap_const_logic_1;
    } else {
        a_buff_6_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        a_buff_6_we0 = ap_const_logic_1;
    } else {
        a_buff_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        a_buff_7_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_7_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        a_buff_7_ce0 = ap_const_logic_1;
    } else {
        a_buff_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_7_ce1 = ap_const_logic_1;
    } else {
        a_buff_7_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        a_buff_7_we0 = ap_const_logic_1;
    } else {
        a_buff_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        a_buff_8_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_8_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_8_ce0 = ap_const_logic_1;
    } else {
        a_buff_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_8_ce1 = ap_const_logic_1;
    } else {
        a_buff_8_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        a_buff_8_we0 = ap_const_logic_1;
    } else {
        a_buff_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        a_buff_9_address0 =  (sc_lv<4>) (zext_ln23_reg_17447.read());
    } else {
        a_buff_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        a_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        a_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        a_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        a_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        a_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_buff_9_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_a_buff_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        a_buff_9_ce0 = ap_const_logic_1;
    } else {
        a_buff_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        a_buff_9_ce1 = ap_const_logic_1;
    } else {
        a_buff_9_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_buff_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        a_buff_9_we0 = ap_const_logic_1;
    } else {
        a_buff_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_a_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        a_ce1 = ap_const_logic_1;
    } else {
        a_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_add_ln13_1_fu_5570_p2() {
    add_ln13_1_fu_5570_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln13_1_reg_4453.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrix_mult::thread_add_ln13_fu_5510_p2() {
    add_ln13_fu_5510_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln13_reg_3441.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrix_mult::thread_add_ln23_1_fu_13802_p2() {
    add_ln23_1_fu_13802_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_2.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_2));
}

void matrix_mult::thread_add_ln23_2_fu_13812_p2() {
    add_ln23_2_fu_13812_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_3.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_3));
}

void matrix_mult::thread_add_ln23_3_fu_13822_p2() {
    add_ln23_3_fu_13822_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_4.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_4));
}

void matrix_mult::thread_add_ln23_4_fu_13832_p2() {
    add_ln23_4_fu_13832_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_5.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_5));
}

void matrix_mult::thread_add_ln23_5_fu_13842_p2() {
    add_ln23_5_fu_13842_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_6.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_6));
}

void matrix_mult::thread_add_ln23_6_fu_13852_p2() {
    add_ln23_6_fu_13852_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_7.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_7));
}

void matrix_mult::thread_add_ln23_7_fu_13862_p2() {
    add_ln23_7_fu_13862_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void matrix_mult::thread_add_ln23_8_fu_13872_p2() {
    add_ln23_8_fu_13872_p2 = (!add_ln23_reg_17425.read().is_01() || !ap_const_lv7_9.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln23_reg_17425.read()) + sc_biguint<7>(ap_const_lv7_9));
}

void matrix_mult::thread_add_ln23_fu_13774_p2() {
    add_ln23_fu_13774_p2 = (!zext_ln23_11_fu_13770_p1.read().is_01() || !shl_ln_fu_13754_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln23_11_fu_13770_p1.read()) + sc_biguint<7>(shl_ln_fu_13754_p3.read()));
}

void matrix_mult::thread_add_ln30_1_fu_13936_p2() {
    add_ln30_1_fu_13936_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_2.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_2));
}

void matrix_mult::thread_add_ln30_2_fu_13946_p2() {
    add_ln30_2_fu_13946_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_3.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_3));
}

void matrix_mult::thread_add_ln30_3_fu_13956_p2() {
    add_ln30_3_fu_13956_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_4.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_4));
}

void matrix_mult::thread_add_ln30_4_fu_13966_p2() {
    add_ln30_4_fu_13966_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_5.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_5));
}

void matrix_mult::thread_add_ln30_5_fu_13976_p2() {
    add_ln30_5_fu_13976_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_6.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_6));
}

void matrix_mult::thread_add_ln30_6_fu_13986_p2() {
    add_ln30_6_fu_13986_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_7.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_7));
}

void matrix_mult::thread_add_ln30_7_fu_13996_p2() {
    add_ln30_7_fu_13996_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void matrix_mult::thread_add_ln30_8_fu_14006_p2() {
    add_ln30_8_fu_14006_p2 = (!add_ln30_reg_18008.read().is_01() || !ap_const_lv7_9.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln30_reg_18008.read()) + sc_biguint<7>(ap_const_lv7_9));
}

void matrix_mult::thread_add_ln30_fu_13914_p2() {
    add_ln30_fu_13914_p2 = (!zext_ln30_10_fu_13910_p1.read().is_01() || !shl_ln1_fu_13894_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln30_10_fu_13910_p1.read()) + sc_biguint<7>(shl_ln1_fu_13894_p3.read()));
}

void matrix_mult::thread_add_ln59_1_fu_15514_p2() {
    add_ln59_1_fu_15514_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_2.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_2));
}

void matrix_mult::thread_add_ln59_2_fu_15524_p2() {
    add_ln59_2_fu_15524_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_3.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_3));
}

void matrix_mult::thread_add_ln59_3_fu_15534_p2() {
    add_ln59_3_fu_15534_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_4.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_4));
}

void matrix_mult::thread_add_ln59_4_fu_15544_p2() {
    add_ln59_4_fu_15544_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_5.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_5));
}

void matrix_mult::thread_add_ln59_5_fu_15554_p2() {
    add_ln59_5_fu_15554_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_6.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_6));
}

void matrix_mult::thread_add_ln59_6_fu_15564_p2() {
    add_ln59_6_fu_15564_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_7.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_7));
}

void matrix_mult::thread_add_ln59_7_fu_15574_p2() {
    add_ln59_7_fu_15574_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void matrix_mult::thread_add_ln59_8_fu_15584_p2() {
    add_ln59_8_fu_15584_p2 = (!add_ln59_reg_20687.read().is_01() || !ap_const_lv7_9.is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln59_reg_20687.read()) + sc_biguint<7>(ap_const_lv7_9));
}

void matrix_mult::thread_add_ln59_fu_15230_p2() {
    add_ln59_fu_15230_p2 = (!zext_ln59_10_fu_15226_p1.read().is_01() || !shl_ln2_fu_15210_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln59_10_fu_15226_p1.read()) + sc_biguint<7>(shl_ln2_fu_15210_p3.read()));
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

void matrix_mult::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[9];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[10];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[11];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage3() {
    ap_CS_fsm_pp1_stage3 = ap_CS_fsm.read()[12];
}

void matrix_mult::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[13];
}

void matrix_mult::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[20];
}

void matrix_mult::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matrix_mult::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[8];
}

void matrix_mult::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[14];
}

void matrix_mult::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void matrix_mult::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[16];
}

void matrix_mult::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void matrix_mult::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[17];
}

void matrix_mult::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[18];
}

void matrix_mult::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[19];
}

void matrix_mult::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[21];
}

void matrix_mult::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[22];
}

void matrix_mult::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[23];
}

void matrix_mult::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[24];
}

void matrix_mult::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void matrix_mult::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[25];
}

void matrix_mult::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[26];
}

void matrix_mult::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[27];
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

void matrix_mult::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state11_pp1_stage0_iter0() {
    ap_block_state11_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state12_pp1_stage1_iter0() {
    ap_block_state12_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state13_pp1_stage2_iter0() {
    ap_block_state13_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state14_pp1_stage3_iter0() {
    ap_block_state14_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state15_pp1_stage4_iter0() {
    ap_block_state15_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state16_pp1_stage0_iter1() {
    ap_block_state16_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state23_pp2_stage0_iter0() {
    ap_block_state23_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state24_pp2_stage0_iter1() {
    ap_block_state24_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state25_pp2_stage0_iter2() {
    ap_block_state25_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state4_pp0_stage0_iter0() {
    ap_block_state4_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state5_pp0_stage1_iter0() {
    ap_block_state5_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state6_pp0_stage2_iter0() {
    ap_block_state6_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state7_pp0_stage3_iter0() {
    ap_block_state7_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state8_pp0_stage4_iter0() {
    ap_block_state8_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_block_state9_pp0_stage0_iter1() {
    ap_block_state9_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_mult::thread_ap_condition_pp0_exit_iter0_state4() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_fu_13742_p2.read())) {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp1_exit_iter0_state11() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln27_fu_13882_p2.read())) {
        ap_condition_pp1_exit_iter0_state11 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state11 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_condition_pp2_exit_iter0_state23() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln36_fu_14016_p2.read())) {
        ap_condition_pp2_exit_iter0_state23 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state23 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_0_3_phi_fu_5481_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_0_3_phi_fu_5481_p4 = c_buff_0_0_reg_19963.read();
    } else {
        ap_phi_mux_c_buff_0_0_3_phi_fu_5481_p4 = c_buff_0_0_3_reg_5478.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_1_3_phi_fu_5471_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_1_3_phi_fu_5471_p4 = c_buff_0_1_reg_19968.read();
    } else {
        ap_phi_mux_c_buff_0_1_3_phi_fu_5471_p4 = c_buff_0_1_3_reg_5468.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_2_3_phi_fu_5461_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_2_3_phi_fu_5461_p4 = c_buff_0_2_reg_19973.read();
    } else {
        ap_phi_mux_c_buff_0_2_3_phi_fu_5461_p4 = c_buff_0_2_3_reg_5458.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_3_3_phi_fu_5451_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_3_3_phi_fu_5451_p4 = c_buff_0_3_reg_19978.read();
    } else {
        ap_phi_mux_c_buff_0_3_3_phi_fu_5451_p4 = c_buff_0_3_3_reg_5448.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_4_3_phi_fu_5441_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_4_3_phi_fu_5441_p4 = c_buff_0_4_reg_19983.read();
    } else {
        ap_phi_mux_c_buff_0_4_3_phi_fu_5441_p4 = c_buff_0_4_3_reg_5438.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_5_3_phi_fu_5431_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_5_3_phi_fu_5431_p4 = c_buff_0_5_reg_19988.read();
    } else {
        ap_phi_mux_c_buff_0_5_3_phi_fu_5431_p4 = c_buff_0_5_3_reg_5428.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_6_3_phi_fu_5421_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_6_3_phi_fu_5421_p4 = c_buff_0_6_reg_19993.read();
    } else {
        ap_phi_mux_c_buff_0_6_3_phi_fu_5421_p4 = c_buff_0_6_3_reg_5418.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_7_3_phi_fu_5411_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_7_3_phi_fu_5411_p4 = c_buff_0_7_reg_19998.read();
    } else {
        ap_phi_mux_c_buff_0_7_3_phi_fu_5411_p4 = c_buff_0_7_3_reg_5408.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_8_3_phi_fu_5401_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_8_3_phi_fu_5401_p4 = c_buff_0_8_reg_20003.read();
    } else {
        ap_phi_mux_c_buff_0_8_3_phi_fu_5401_p4 = c_buff_0_8_3_reg_5398.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_0_9_3_phi_fu_5391_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_0_9_3_phi_fu_5391_p4 = c_buff_0_9_reg_20008.read();
    } else {
        ap_phi_mux_c_buff_0_9_3_phi_fu_5391_p4 = c_buff_0_9_3_reg_5388.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_1_0_3_phi_fu_5381_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_1_0_3_phi_fu_5381_p4 = c_buff_1_0_reg_20013.read();
    } else {
        ap_phi_mux_c_buff_1_0_3_phi_fu_5381_p4 = c_buff_1_0_3_reg_5378.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_1_2_3_phi_fu_5361_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_1_2_3_phi_fu_5361_p4 = c_buff_1_2_reg_20024.read();
    } else {
        ap_phi_mux_c_buff_1_2_3_phi_fu_5361_p4 = c_buff_1_2_3_reg_5358.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_1_4_3_phi_fu_5341_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_1_4_3_phi_fu_5341_p4 = c_buff_1_4_reg_20035.read();
    } else {
        ap_phi_mux_c_buff_1_4_3_phi_fu_5341_p4 = c_buff_1_4_3_reg_5338.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_1_6_3_phi_fu_5321_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_1_6_3_phi_fu_5321_p4 = c_buff_1_6_reg_20046.read();
    } else {
        ap_phi_mux_c_buff_1_6_3_phi_fu_5321_p4 = c_buff_1_6_3_reg_5318.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_1_8_3_phi_fu_5301_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_1_8_3_phi_fu_5301_p4 = c_buff_1_8_reg_20057.read();
    } else {
        ap_phi_mux_c_buff_1_8_3_phi_fu_5301_p4 = c_buff_1_8_3_reg_5298.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_1_9_3_phi_fu_5291_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_1_9_3_phi_fu_5291_p4 = c_buff_1_9_reg_20062.read();
    } else {
        ap_phi_mux_c_buff_1_9_3_phi_fu_5291_p4 = c_buff_1_9_3_reg_5288.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_2_0_3_phi_fu_5281_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_2_0_3_phi_fu_5281_p4 = c_buff_2_0_reg_20067.read();
    } else {
        ap_phi_mux_c_buff_2_0_3_phi_fu_5281_p4 = c_buff_2_0_3_reg_5278.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_2_2_3_phi_fu_5261_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_2_2_3_phi_fu_5261_p4 = c_buff_2_2_reg_20078.read();
    } else {
        ap_phi_mux_c_buff_2_2_3_phi_fu_5261_p4 = c_buff_2_2_3_reg_5258.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_2_4_3_phi_fu_5241_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_2_4_3_phi_fu_5241_p4 = c_buff_2_4_reg_20089.read();
    } else {
        ap_phi_mux_c_buff_2_4_3_phi_fu_5241_p4 = c_buff_2_4_3_reg_5238.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_2_6_3_phi_fu_5221_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_2_6_3_phi_fu_5221_p4 = c_buff_2_6_reg_20100.read();
    } else {
        ap_phi_mux_c_buff_2_6_3_phi_fu_5221_p4 = c_buff_2_6_3_reg_5218.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_2_8_3_phi_fu_5201_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_2_8_3_phi_fu_5201_p4 = c_buff_2_8_reg_20111.read();
    } else {
        ap_phi_mux_c_buff_2_8_3_phi_fu_5201_p4 = c_buff_2_8_3_reg_5198.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_2_9_3_phi_fu_5191_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_2_9_3_phi_fu_5191_p4 = c_buff_2_9_reg_20116.read();
    } else {
        ap_phi_mux_c_buff_2_9_3_phi_fu_5191_p4 = c_buff_2_9_3_reg_5188.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_3_0_3_phi_fu_5181_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_3_0_3_phi_fu_5181_p4 = c_buff_3_0_reg_20121.read();
    } else {
        ap_phi_mux_c_buff_3_0_3_phi_fu_5181_p4 = c_buff_3_0_3_reg_5178.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_3_2_3_phi_fu_5161_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_3_2_3_phi_fu_5161_p4 = c_buff_3_2_reg_20132.read();
    } else {
        ap_phi_mux_c_buff_3_2_3_phi_fu_5161_p4 = c_buff_3_2_3_reg_5158.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_3_4_3_phi_fu_5141_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_3_4_3_phi_fu_5141_p4 = c_buff_3_4_reg_20143.read();
    } else {
        ap_phi_mux_c_buff_3_4_3_phi_fu_5141_p4 = c_buff_3_4_3_reg_5138.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_3_6_3_phi_fu_5121_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_3_6_3_phi_fu_5121_p4 = c_buff_3_6_reg_20154.read();
    } else {
        ap_phi_mux_c_buff_3_6_3_phi_fu_5121_p4 = c_buff_3_6_3_reg_5118.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_3_8_3_phi_fu_5101_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_3_8_3_phi_fu_5101_p4 = c_buff_3_8_reg_20165.read();
    } else {
        ap_phi_mux_c_buff_3_8_3_phi_fu_5101_p4 = c_buff_3_8_3_reg_5098.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_3_9_3_phi_fu_5091_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_3_9_3_phi_fu_5091_p4 = c_buff_3_9_reg_20170.read();
    } else {
        ap_phi_mux_c_buff_3_9_3_phi_fu_5091_p4 = c_buff_3_9_3_reg_5088.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_4_0_3_phi_fu_5081_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_4_0_3_phi_fu_5081_p4 = c_buff_4_0_reg_20175.read();
    } else {
        ap_phi_mux_c_buff_4_0_3_phi_fu_5081_p4 = c_buff_4_0_3_reg_5078.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_4_2_3_phi_fu_5061_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_4_2_3_phi_fu_5061_p4 = c_buff_4_2_reg_20186.read();
    } else {
        ap_phi_mux_c_buff_4_2_3_phi_fu_5061_p4 = c_buff_4_2_3_reg_5058.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_4_4_3_phi_fu_5041_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_4_4_3_phi_fu_5041_p4 = c_buff_4_4_reg_20197.read();
    } else {
        ap_phi_mux_c_buff_4_4_3_phi_fu_5041_p4 = c_buff_4_4_3_reg_5038.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_4_6_3_phi_fu_5021_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_4_6_3_phi_fu_5021_p4 = c_buff_4_6_reg_20208.read();
    } else {
        ap_phi_mux_c_buff_4_6_3_phi_fu_5021_p4 = c_buff_4_6_3_reg_5018.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_4_8_3_phi_fu_5001_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_4_8_3_phi_fu_5001_p4 = c_buff_4_8_reg_20219.read();
    } else {
        ap_phi_mux_c_buff_4_8_3_phi_fu_5001_p4 = c_buff_4_8_3_reg_4998.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_4_9_3_phi_fu_4991_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_4_9_3_phi_fu_4991_p4 = c_buff_4_9_reg_20224.read();
    } else {
        ap_phi_mux_c_buff_4_9_3_phi_fu_4991_p4 = c_buff_4_9_3_reg_4988.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_5_0_3_phi_fu_4981_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_5_0_3_phi_fu_4981_p4 = c_buff_5_0_reg_20229.read();
    } else {
        ap_phi_mux_c_buff_5_0_3_phi_fu_4981_p4 = c_buff_5_0_3_reg_4978.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_5_2_3_phi_fu_4961_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_5_2_3_phi_fu_4961_p4 = c_buff_5_2_reg_20240.read();
    } else {
        ap_phi_mux_c_buff_5_2_3_phi_fu_4961_p4 = c_buff_5_2_3_reg_4958.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_5_4_3_phi_fu_4941_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_5_4_3_phi_fu_4941_p4 = c_buff_5_4_reg_20251.read();
    } else {
        ap_phi_mux_c_buff_5_4_3_phi_fu_4941_p4 = c_buff_5_4_3_reg_4938.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_5_6_3_phi_fu_4921_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_5_6_3_phi_fu_4921_p4 = c_buff_5_6_reg_20262.read();
    } else {
        ap_phi_mux_c_buff_5_6_3_phi_fu_4921_p4 = c_buff_5_6_3_reg_4918.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_5_8_3_phi_fu_4901_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_5_8_3_phi_fu_4901_p4 = c_buff_5_8_reg_20273.read();
    } else {
        ap_phi_mux_c_buff_5_8_3_phi_fu_4901_p4 = c_buff_5_8_3_reg_4898.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_5_9_3_phi_fu_4891_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_5_9_3_phi_fu_4891_p4 = c_buff_5_9_reg_20278.read();
    } else {
        ap_phi_mux_c_buff_5_9_3_phi_fu_4891_p4 = c_buff_5_9_3_reg_4888.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_6_0_3_phi_fu_4881_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_6_0_3_phi_fu_4881_p4 = c_buff_6_0_reg_20283.read();
    } else {
        ap_phi_mux_c_buff_6_0_3_phi_fu_4881_p4 = c_buff_6_0_3_reg_4878.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_6_2_3_phi_fu_4861_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_6_2_3_phi_fu_4861_p4 = c_buff_6_2_reg_20294.read();
    } else {
        ap_phi_mux_c_buff_6_2_3_phi_fu_4861_p4 = c_buff_6_2_3_reg_4858.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_6_4_3_phi_fu_4841_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_6_4_3_phi_fu_4841_p4 = c_buff_6_4_reg_20305.read();
    } else {
        ap_phi_mux_c_buff_6_4_3_phi_fu_4841_p4 = c_buff_6_4_3_reg_4838.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_6_6_3_phi_fu_4821_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_6_6_3_phi_fu_4821_p4 = c_buff_6_6_reg_20316.read();
    } else {
        ap_phi_mux_c_buff_6_6_3_phi_fu_4821_p4 = c_buff_6_6_3_reg_4818.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_6_8_3_phi_fu_4801_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_6_8_3_phi_fu_4801_p4 = c_buff_6_8_reg_20327.read();
    } else {
        ap_phi_mux_c_buff_6_8_3_phi_fu_4801_p4 = c_buff_6_8_3_reg_4798.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_6_9_3_phi_fu_4791_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_6_9_3_phi_fu_4791_p4 = c_buff_6_9_reg_20332.read();
    } else {
        ap_phi_mux_c_buff_6_9_3_phi_fu_4791_p4 = c_buff_6_9_3_reg_4788.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_7_0_3_phi_fu_4781_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_7_0_3_phi_fu_4781_p4 = c_buff_7_0_reg_20337.read();
    } else {
        ap_phi_mux_c_buff_7_0_3_phi_fu_4781_p4 = c_buff_7_0_3_reg_4778.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_7_2_3_phi_fu_4761_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_7_2_3_phi_fu_4761_p4 = c_buff_7_2_reg_20348.read();
    } else {
        ap_phi_mux_c_buff_7_2_3_phi_fu_4761_p4 = c_buff_7_2_3_reg_4758.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_7_4_3_phi_fu_4741_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_7_4_3_phi_fu_4741_p4 = c_buff_7_4_reg_20359.read();
    } else {
        ap_phi_mux_c_buff_7_4_3_phi_fu_4741_p4 = c_buff_7_4_3_reg_4738.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_7_6_3_phi_fu_4721_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_7_6_3_phi_fu_4721_p4 = c_buff_7_6_reg_20370.read();
    } else {
        ap_phi_mux_c_buff_7_6_3_phi_fu_4721_p4 = c_buff_7_6_3_reg_4718.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_7_8_3_phi_fu_4701_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_7_8_3_phi_fu_4701_p4 = c_buff_7_8_reg_20381.read();
    } else {
        ap_phi_mux_c_buff_7_8_3_phi_fu_4701_p4 = c_buff_7_8_3_reg_4698.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_7_9_3_phi_fu_4691_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_7_9_3_phi_fu_4691_p4 = c_buff_7_9_reg_20386.read();
    } else {
        ap_phi_mux_c_buff_7_9_3_phi_fu_4691_p4 = c_buff_7_9_3_reg_4688.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_8_0_3_phi_fu_4681_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_8_0_3_phi_fu_4681_p4 = c_buff_8_0_reg_20391.read();
    } else {
        ap_phi_mux_c_buff_8_0_3_phi_fu_4681_p4 = c_buff_8_0_3_reg_4678.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_8_2_3_phi_fu_4661_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_8_2_3_phi_fu_4661_p4 = c_buff_8_2_reg_20402.read();
    } else {
        ap_phi_mux_c_buff_8_2_3_phi_fu_4661_p4 = c_buff_8_2_3_reg_4658.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_8_4_3_phi_fu_4641_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_8_4_3_phi_fu_4641_p4 = c_buff_8_4_reg_20413.read();
    } else {
        ap_phi_mux_c_buff_8_4_3_phi_fu_4641_p4 = c_buff_8_4_3_reg_4638.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_8_6_3_phi_fu_4621_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_8_6_3_phi_fu_4621_p4 = c_buff_8_6_reg_20424.read();
    } else {
        ap_phi_mux_c_buff_8_6_3_phi_fu_4621_p4 = c_buff_8_6_3_reg_4618.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_8_8_3_phi_fu_4601_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_8_8_3_phi_fu_4601_p4 = c_buff_8_8_reg_20435.read();
    } else {
        ap_phi_mux_c_buff_8_8_3_phi_fu_4601_p4 = c_buff_8_8_3_reg_4598.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_8_9_3_phi_fu_4591_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_8_9_3_phi_fu_4591_p4 = c_buff_8_9_reg_20440.read();
    } else {
        ap_phi_mux_c_buff_8_9_3_phi_fu_4591_p4 = c_buff_8_9_3_reg_4588.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_9_0_3_phi_fu_4581_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_9_0_3_phi_fu_4581_p4 = c_buff_9_0_reg_20445.read();
    } else {
        ap_phi_mux_c_buff_9_0_3_phi_fu_4581_p4 = c_buff_9_0_3_reg_4578.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_9_2_3_phi_fu_4561_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_9_2_3_phi_fu_4561_p4 = c_buff_9_2_reg_20456.read();
    } else {
        ap_phi_mux_c_buff_9_2_3_phi_fu_4561_p4 = c_buff_9_2_3_reg_4558.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_9_4_3_phi_fu_4541_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_9_4_3_phi_fu_4541_p4 = c_buff_9_4_reg_20467.read();
    } else {
        ap_phi_mux_c_buff_9_4_3_phi_fu_4541_p4 = c_buff_9_4_3_reg_4538.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_9_6_3_phi_fu_4521_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_9_6_3_phi_fu_4521_p4 = c_buff_9_6_reg_20478.read();
    } else {
        ap_phi_mux_c_buff_9_6_3_phi_fu_4521_p4 = c_buff_9_6_3_reg_4518.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_9_8_3_phi_fu_4501_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_9_8_3_phi_fu_4501_p4 = c_buff_9_8_reg_20489.read();
    } else {
        ap_phi_mux_c_buff_9_8_3_phi_fu_4501_p4 = c_buff_9_8_3_reg_4498.read();
    }
}

void matrix_mult::thread_ap_phi_mux_c_buff_9_9_3_phi_fu_4491_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_reg_19570_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_c_buff_9_9_3_phi_fu_4491_p4 = c_buff_9_9_reg_20494.read();
    } else {
        ap_phi_mux_c_buff_9_9_3_phi_fu_4491_p4 = c_buff_9_9_3_reg_4488.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i1_0_phi_fu_4480_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i1_0_phi_fu_4480_p4 = i_1_reg_18003.read();
    } else {
        ap_phi_mux_i1_0_phi_fu_4480_p4 = i1_0_reg_4476.read();
    }
}

void matrix_mult::thread_ap_phi_mux_i_0_phi_fu_4468_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_reg_17416.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_4468_p4 = i_reg_17420.read();
    } else {
        ap_phi_mux_i_0_phi_fu_4468_p4 = i_0_reg_4464.read();
    }
}

void matrix_mult::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            b_address0 =  (sc_lv<7>) (zext_ln30_8_fu_14001_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            b_address0 =  (sc_lv<7>) (zext_ln30_6_fu_13981_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            b_address0 =  (sc_lv<7>) (zext_ln30_4_fu_13961_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            b_address0 =  (sc_lv<7>) (zext_ln30_2_fu_13941_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            b_address0 =  (sc_lv<7>) (zext_ln30_fu_13920_p1.read());
        } else {
            b_address0 = "XXXXXXX";
        }
    } else {
        b_address0 = "XXXXXXX";
    }
}

void matrix_mult::thread_b_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            b_address1 =  (sc_lv<7>) (zext_ln30_9_fu_14011_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            b_address1 =  (sc_lv<7>) (zext_ln30_7_fu_13991_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            b_address1 =  (sc_lv<7>) (zext_ln30_5_fu_13971_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            b_address1 =  (sc_lv<7>) (zext_ln30_3_fu_13951_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            b_address1 =  (sc_lv<7>) (zext_ln30_1_fu_13931_p1.read());
        } else {
            b_address1 = "XXXXXXX";
        }
    } else {
        b_address1 = "XXXXXXX";
    }
}

void matrix_mult::thread_b_buff_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_0_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_0_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_0_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_0_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_0_ce0 = ap_const_logic_1;
    } else {
        b_buff_0_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_0_ce1 = ap_const_logic_1;
    } else {
        b_buff_0_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)))) {
        b_buff_0_we0 = ap_const_logic_1;
    } else {
        b_buff_0_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0)))) {
        b_buff_0_we1 = ap_const_logic_1;
    } else {
        b_buff_0_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_1_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_1_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_1_ce0 = ap_const_logic_1;
    } else {
        b_buff_1_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_1_ce1 = ap_const_logic_1;
    } else {
        b_buff_1_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)))) {
        b_buff_1_we0 = ap_const_logic_1;
    } else {
        b_buff_1_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1)))) {
        b_buff_1_we1 = ap_const_logic_1;
    } else {
        b_buff_1_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_2_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_2_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_2_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_2_ce0 = ap_const_logic_1;
    } else {
        b_buff_2_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_2_ce1 = ap_const_logic_1;
    } else {
        b_buff_2_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)))) {
        b_buff_2_we0 = ap_const_logic_1;
    } else {
        b_buff_2_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2)))) {
        b_buff_2_we1 = ap_const_logic_1;
    } else {
        b_buff_2_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_3_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_3_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_3_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_3_ce0 = ap_const_logic_1;
    } else {
        b_buff_3_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_3_ce1 = ap_const_logic_1;
    } else {
        b_buff_3_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)))) {
        b_buff_3_we0 = ap_const_logic_1;
    } else {
        b_buff_3_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3)))) {
        b_buff_3_we1 = ap_const_logic_1;
    } else {
        b_buff_3_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_4_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_4_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_4_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_4_ce0 = ap_const_logic_1;
    } else {
        b_buff_4_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_4_ce1 = ap_const_logic_1;
    } else {
        b_buff_4_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)))) {
        b_buff_4_we0 = ap_const_logic_1;
    } else {
        b_buff_4_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4)))) {
        b_buff_4_we1 = ap_const_logic_1;
    } else {
        b_buff_4_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_5_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_5_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_5_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_5_ce0 = ap_const_logic_1;
    } else {
        b_buff_5_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_5_ce1 = ap_const_logic_1;
    } else {
        b_buff_5_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)))) {
        b_buff_5_we0 = ap_const_logic_1;
    } else {
        b_buff_5_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5)))) {
        b_buff_5_we1 = ap_const_logic_1;
    } else {
        b_buff_5_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_6_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_6_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_6_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_6_ce0 = ap_const_logic_1;
    } else {
        b_buff_6_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_6_ce1 = ap_const_logic_1;
    } else {
        b_buff_6_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)))) {
        b_buff_6_we0 = ap_const_logic_1;
    } else {
        b_buff_6_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6)))) {
        b_buff_6_we1 = ap_const_logic_1;
    } else {
        b_buff_6_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_7_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_7_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_7_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_7_ce0 = ap_const_logic_1;
    } else {
        b_buff_7_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_7_ce1 = ap_const_logic_1;
    } else {
        b_buff_7_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)))) {
        b_buff_7_we0 = ap_const_logic_1;
    } else {
        b_buff_7_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7)))) {
        b_buff_7_we1 = ap_const_logic_1;
    } else {
        b_buff_7_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_8_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_8_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_8_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_8_ce0 = ap_const_logic_1;
    } else {
        b_buff_8_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_8_ce1 = ap_const_logic_1;
    } else {
        b_buff_8_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)))) {
        b_buff_8_we0 = ap_const_logic_1;
    } else {
        b_buff_8_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)))) {
        b_buff_8_we1 = ap_const_logic_1;
    } else {
        b_buff_8_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_9_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_buff_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)))) {
        b_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0)))) {
        b_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0)))) {
        b_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0)))) {
        b_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0)))) {
        b_buff_9_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_buff_9_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void matrix_mult::thread_b_buff_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_9_ce0 = ap_const_logic_1;
    } else {
        b_buff_9_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_buff_9_ce1 = ap_const_logic_1;
    } else {
        b_buff_9_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          ((((((esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_F) || 
                esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_E)) || 
               esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_D)) || 
              esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_C)) || 
             esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_B)) || 
            esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_A)) || 
           esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_9))))) {
        b_buff_9_we0 = ap_const_logic_1;
    } else {
        b_buff_9_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_buff_9_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln27_reg_17999.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_0) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          ((((((esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_F) || 
                esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_E)) || 
               esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_D)) || 
              esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_C)) || 
             esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_B)) || 
            esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_A)) || 
           esl_seteq<1,4,4>(i1_0_reg_4476.read(), ap_const_lv4_9))))) {
        b_buff_9_we1 = ap_const_logic_1;
    } else {
        b_buff_9_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_b_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)))) {
        b_ce1 = ap_const_logic_1;
    } else {
        b_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        c_address0 =  (sc_lv<7>) (zext_ln59_8_fu_15579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        c_address0 =  (sc_lv<7>) (zext_ln59_6_fu_15559_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        c_address0 =  (sc_lv<7>) (zext_ln59_4_fu_15539_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        c_address0 =  (sc_lv<7>) (zext_ln59_2_fu_15519_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        c_address0 =  (sc_lv<7>) (zext_ln59_fu_15263_p1.read());
    } else {
        c_address0 = "XXXXXXX";
    }
}

void matrix_mult::thread_c_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        c_address1 =  (sc_lv<7>) (zext_ln59_9_fu_15589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        c_address1 =  (sc_lv<7>) (zext_ln59_7_fu_15569_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        c_address1 =  (sc_lv<7>) (zext_ln59_5_fu_15549_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        c_address1 =  (sc_lv<7>) (zext_ln59_3_fu_15529_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        c_address1 =  (sc_lv<7>) (zext_ln59_1_fu_15301_p1.read());
    } else {
        c_address1 = "XXXXXXX";
    }
}

void matrix_mult::thread_c_buff_1_1_1_fu_14802_p2() {
    c_buff_1_1_1_fu_14802_p2 = (!c_buff_1_1_3_reg_5368.read().is_01() || !c_buff_1_1_reg_20018.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_1_1_3_reg_5368.read()) + sc_bigint<16>(c_buff_1_1_reg_20018.read()));
}

void matrix_mult::thread_c_buff_1_1_2_fu_14807_p3() {
    c_buff_1_1_2_fu_14807_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_1_1_reg_20018.read(): c_buff_1_1_1_fu_14802_p2.read());
}

void matrix_mult::thread_c_buff_1_3_1_fu_14813_p2() {
    c_buff_1_3_1_fu_14813_p2 = (!c_buff_1_3_3_reg_5348.read().is_01() || !c_buff_1_3_reg_20029.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_1_3_3_reg_5348.read()) + sc_bigint<16>(c_buff_1_3_reg_20029.read()));
}

void matrix_mult::thread_c_buff_1_3_2_fu_14818_p3() {
    c_buff_1_3_2_fu_14818_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_1_3_reg_20029.read(): c_buff_1_3_1_fu_14813_p2.read());
}

void matrix_mult::thread_c_buff_1_5_1_fu_14824_p2() {
    c_buff_1_5_1_fu_14824_p2 = (!c_buff_1_5_3_reg_5328.read().is_01() || !c_buff_1_5_reg_20040.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_1_5_3_reg_5328.read()) + sc_bigint<16>(c_buff_1_5_reg_20040.read()));
}

void matrix_mult::thread_c_buff_1_5_2_fu_14829_p3() {
    c_buff_1_5_2_fu_14829_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_1_5_reg_20040.read(): c_buff_1_5_1_fu_14824_p2.read());
}

void matrix_mult::thread_c_buff_1_7_1_fu_14835_p2() {
    c_buff_1_7_1_fu_14835_p2 = (!c_buff_1_7_3_reg_5308.read().is_01() || !c_buff_1_7_reg_20051.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_1_7_3_reg_5308.read()) + sc_bigint<16>(c_buff_1_7_reg_20051.read()));
}

void matrix_mult::thread_c_buff_1_7_2_fu_14840_p3() {
    c_buff_1_7_2_fu_14840_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_1_7_reg_20051.read(): c_buff_1_7_1_fu_14835_p2.read());
}

void matrix_mult::thread_c_buff_2_1_1_fu_14846_p2() {
    c_buff_2_1_1_fu_14846_p2 = (!c_buff_2_1_3_reg_5268.read().is_01() || !c_buff_2_1_reg_20072.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_2_1_3_reg_5268.read()) + sc_bigint<16>(c_buff_2_1_reg_20072.read()));
}

void matrix_mult::thread_c_buff_2_1_2_fu_14851_p3() {
    c_buff_2_1_2_fu_14851_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_2_1_reg_20072.read(): c_buff_2_1_1_fu_14846_p2.read());
}

void matrix_mult::thread_c_buff_2_3_1_fu_14857_p2() {
    c_buff_2_3_1_fu_14857_p2 = (!c_buff_2_3_3_reg_5248.read().is_01() || !c_buff_2_3_reg_20083.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_2_3_3_reg_5248.read()) + sc_bigint<16>(c_buff_2_3_reg_20083.read()));
}

void matrix_mult::thread_c_buff_2_3_2_fu_14862_p3() {
    c_buff_2_3_2_fu_14862_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_2_3_reg_20083.read(): c_buff_2_3_1_fu_14857_p2.read());
}

void matrix_mult::thread_c_buff_2_5_1_fu_14868_p2() {
    c_buff_2_5_1_fu_14868_p2 = (!c_buff_2_5_3_reg_5228.read().is_01() || !c_buff_2_5_reg_20094.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_2_5_3_reg_5228.read()) + sc_bigint<16>(c_buff_2_5_reg_20094.read()));
}

void matrix_mult::thread_c_buff_2_5_2_fu_14873_p3() {
    c_buff_2_5_2_fu_14873_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_2_5_reg_20094.read(): c_buff_2_5_1_fu_14868_p2.read());
}

void matrix_mult::thread_c_buff_2_7_1_fu_14879_p2() {
    c_buff_2_7_1_fu_14879_p2 = (!c_buff_2_7_3_reg_5208.read().is_01() || !c_buff_2_7_reg_20105.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_2_7_3_reg_5208.read()) + sc_bigint<16>(c_buff_2_7_reg_20105.read()));
}

void matrix_mult::thread_c_buff_2_7_2_fu_14884_p3() {
    c_buff_2_7_2_fu_14884_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_2_7_reg_20105.read(): c_buff_2_7_1_fu_14879_p2.read());
}

void matrix_mult::thread_c_buff_3_1_1_fu_14890_p2() {
    c_buff_3_1_1_fu_14890_p2 = (!c_buff_3_1_3_reg_5168.read().is_01() || !c_buff_3_1_reg_20126.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_3_1_3_reg_5168.read()) + sc_bigint<16>(c_buff_3_1_reg_20126.read()));
}

void matrix_mult::thread_c_buff_3_1_2_fu_14895_p3() {
    c_buff_3_1_2_fu_14895_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_3_1_reg_20126.read(): c_buff_3_1_1_fu_14890_p2.read());
}

void matrix_mult::thread_c_buff_3_3_1_fu_14901_p2() {
    c_buff_3_3_1_fu_14901_p2 = (!c_buff_3_3_3_reg_5148.read().is_01() || !c_buff_3_3_reg_20137.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_3_3_3_reg_5148.read()) + sc_bigint<16>(c_buff_3_3_reg_20137.read()));
}

void matrix_mult::thread_c_buff_3_3_2_fu_14906_p3() {
    c_buff_3_3_2_fu_14906_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_3_3_reg_20137.read(): c_buff_3_3_1_fu_14901_p2.read());
}

void matrix_mult::thread_c_buff_3_5_1_fu_14912_p2() {
    c_buff_3_5_1_fu_14912_p2 = (!c_buff_3_5_3_reg_5128.read().is_01() || !c_buff_3_5_reg_20148.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_3_5_3_reg_5128.read()) + sc_bigint<16>(c_buff_3_5_reg_20148.read()));
}

void matrix_mult::thread_c_buff_3_5_2_fu_14917_p3() {
    c_buff_3_5_2_fu_14917_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_3_5_reg_20148.read(): c_buff_3_5_1_fu_14912_p2.read());
}

void matrix_mult::thread_c_buff_3_7_1_fu_14923_p2() {
    c_buff_3_7_1_fu_14923_p2 = (!c_buff_3_7_3_reg_5108.read().is_01() || !c_buff_3_7_reg_20159.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_3_7_3_reg_5108.read()) + sc_bigint<16>(c_buff_3_7_reg_20159.read()));
}

void matrix_mult::thread_c_buff_3_7_2_fu_14928_p3() {
    c_buff_3_7_2_fu_14928_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_3_7_reg_20159.read(): c_buff_3_7_1_fu_14923_p2.read());
}

void matrix_mult::thread_c_buff_4_1_1_fu_14934_p2() {
    c_buff_4_1_1_fu_14934_p2 = (!c_buff_4_1_3_reg_5068.read().is_01() || !c_buff_4_1_reg_20180.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_4_1_3_reg_5068.read()) + sc_bigint<16>(c_buff_4_1_reg_20180.read()));
}

void matrix_mult::thread_c_buff_4_1_2_fu_14939_p3() {
    c_buff_4_1_2_fu_14939_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_4_1_reg_20180.read(): c_buff_4_1_1_fu_14934_p2.read());
}

void matrix_mult::thread_c_buff_4_3_1_fu_14945_p2() {
    c_buff_4_3_1_fu_14945_p2 = (!c_buff_4_3_3_reg_5048.read().is_01() || !c_buff_4_3_reg_20191.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_4_3_3_reg_5048.read()) + sc_bigint<16>(c_buff_4_3_reg_20191.read()));
}

void matrix_mult::thread_c_buff_4_3_2_fu_14950_p3() {
    c_buff_4_3_2_fu_14950_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_4_3_reg_20191.read(): c_buff_4_3_1_fu_14945_p2.read());
}

void matrix_mult::thread_c_buff_4_5_1_fu_14956_p2() {
    c_buff_4_5_1_fu_14956_p2 = (!c_buff_4_5_3_reg_5028.read().is_01() || !c_buff_4_5_reg_20202.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_4_5_3_reg_5028.read()) + sc_bigint<16>(c_buff_4_5_reg_20202.read()));
}

void matrix_mult::thread_c_buff_4_5_2_fu_14961_p3() {
    c_buff_4_5_2_fu_14961_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_4_5_reg_20202.read(): c_buff_4_5_1_fu_14956_p2.read());
}

void matrix_mult::thread_c_buff_4_7_1_fu_14967_p2() {
    c_buff_4_7_1_fu_14967_p2 = (!c_buff_4_7_3_reg_5008.read().is_01() || !c_buff_4_7_reg_20213.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_4_7_3_reg_5008.read()) + sc_bigint<16>(c_buff_4_7_reg_20213.read()));
}

void matrix_mult::thread_c_buff_4_7_2_fu_14972_p3() {
    c_buff_4_7_2_fu_14972_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_4_7_reg_20213.read(): c_buff_4_7_1_fu_14967_p2.read());
}

void matrix_mult::thread_c_buff_5_1_1_fu_14978_p2() {
    c_buff_5_1_1_fu_14978_p2 = (!c_buff_5_1_3_reg_4968.read().is_01() || !c_buff_5_1_reg_20234.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_5_1_3_reg_4968.read()) + sc_bigint<16>(c_buff_5_1_reg_20234.read()));
}

void matrix_mult::thread_c_buff_5_1_2_fu_14983_p3() {
    c_buff_5_1_2_fu_14983_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_5_1_reg_20234.read(): c_buff_5_1_1_fu_14978_p2.read());
}

void matrix_mult::thread_c_buff_5_3_1_fu_14989_p2() {
    c_buff_5_3_1_fu_14989_p2 = (!c_buff_5_3_3_reg_4948.read().is_01() || !c_buff_5_3_reg_20245.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_5_3_3_reg_4948.read()) + sc_bigint<16>(c_buff_5_3_reg_20245.read()));
}

void matrix_mult::thread_c_buff_5_3_2_fu_14994_p3() {
    c_buff_5_3_2_fu_14994_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_5_3_reg_20245.read(): c_buff_5_3_1_fu_14989_p2.read());
}

void matrix_mult::thread_c_buff_5_5_1_fu_15000_p2() {
    c_buff_5_5_1_fu_15000_p2 = (!c_buff_5_5_3_reg_4928.read().is_01() || !c_buff_5_5_reg_20256.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_5_5_3_reg_4928.read()) + sc_bigint<16>(c_buff_5_5_reg_20256.read()));
}

void matrix_mult::thread_c_buff_5_5_2_fu_15005_p3() {
    c_buff_5_5_2_fu_15005_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_5_5_reg_20256.read(): c_buff_5_5_1_fu_15000_p2.read());
}

void matrix_mult::thread_c_buff_5_7_1_fu_15011_p2() {
    c_buff_5_7_1_fu_15011_p2 = (!c_buff_5_7_3_reg_4908.read().is_01() || !c_buff_5_7_reg_20267.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_5_7_3_reg_4908.read()) + sc_bigint<16>(c_buff_5_7_reg_20267.read()));
}

void matrix_mult::thread_c_buff_5_7_2_fu_15016_p3() {
    c_buff_5_7_2_fu_15016_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_5_7_reg_20267.read(): c_buff_5_7_1_fu_15011_p2.read());
}

void matrix_mult::thread_c_buff_6_1_1_fu_15022_p2() {
    c_buff_6_1_1_fu_15022_p2 = (!c_buff_6_1_3_reg_4868.read().is_01() || !c_buff_6_1_reg_20288.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_6_1_3_reg_4868.read()) + sc_bigint<16>(c_buff_6_1_reg_20288.read()));
}

void matrix_mult::thread_c_buff_6_1_2_fu_15027_p3() {
    c_buff_6_1_2_fu_15027_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_6_1_reg_20288.read(): c_buff_6_1_1_fu_15022_p2.read());
}

void matrix_mult::thread_c_buff_6_3_1_fu_15033_p2() {
    c_buff_6_3_1_fu_15033_p2 = (!c_buff_6_3_3_reg_4848.read().is_01() || !c_buff_6_3_reg_20299.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_6_3_3_reg_4848.read()) + sc_bigint<16>(c_buff_6_3_reg_20299.read()));
}

void matrix_mult::thread_c_buff_6_3_2_fu_15038_p3() {
    c_buff_6_3_2_fu_15038_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_6_3_reg_20299.read(): c_buff_6_3_1_fu_15033_p2.read());
}

void matrix_mult::thread_c_buff_6_5_1_fu_15044_p2() {
    c_buff_6_5_1_fu_15044_p2 = (!c_buff_6_5_3_reg_4828.read().is_01() || !c_buff_6_5_reg_20310.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_6_5_3_reg_4828.read()) + sc_bigint<16>(c_buff_6_5_reg_20310.read()));
}

void matrix_mult::thread_c_buff_6_5_2_fu_15049_p3() {
    c_buff_6_5_2_fu_15049_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_6_5_reg_20310.read(): c_buff_6_5_1_fu_15044_p2.read());
}

void matrix_mult::thread_c_buff_6_7_1_fu_15055_p2() {
    c_buff_6_7_1_fu_15055_p2 = (!c_buff_6_7_3_reg_4808.read().is_01() || !c_buff_6_7_reg_20321.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_6_7_3_reg_4808.read()) + sc_bigint<16>(c_buff_6_7_reg_20321.read()));
}

void matrix_mult::thread_c_buff_6_7_2_fu_15060_p3() {
    c_buff_6_7_2_fu_15060_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_6_7_reg_20321.read(): c_buff_6_7_1_fu_15055_p2.read());
}

void matrix_mult::thread_c_buff_7_1_1_fu_15066_p2() {
    c_buff_7_1_1_fu_15066_p2 = (!c_buff_7_1_3_reg_4768.read().is_01() || !c_buff_7_1_reg_20342.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_7_1_3_reg_4768.read()) + sc_bigint<16>(c_buff_7_1_reg_20342.read()));
}

void matrix_mult::thread_c_buff_7_1_2_fu_15071_p3() {
    c_buff_7_1_2_fu_15071_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_7_1_reg_20342.read(): c_buff_7_1_1_fu_15066_p2.read());
}

void matrix_mult::thread_c_buff_7_3_1_fu_15077_p2() {
    c_buff_7_3_1_fu_15077_p2 = (!c_buff_7_3_3_reg_4748.read().is_01() || !c_buff_7_3_reg_20353.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_7_3_3_reg_4748.read()) + sc_bigint<16>(c_buff_7_3_reg_20353.read()));
}

void matrix_mult::thread_c_buff_7_3_2_fu_15082_p3() {
    c_buff_7_3_2_fu_15082_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_7_3_reg_20353.read(): c_buff_7_3_1_fu_15077_p2.read());
}

void matrix_mult::thread_c_buff_7_5_1_fu_15088_p2() {
    c_buff_7_5_1_fu_15088_p2 = (!c_buff_7_5_3_reg_4728.read().is_01() || !c_buff_7_5_reg_20364.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_7_5_3_reg_4728.read()) + sc_bigint<16>(c_buff_7_5_reg_20364.read()));
}

void matrix_mult::thread_c_buff_7_5_2_fu_15093_p3() {
    c_buff_7_5_2_fu_15093_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_7_5_reg_20364.read(): c_buff_7_5_1_fu_15088_p2.read());
}

void matrix_mult::thread_c_buff_7_7_1_fu_15099_p2() {
    c_buff_7_7_1_fu_15099_p2 = (!c_buff_7_7_3_reg_4708.read().is_01() || !c_buff_7_7_reg_20375.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_7_7_3_reg_4708.read()) + sc_bigint<16>(c_buff_7_7_reg_20375.read()));
}

void matrix_mult::thread_c_buff_7_7_2_fu_15104_p3() {
    c_buff_7_7_2_fu_15104_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_7_7_reg_20375.read(): c_buff_7_7_1_fu_15099_p2.read());
}

void matrix_mult::thread_c_buff_8_1_1_fu_15110_p2() {
    c_buff_8_1_1_fu_15110_p2 = (!c_buff_8_1_3_reg_4668.read().is_01() || !c_buff_8_1_reg_20396.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_8_1_3_reg_4668.read()) + sc_bigint<16>(c_buff_8_1_reg_20396.read()));
}

void matrix_mult::thread_c_buff_8_1_2_fu_15115_p3() {
    c_buff_8_1_2_fu_15115_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_8_1_reg_20396.read(): c_buff_8_1_1_fu_15110_p2.read());
}

void matrix_mult::thread_c_buff_8_3_1_fu_15121_p2() {
    c_buff_8_3_1_fu_15121_p2 = (!c_buff_8_3_3_reg_4648.read().is_01() || !c_buff_8_3_reg_20407.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_8_3_3_reg_4648.read()) + sc_bigint<16>(c_buff_8_3_reg_20407.read()));
}

void matrix_mult::thread_c_buff_8_3_2_fu_15126_p3() {
    c_buff_8_3_2_fu_15126_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_8_3_reg_20407.read(): c_buff_8_3_1_fu_15121_p2.read());
}

void matrix_mult::thread_c_buff_8_5_1_fu_15132_p2() {
    c_buff_8_5_1_fu_15132_p2 = (!c_buff_8_5_3_reg_4628.read().is_01() || !c_buff_8_5_reg_20418.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_8_5_3_reg_4628.read()) + sc_bigint<16>(c_buff_8_5_reg_20418.read()));
}

void matrix_mult::thread_c_buff_8_5_2_fu_15137_p3() {
    c_buff_8_5_2_fu_15137_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_8_5_reg_20418.read(): c_buff_8_5_1_fu_15132_p2.read());
}

void matrix_mult::thread_c_buff_8_7_1_fu_15143_p2() {
    c_buff_8_7_1_fu_15143_p2 = (!c_buff_8_7_3_reg_4608.read().is_01() || !c_buff_8_7_reg_20429.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_8_7_3_reg_4608.read()) + sc_bigint<16>(c_buff_8_7_reg_20429.read()));
}

void matrix_mult::thread_c_buff_8_7_2_fu_15148_p3() {
    c_buff_8_7_2_fu_15148_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_8_7_reg_20429.read(): c_buff_8_7_1_fu_15143_p2.read());
}

void matrix_mult::thread_c_buff_9_1_1_fu_15154_p2() {
    c_buff_9_1_1_fu_15154_p2 = (!c_buff_9_1_3_reg_4568.read().is_01() || !c_buff_9_1_reg_20450.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_9_1_3_reg_4568.read()) + sc_bigint<16>(c_buff_9_1_reg_20450.read()));
}

void matrix_mult::thread_c_buff_9_1_2_fu_15159_p3() {
    c_buff_9_1_2_fu_15159_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_9_1_reg_20450.read(): c_buff_9_1_1_fu_15154_p2.read());
}

void matrix_mult::thread_c_buff_9_3_1_fu_15165_p2() {
    c_buff_9_3_1_fu_15165_p2 = (!c_buff_9_3_3_reg_4548.read().is_01() || !c_buff_9_3_reg_20461.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_9_3_3_reg_4548.read()) + sc_bigint<16>(c_buff_9_3_reg_20461.read()));
}

void matrix_mult::thread_c_buff_9_3_2_fu_15170_p3() {
    c_buff_9_3_2_fu_15170_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_9_3_reg_20461.read(): c_buff_9_3_1_fu_15165_p2.read());
}

void matrix_mult::thread_c_buff_9_5_1_fu_15176_p2() {
    c_buff_9_5_1_fu_15176_p2 = (!c_buff_9_5_3_reg_4528.read().is_01() || !c_buff_9_5_reg_20472.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_9_5_3_reg_4528.read()) + sc_bigint<16>(c_buff_9_5_reg_20472.read()));
}

void matrix_mult::thread_c_buff_9_5_2_fu_15181_p3() {
    c_buff_9_5_2_fu_15181_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_9_5_reg_20472.read(): c_buff_9_5_1_fu_15176_p2.read());
}

void matrix_mult::thread_c_buff_9_7_1_fu_15187_p2() {
    c_buff_9_7_1_fu_15187_p2 = (!c_buff_9_7_3_reg_4508.read().is_01() || !c_buff_9_7_reg_20483.read().is_01())? sc_lv<16>(): (sc_biguint<16>(c_buff_9_7_3_reg_4508.read()) + sc_bigint<16>(c_buff_9_7_reg_20483.read()));
}

void matrix_mult::thread_c_buff_9_7_2_fu_15192_p3() {
    c_buff_9_7_2_fu_15192_p3 = (!icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579_pp2_iter1_reg.read()[0].to_bool())? c_buff_9_7_reg_20483.read(): c_buff_9_7_1_fu_15187_p2.read());
}

void matrix_mult::thread_c_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        c_ce0 = ap_const_logic_1;
    } else {
        c_ce0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        c_ce1 = ap_const_logic_1;
    } else {
        c_ce1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        c_d0 = tmp_31_reg_20729.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        c_d0 = tmp_29_reg_20719.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        c_d0 = tmp_27_reg_20709.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        c_d0 = tmp_25_reg_20699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        c_d0 = tmp_23_fu_15236_p12.read();
    } else {
        c_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        c_d1 = tmp_32_reg_20734.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        c_d1 = tmp_30_reg_20724.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        c_d1 = tmp_28_reg_20714.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        c_d1 = tmp_26_reg_20704.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        c_d1 = tmp_24_fu_15268_p12.read();
    } else {
        c_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_mult::thread_c_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_15198_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        c_we0 = ap_const_logic_1;
    } else {
        c_we0 = ap_const_logic_0;
    }
}

void matrix_mult::thread_c_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln56_fu_15198_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        c_we1 = ap_const_logic_1;
    } else {
        c_we1 = ap_const_logic_0;
    }
}

void matrix_mult::thread_grp_fu_15594_p2() {
    grp_fu_15594_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_0_3_phi_fu_5481_p4.read());
}

void matrix_mult::thread_grp_fu_15600_p2() {
    grp_fu_15600_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_1_3_phi_fu_5471_p4.read());
}

void matrix_mult::thread_grp_fu_15606_p2() {
    grp_fu_15606_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_2_3_phi_fu_5461_p4.read());
}

void matrix_mult::thread_grp_fu_15612_p2() {
    grp_fu_15612_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_3_3_phi_fu_5451_p4.read());
}

void matrix_mult::thread_grp_fu_15618_p2() {
    grp_fu_15618_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_4_3_phi_fu_5441_p4.read());
}

void matrix_mult::thread_grp_fu_15624_p2() {
    grp_fu_15624_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_5_3_phi_fu_5431_p4.read());
}

void matrix_mult::thread_grp_fu_15630_p2() {
    grp_fu_15630_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_6_3_phi_fu_5421_p4.read());
}

void matrix_mult::thread_grp_fu_15636_p2() {
    grp_fu_15636_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_7_3_phi_fu_5411_p4.read());
}

void matrix_mult::thread_grp_fu_15642_p2() {
    grp_fu_15642_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_8_3_phi_fu_5401_p4.read());
}

void matrix_mult::thread_grp_fu_15648_p2() {
    grp_fu_15648_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_0_9_3_phi_fu_5391_p4.read());
}

void matrix_mult::thread_grp_fu_15654_p2() {
    grp_fu_15654_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_1_0_3_phi_fu_5381_p4.read());
}

void matrix_mult::thread_grp_fu_15664_p2() {
    grp_fu_15664_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_1_2_3_phi_fu_5361_p4.read());
}

void matrix_mult::thread_grp_fu_15674_p2() {
    grp_fu_15674_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_1_4_3_phi_fu_5341_p4.read());
}

void matrix_mult::thread_grp_fu_15684_p2() {
    grp_fu_15684_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_1_6_3_phi_fu_5321_p4.read());
}

void matrix_mult::thread_grp_fu_15694_p2() {
    grp_fu_15694_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_1_8_3_phi_fu_5301_p4.read());
}

void matrix_mult::thread_grp_fu_15700_p2() {
    grp_fu_15700_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_1_9_3_phi_fu_5291_p4.read());
}

void matrix_mult::thread_grp_fu_15706_p2() {
    grp_fu_15706_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_2_0_3_phi_fu_5281_p4.read());
}

void matrix_mult::thread_grp_fu_15716_p2() {
    grp_fu_15716_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_2_2_3_phi_fu_5261_p4.read());
}

void matrix_mult::thread_grp_fu_15726_p2() {
    grp_fu_15726_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_2_4_3_phi_fu_5241_p4.read());
}

void matrix_mult::thread_grp_fu_15736_p2() {
    grp_fu_15736_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_2_6_3_phi_fu_5221_p4.read());
}

void matrix_mult::thread_grp_fu_15746_p2() {
    grp_fu_15746_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_2_8_3_phi_fu_5201_p4.read());
}

void matrix_mult::thread_grp_fu_15752_p2() {
    grp_fu_15752_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_2_9_3_phi_fu_5191_p4.read());
}

void matrix_mult::thread_grp_fu_15758_p2() {
    grp_fu_15758_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_3_0_3_phi_fu_5181_p4.read());
}

void matrix_mult::thread_grp_fu_15768_p2() {
    grp_fu_15768_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_3_2_3_phi_fu_5161_p4.read());
}

void matrix_mult::thread_grp_fu_15778_p2() {
    grp_fu_15778_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_3_4_3_phi_fu_5141_p4.read());
}

void matrix_mult::thread_grp_fu_15788_p2() {
    grp_fu_15788_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_3_6_3_phi_fu_5121_p4.read());
}

void matrix_mult::thread_grp_fu_15798_p2() {
    grp_fu_15798_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_3_8_3_phi_fu_5101_p4.read());
}

void matrix_mult::thread_grp_fu_15804_p2() {
    grp_fu_15804_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_3_9_3_phi_fu_5091_p4.read());
}

void matrix_mult::thread_grp_fu_15810_p2() {
    grp_fu_15810_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_4_0_3_phi_fu_5081_p4.read());
}

void matrix_mult::thread_grp_fu_15820_p2() {
    grp_fu_15820_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_4_2_3_phi_fu_5061_p4.read());
}

void matrix_mult::thread_grp_fu_15830_p2() {
    grp_fu_15830_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_4_4_3_phi_fu_5041_p4.read());
}

void matrix_mult::thread_grp_fu_15840_p2() {
    grp_fu_15840_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_4_6_3_phi_fu_5021_p4.read());
}

void matrix_mult::thread_grp_fu_15850_p2() {
    grp_fu_15850_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_4_8_3_phi_fu_5001_p4.read());
}

void matrix_mult::thread_grp_fu_15856_p2() {
    grp_fu_15856_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_4_9_3_phi_fu_4991_p4.read());
}

void matrix_mult::thread_grp_fu_15862_p2() {
    grp_fu_15862_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_5_0_3_phi_fu_4981_p4.read());
}

void matrix_mult::thread_grp_fu_15872_p2() {
    grp_fu_15872_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_5_2_3_phi_fu_4961_p4.read());
}

void matrix_mult::thread_grp_fu_15882_p2() {
    grp_fu_15882_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_5_4_3_phi_fu_4941_p4.read());
}

void matrix_mult::thread_grp_fu_15892_p2() {
    grp_fu_15892_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_5_6_3_phi_fu_4921_p4.read());
}

void matrix_mult::thread_grp_fu_15902_p2() {
    grp_fu_15902_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_5_8_3_phi_fu_4901_p4.read());
}

void matrix_mult::thread_grp_fu_15908_p2() {
    grp_fu_15908_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_5_9_3_phi_fu_4891_p4.read());
}

void matrix_mult::thread_grp_fu_15914_p2() {
    grp_fu_15914_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_6_0_3_phi_fu_4881_p4.read());
}

void matrix_mult::thread_grp_fu_15924_p2() {
    grp_fu_15924_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_6_2_3_phi_fu_4861_p4.read());
}

void matrix_mult::thread_grp_fu_15934_p2() {
    grp_fu_15934_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_6_4_3_phi_fu_4841_p4.read());
}

void matrix_mult::thread_grp_fu_15944_p2() {
    grp_fu_15944_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_6_6_3_phi_fu_4821_p4.read());
}

void matrix_mult::thread_grp_fu_15954_p2() {
    grp_fu_15954_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_6_8_3_phi_fu_4801_p4.read());
}

void matrix_mult::thread_grp_fu_15960_p2() {
    grp_fu_15960_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_6_9_3_phi_fu_4791_p4.read());
}

void matrix_mult::thread_grp_fu_15966_p2() {
    grp_fu_15966_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_7_0_3_phi_fu_4781_p4.read());
}

void matrix_mult::thread_grp_fu_15976_p2() {
    grp_fu_15976_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_7_2_3_phi_fu_4761_p4.read());
}

void matrix_mult::thread_grp_fu_15986_p2() {
    grp_fu_15986_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_7_4_3_phi_fu_4741_p4.read());
}

void matrix_mult::thread_grp_fu_15996_p2() {
    grp_fu_15996_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_7_6_3_phi_fu_4721_p4.read());
}

void matrix_mult::thread_grp_fu_16006_p2() {
    grp_fu_16006_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_7_8_3_phi_fu_4701_p4.read());
}

void matrix_mult::thread_grp_fu_16012_p2() {
    grp_fu_16012_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_7_9_3_phi_fu_4691_p4.read());
}

void matrix_mult::thread_grp_fu_16018_p2() {
    grp_fu_16018_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_8_0_3_phi_fu_4681_p4.read());
}

void matrix_mult::thread_grp_fu_16028_p2() {
    grp_fu_16028_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_8_2_3_phi_fu_4661_p4.read());
}

void matrix_mult::thread_grp_fu_16038_p2() {
    grp_fu_16038_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_8_4_3_phi_fu_4641_p4.read());
}

void matrix_mult::thread_grp_fu_16048_p2() {
    grp_fu_16048_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_8_6_3_phi_fu_4621_p4.read());
}

void matrix_mult::thread_grp_fu_16058_p2() {
    grp_fu_16058_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_8_8_3_phi_fu_4601_p4.read());
}

void matrix_mult::thread_grp_fu_16064_p2() {
    grp_fu_16064_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_8_9_3_phi_fu_4591_p4.read());
}

void matrix_mult::thread_grp_fu_16070_p2() {
    grp_fu_16070_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_9_0_3_phi_fu_4581_p4.read());
}

void matrix_mult::thread_grp_fu_16080_p2() {
    grp_fu_16080_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_9_2_3_phi_fu_4561_p4.read());
}

void matrix_mult::thread_grp_fu_16090_p2() {
    grp_fu_16090_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_9_4_3_phi_fu_4541_p4.read());
}

void matrix_mult::thread_grp_fu_16100_p2() {
    grp_fu_16100_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_9_6_3_phi_fu_4521_p4.read());
}

void matrix_mult::thread_grp_fu_16110_p2() {
    grp_fu_16110_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_9_8_3_phi_fu_4501_p4.read());
}

void matrix_mult::thread_grp_fu_16116_p2() {
    grp_fu_16116_p2 = (!icmp_ln43_reg_19579.read()[0].is_01())? sc_lv<16>(): ((icmp_ln43_reg_19579.read()[0].to_bool())? ap_const_lv16_0: ap_phi_mux_c_buff_9_9_3_phi_fu_4491_p4.read());
}

void matrix_mult::thread_i_1_fu_13888_p2() {
    i_1_fu_13888_p2 = (!ap_phi_mux_i1_0_phi_fu_4480_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_i1_0_phi_fu_4480_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrix_mult::thread_i_2_fu_15204_p2() {
    i_2_fu_15204_p2 = (!i5_0_reg_5499.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i5_0_reg_5499.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrix_mult::thread_i_fu_13748_p2() {
    i_fu_13748_p2 = (!ap_phi_mux_i_0_phi_fu_4468_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_i_0_phi_fu_4468_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrix_mult::thread_icmp_ln13_10_fu_5674_p2() {
    icmp_ln13_10_fu_5674_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_1);
}

void matrix_mult::thread_icmp_ln13_11_fu_5688_p2() {
    icmp_ln13_11_fu_5688_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_0);
}

void matrix_mult::thread_icmp_ln13_12_fu_5522_p2() {
    icmp_ln13_12_fu_5522_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_8);
}

void matrix_mult::thread_icmp_ln13_13_fu_5528_p2() {
    icmp_ln13_13_fu_5528_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_7);
}

void matrix_mult::thread_icmp_ln13_14_fu_5534_p2() {
    icmp_ln13_14_fu_5534_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_6);
}

void matrix_mult::thread_icmp_ln13_15_fu_5540_p2() {
    icmp_ln13_15_fu_5540_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_5);
}

void matrix_mult::thread_icmp_ln13_16_fu_5546_p2() {
    icmp_ln13_16_fu_5546_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_4);
}

void matrix_mult::thread_icmp_ln13_17_fu_5552_p2() {
    icmp_ln13_17_fu_5552_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_3);
}

void matrix_mult::thread_icmp_ln13_18_fu_5558_p2() {
    icmp_ln13_18_fu_5558_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_2);
}

void matrix_mult::thread_icmp_ln13_19_fu_5564_p2() {
    icmp_ln13_19_fu_5564_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_1);
}

void matrix_mult::thread_icmp_ln13_1_fu_13736_p2() {
    icmp_ln13_1_fu_13736_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_9);
}

void matrix_mult::thread_icmp_ln13_2_fu_5516_p2() {
    icmp_ln13_2_fu_5516_p2 = (!phi_ln13_reg_3441.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_reg_3441.read() == ap_const_lv4_0);
}

void matrix_mult::thread_icmp_ln13_3_fu_5576_p2() {
    icmp_ln13_3_fu_5576_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_8);
}

void matrix_mult::thread_icmp_ln13_4_fu_5590_p2() {
    icmp_ln13_4_fu_5590_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_7);
}

void matrix_mult::thread_icmp_ln13_5_fu_5604_p2() {
    icmp_ln13_5_fu_5604_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_6);
}

void matrix_mult::thread_icmp_ln13_6_fu_5618_p2() {
    icmp_ln13_6_fu_5618_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_5);
}

void matrix_mult::thread_icmp_ln13_7_fu_5632_p2() {
    icmp_ln13_7_fu_5632_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_4);
}

void matrix_mult::thread_icmp_ln13_8_fu_5646_p2() {
    icmp_ln13_8_fu_5646_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_3);
}

void matrix_mult::thread_icmp_ln13_9_fu_5660_p2() {
    icmp_ln13_9_fu_5660_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_2);
}

void matrix_mult::thread_icmp_ln13_fu_13730_p2() {
    icmp_ln13_fu_13730_p2 = (!phi_ln13_1_reg_4453.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln13_1_reg_4453.read() == ap_const_lv4_9);
}

void matrix_mult::thread_icmp_ln20_fu_13742_p2() {
    icmp_ln20_fu_13742_p2 = (!ap_phi_mux_i_0_phi_fu_4468_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_4468_p4.read() == ap_const_lv4_A);
}

void matrix_mult::thread_icmp_ln27_fu_13882_p2() {
    icmp_ln27_fu_13882_p2 = (!ap_phi_mux_i1_0_phi_fu_4480_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i1_0_phi_fu_4480_p4.read() == ap_const_lv4_A);
}

void matrix_mult::thread_icmp_ln36_fu_14016_p2() {
    icmp_ln36_fu_14016_p2 = (!k_0_reg_5488.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_5488.read() == ap_const_lv4_A);
}

void matrix_mult::thread_icmp_ln43_fu_14028_p2() {
    icmp_ln43_fu_14028_p2 = (!k_0_reg_5488.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_5488.read() == ap_const_lv4_0);
}

void matrix_mult::thread_icmp_ln56_fu_15198_p2() {
    icmp_ln56_fu_15198_p2 = (!i5_0_reg_5499.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i5_0_reg_5499.read() == ap_const_lv4_A);
}

void matrix_mult::thread_k_fu_14022_p2() {
    k_fu_14022_p2 = (!k_0_reg_5488.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(k_0_reg_5488.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrix_mult::thread_or_ln23_fu_13785_p2() {
    or_ln23_fu_13785_p2 = (add_ln23_fu_13774_p2.read() | ap_const_lv7_1);
}

void matrix_mult::thread_or_ln30_fu_13925_p2() {
    or_ln30_fu_13925_p2 = (add_ln30_fu_13914_p2.read() | ap_const_lv7_1);
}

void matrix_mult::thread_or_ln59_fu_15295_p2() {
    or_ln59_fu_15295_p2 = (add_ln59_fu_15230_p2.read() | ap_const_lv7_1);
}

void matrix_mult::thread_select_ln13_1000_fu_13170_p3() {
    select_ln13_1000_fu_13170_p3 = (!icmp_ln13_17_reg_16451.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_17_reg_16451.read()[0].to_bool())? select_ln13_259_fu_7702_p3.read(): c_buff_3_4_145_reg_4103.read());
}

void matrix_mult::thread_select_ln13_1001_fu_13177_p3() {
    select_ln13_1001_fu_13177_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_1000_fu_13170_p3.read());
}

void matrix_mult::thread_select_ln13_1002_fu_13184_p3() {
    select_ln13_1002_fu_13184_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_1001_fu_13177_p3.read());
}

void matrix_mult::thread_select_ln13_1003_fu_13191_p3() {
    select_ln13_1003_fu_13191_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_1002_fu_13184_p3.read());
}

void matrix_mult::thread_select_ln13_1004_fu_13198_p3() {
    select_ln13_1004_fu_13198_p3 = (!icmp_ln13_17_reg_16451.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_17_reg_16451.read()[0].to_bool())? select_ln13_263_fu_7734_p3.read(): c_buff_3_3_143_reg_4113.read());
}

void matrix_mult::thread_select_ln13_1005_fu_13205_p3() {
    select_ln13_1005_fu_13205_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? c_buff_3_3_143_reg_4113.read(): select_ln13_1004_fu_13198_p3.read());
}

void matrix_mult::thread_select_ln13_1006_fu_13212_p3() {
    select_ln13_1006_fu_13212_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_3_3_143_reg_4113.read(): select_ln13_1005_fu_13205_p3.read());
}

void matrix_mult::thread_select_ln13_1007_fu_13219_p3() {
    select_ln13_1007_fu_13219_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_3_3_143_reg_4113.read(): select_ln13_1006_fu_13212_p3.read());
}

void matrix_mult::thread_select_ln13_1008_fu_13226_p3() {
    select_ln13_1008_fu_13226_p3 = (!icmp_ln13_17_reg_16451.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_17_reg_16451.read()[0].to_bool())? select_ln13_266_fu_7758_p3.read(): c_buff_3_2_142_reg_4123.read());
}

void matrix_mult::thread_select_ln13_1009_fu_13233_p3() {
    select_ln13_1009_fu_13233_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? c_buff_3_2_142_reg_4123.read(): select_ln13_1008_fu_13226_p3.read());
}

void matrix_mult::thread_select_ln13_100_fu_6430_p3() {
    select_ln13_100_fu_6430_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_0_3_14_reg_4413.read(): select_ln13_99_fu_6422_p3.read());
}

void matrix_mult::thread_select_ln13_1010_fu_13240_p3() {
    select_ln13_1010_fu_13240_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_3_2_142_reg_4123.read(): select_ln13_1009_fu_13233_p3.read());
}

void matrix_mult::thread_select_ln13_1011_fu_13247_p3() {
    select_ln13_1011_fu_13247_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_3_2_142_reg_4123.read(): select_ln13_1010_fu_13240_p3.read());
}

void matrix_mult::thread_select_ln13_1012_fu_13254_p3() {
    select_ln13_1012_fu_13254_p3 = (!icmp_ln13_17_reg_16451.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_17_reg_16451.read()[0].to_bool())? select_ln13_268_fu_7774_p3.read(): c_buff_3_1_140_reg_4133.read());
}

void matrix_mult::thread_select_ln13_1013_fu_13261_p3() {
    select_ln13_1013_fu_13261_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? c_buff_3_1_140_reg_4133.read(): select_ln13_1012_fu_13254_p3.read());
}

void matrix_mult::thread_select_ln13_1014_fu_13268_p3() {
    select_ln13_1014_fu_13268_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_3_1_140_reg_4133.read(): select_ln13_1013_fu_13261_p3.read());
}

void matrix_mult::thread_select_ln13_1015_fu_13275_p3() {
    select_ln13_1015_fu_13275_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_3_1_140_reg_4133.read(): select_ln13_1014_fu_13268_p3.read());
}

void matrix_mult::thread_select_ln13_1016_fu_13282_p3() {
    select_ln13_1016_fu_13282_p3 = (!icmp_ln13_17_reg_16451.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_17_reg_16451.read()[0].to_bool())? select_ln13_269_fu_7782_p3.read(): c_buff_3_0_139_reg_4143.read());
}

void matrix_mult::thread_select_ln13_1017_fu_13289_p3() {
    select_ln13_1017_fu_13289_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? c_buff_3_0_139_reg_4143.read(): select_ln13_1016_fu_13282_p3.read());
}

void matrix_mult::thread_select_ln13_1018_fu_13296_p3() {
    select_ln13_1018_fu_13296_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_3_0_139_reg_4143.read(): select_ln13_1017_fu_13289_p3.read());
}

void matrix_mult::thread_select_ln13_1019_fu_13303_p3() {
    select_ln13_1019_fu_13303_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_3_0_139_reg_4143.read(): select_ln13_1018_fu_13296_p3.read());
}

void matrix_mult::thread_select_ln13_101_fu_6438_p3() {
    select_ln13_101_fu_6438_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_0_3_14_reg_4413.read(): select_ln13_100_fu_6430_p3.read());
}

void matrix_mult::thread_select_ln13_1020_fu_13310_p3() {
    select_ln13_1020_fu_13310_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_170_fu_6990_p3.read(): c_buff_2_9_138_reg_4153.read());
}

void matrix_mult::thread_select_ln13_1021_fu_13317_p3() {
    select_ln13_1021_fu_13317_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_1020_fu_13310_p3.read());
}

void matrix_mult::thread_select_ln13_1022_fu_13324_p3() {
    select_ln13_1022_fu_13324_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_1021_fu_13317_p3.read());
}

void matrix_mult::thread_select_ln13_1023_fu_13331_p3() {
    select_ln13_1023_fu_13331_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_179_fu_7062_p3.read(): c_buff_2_8_137_reg_4163.read());
}

void matrix_mult::thread_select_ln13_1024_fu_13338_p3() {
    select_ln13_1024_fu_13338_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_1023_fu_13331_p3.read());
}

void matrix_mult::thread_select_ln13_1025_fu_13345_p3() {
    select_ln13_1025_fu_13345_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_1024_fu_13338_p3.read());
}

void matrix_mult::thread_select_ln13_1026_fu_13352_p3() {
    select_ln13_1026_fu_13352_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_187_fu_7126_p3.read(): c_buff_2_7_135_reg_4173.read());
}

void matrix_mult::thread_select_ln13_1027_fu_13359_p3() {
    select_ln13_1027_fu_13359_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_1026_fu_13352_p3.read());
}

void matrix_mult::thread_select_ln13_1028_fu_13366_p3() {
    select_ln13_1028_fu_13366_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_1027_fu_13359_p3.read());
}

void matrix_mult::thread_select_ln13_1029_fu_13373_p3() {
    select_ln13_1029_fu_13373_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_194_fu_7182_p3.read(): c_buff_2_6_134_reg_4183.read());
}

void matrix_mult::thread_select_ln13_102_fu_6446_p3() {
    select_ln13_102_fu_6446_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_0_2_13_reg_4423.read());
}

void matrix_mult::thread_select_ln13_1030_fu_13380_p3() {
    select_ln13_1030_fu_13380_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_1029_fu_13373_p3.read());
}

void matrix_mult::thread_select_ln13_1031_fu_13387_p3() {
    select_ln13_1031_fu_13387_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_1030_fu_13380_p3.read());
}

void matrix_mult::thread_select_ln13_1032_fu_13394_p3() {
    select_ln13_1032_fu_13394_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_200_fu_7230_p3.read(): c_buff_2_5_132_reg_4193.read());
}

void matrix_mult::thread_select_ln13_1033_fu_13401_p3() {
    select_ln13_1033_fu_13401_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_1032_fu_13394_p3.read());
}

void matrix_mult::thread_select_ln13_1034_fu_13408_p3() {
    select_ln13_1034_fu_13408_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_1033_fu_13401_p3.read());
}

void matrix_mult::thread_select_ln13_1035_fu_13415_p3() {
    select_ln13_1035_fu_13415_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_205_fu_7270_p3.read(): c_buff_2_4_131_reg_4203.read());
}

void matrix_mult::thread_select_ln13_1036_fu_13422_p3() {
    select_ln13_1036_fu_13422_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_4_131_reg_4203.read(): select_ln13_1035_fu_13415_p3.read());
}

void matrix_mult::thread_select_ln13_1037_fu_13429_p3() {
    select_ln13_1037_fu_13429_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_4_131_reg_4203.read(): select_ln13_1036_fu_13422_p3.read());
}

void matrix_mult::thread_select_ln13_1038_fu_13436_p3() {
    select_ln13_1038_fu_13436_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_209_fu_7302_p3.read(): c_buff_2_3_129_reg_4213.read());
}

void matrix_mult::thread_select_ln13_1039_fu_13443_p3() {
    select_ln13_1039_fu_13443_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_3_129_reg_4213.read(): select_ln13_1038_fu_13436_p3.read());
}

void matrix_mult::thread_select_ln13_103_fu_6454_p3() {
    select_ln13_103_fu_6454_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_0_2_13_reg_4423.read(): select_ln13_102_fu_6446_p3.read());
}

void matrix_mult::thread_select_ln13_1040_fu_13450_p3() {
    select_ln13_1040_fu_13450_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_3_129_reg_4213.read(): select_ln13_1039_fu_13443_p3.read());
}

void matrix_mult::thread_select_ln13_1041_fu_13457_p3() {
    select_ln13_1041_fu_13457_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_212_fu_7326_p3.read(): c_buff_2_2_128_reg_4223.read());
}

void matrix_mult::thread_select_ln13_1042_fu_13464_p3() {
    select_ln13_1042_fu_13464_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_2_128_reg_4223.read(): select_ln13_1041_fu_13457_p3.read());
}

void matrix_mult::thread_select_ln13_1043_fu_13471_p3() {
    select_ln13_1043_fu_13471_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_2_128_reg_4223.read(): select_ln13_1042_fu_13464_p3.read());
}

void matrix_mult::thread_select_ln13_1044_fu_13478_p3() {
    select_ln13_1044_fu_13478_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_214_fu_7342_p3.read(): c_buff_2_1_126_reg_4233.read());
}

void matrix_mult::thread_select_ln13_1045_fu_13485_p3() {
    select_ln13_1045_fu_13485_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_1_126_reg_4233.read(): select_ln13_1044_fu_13478_p3.read());
}

void matrix_mult::thread_select_ln13_1046_fu_13492_p3() {
    select_ln13_1046_fu_13492_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_1_126_reg_4233.read(): select_ln13_1045_fu_13485_p3.read());
}

void matrix_mult::thread_select_ln13_1047_fu_13499_p3() {
    select_ln13_1047_fu_13499_p3 = (!icmp_ln13_18_reg_16525.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_18_reg_16525.read()[0].to_bool())? select_ln13_215_fu_7350_p3.read(): c_buff_2_0_125_reg_4243.read());
}

void matrix_mult::thread_select_ln13_1048_fu_13506_p3() {
    select_ln13_1048_fu_13506_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? c_buff_2_0_125_reg_4243.read(): select_ln13_1047_fu_13499_p3.read());
}

void matrix_mult::thread_select_ln13_1049_fu_13513_p3() {
    select_ln13_1049_fu_13513_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_2_0_125_reg_4243.read(): select_ln13_1048_fu_13506_p3.read());
}

void matrix_mult::thread_select_ln13_104_fu_6462_p3() {
    select_ln13_104_fu_6462_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_0_2_13_reg_4423.read(): select_ln13_103_fu_6454_p3.read());
}

void matrix_mult::thread_select_ln13_1050_fu_13520_p3() {
    select_ln13_1050_fu_13520_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_116_fu_6558_p3.read(): c_buff_1_9_124_reg_4253.read());
}

void matrix_mult::thread_select_ln13_1051_fu_13527_p3() {
    select_ln13_1051_fu_13527_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_1050_fu_13520_p3.read());
}

void matrix_mult::thread_select_ln13_1052_fu_13534_p3() {
    select_ln13_1052_fu_13534_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_125_fu_6630_p3.read(): c_buff_1_8_123_reg_4263.read());
}

void matrix_mult::thread_select_ln13_1053_fu_13541_p3() {
    select_ln13_1053_fu_13541_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_1052_fu_13534_p3.read());
}

void matrix_mult::thread_select_ln13_1054_fu_13548_p3() {
    select_ln13_1054_fu_13548_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_133_fu_6694_p3.read(): c_buff_1_7_121_reg_4273.read());
}

void matrix_mult::thread_select_ln13_1055_fu_13555_p3() {
    select_ln13_1055_fu_13555_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_1054_fu_13548_p3.read());
}

void matrix_mult::thread_select_ln13_1056_fu_13562_p3() {
    select_ln13_1056_fu_13562_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_140_fu_6750_p3.read(): c_buff_1_6_120_reg_4283.read());
}

void matrix_mult::thread_select_ln13_1057_fu_13569_p3() {
    select_ln13_1057_fu_13569_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_1056_fu_13562_p3.read());
}

void matrix_mult::thread_select_ln13_1058_fu_13576_p3() {
    select_ln13_1058_fu_13576_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_146_fu_6798_p3.read(): c_buff_1_5_118_reg_4293.read());
}

void matrix_mult::thread_select_ln13_1059_fu_13583_p3() {
    select_ln13_1059_fu_13583_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_5_118_reg_4293.read(): select_ln13_1058_fu_13576_p3.read());
}

void matrix_mult::thread_select_ln13_105_fu_6470_p3() {
    select_ln13_105_fu_6470_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_0_1_12_reg_4433.read());
}

void matrix_mult::thread_select_ln13_1060_fu_13590_p3() {
    select_ln13_1060_fu_13590_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_151_fu_6838_p3.read(): c_buff_1_4_117_reg_4303.read());
}

void matrix_mult::thread_select_ln13_1061_fu_13597_p3() {
    select_ln13_1061_fu_13597_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_4_117_reg_4303.read(): select_ln13_1060_fu_13590_p3.read());
}

void matrix_mult::thread_select_ln13_1062_fu_13604_p3() {
    select_ln13_1062_fu_13604_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_155_fu_6870_p3.read(): c_buff_1_3_115_reg_4313.read());
}

void matrix_mult::thread_select_ln13_1063_fu_13611_p3() {
    select_ln13_1063_fu_13611_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_3_115_reg_4313.read(): select_ln13_1062_fu_13604_p3.read());
}

void matrix_mult::thread_select_ln13_1064_fu_13618_p3() {
    select_ln13_1064_fu_13618_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_158_fu_6894_p3.read(): c_buff_1_2_114_reg_4323.read());
}

void matrix_mult::thread_select_ln13_1065_fu_13625_p3() {
    select_ln13_1065_fu_13625_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_2_114_reg_4323.read(): select_ln13_1064_fu_13618_p3.read());
}

void matrix_mult::thread_select_ln13_1066_fu_13632_p3() {
    select_ln13_1066_fu_13632_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_160_fu_6910_p3.read(): c_buff_1_1_112_reg_4333.read());
}

void matrix_mult::thread_select_ln13_1067_fu_13639_p3() {
    select_ln13_1067_fu_13639_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_1_112_reg_4333.read(): select_ln13_1066_fu_13632_p3.read());
}

void matrix_mult::thread_select_ln13_1068_fu_13646_p3() {
    select_ln13_1068_fu_13646_p3 = (!icmp_ln13_19_reg_16609.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_19_reg_16609.read()[0].to_bool())? select_ln13_161_fu_6918_p3.read(): c_buff_1_0_111_reg_4343.read());
}

void matrix_mult::thread_select_ln13_1069_fu_13653_p3() {
    select_ln13_1069_fu_13653_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? c_buff_1_0_111_reg_4343.read(): select_ln13_1068_fu_13646_p3.read());
}

void matrix_mult::thread_select_ln13_106_fu_6478_p3() {
    select_ln13_106_fu_6478_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_0_1_12_reg_4433.read(): select_ln13_105_fu_6470_p3.read());
}

void matrix_mult::thread_select_ln13_1070_fu_13660_p3() {
    select_ln13_1070_fu_13660_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_62_fu_6126_p3.read(): c_buff_0_9_110_reg_4353.read());
}

void matrix_mult::thread_select_ln13_1071_fu_13667_p3() {
    select_ln13_1071_fu_13667_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_71_fu_6198_p3.read(): c_buff_0_8_19_reg_4363.read());
}

void matrix_mult::thread_select_ln13_1072_fu_13674_p3() {
    select_ln13_1072_fu_13674_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_79_fu_6262_p3.read(): c_buff_0_7_18_reg_4373.read());
}

void matrix_mult::thread_select_ln13_1073_fu_13681_p3() {
    select_ln13_1073_fu_13681_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_86_fu_6318_p3.read(): c_buff_0_6_17_reg_4383.read());
}

void matrix_mult::thread_select_ln13_1074_fu_13688_p3() {
    select_ln13_1074_fu_13688_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_92_fu_6366_p3.read(): c_buff_0_5_16_reg_4393.read());
}

void matrix_mult::thread_select_ln13_1075_fu_13695_p3() {
    select_ln13_1075_fu_13695_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_97_fu_6406_p3.read(): c_buff_0_4_15_reg_4403.read());
}

void matrix_mult::thread_select_ln13_1076_fu_13702_p3() {
    select_ln13_1076_fu_13702_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_101_fu_6438_p3.read(): c_buff_0_3_14_reg_4413.read());
}

void matrix_mult::thread_select_ln13_1077_fu_13709_p3() {
    select_ln13_1077_fu_13709_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_104_fu_6462_p3.read(): c_buff_0_2_13_reg_4423.read());
}

void matrix_mult::thread_select_ln13_1078_fu_13716_p3() {
    select_ln13_1078_fu_13716_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_106_fu_6478_p3.read(): c_buff_0_1_12_reg_4433.read());
}

void matrix_mult::thread_select_ln13_1079_fu_13723_p3() {
    select_ln13_1079_fu_13723_p3 = (!icmp_ln13_2_reg_16127.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_2_reg_16127.read()[0].to_bool())? select_ln13_107_fu_6486_p3.read(): c_buff_0_0_11_reg_4443.read());
}

void matrix_mult::thread_select_ln13_107_fu_6486_p3() {
    select_ln13_107_fu_6486_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_0_0_11_reg_4443.read());
}

void matrix_mult::thread_select_ln13_108_fu_6494_p3() {
    select_ln13_108_fu_6494_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_109_fu_6502_p3() {
    select_ln13_109_fu_6502_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_108_fu_6494_p3.read());
}

void matrix_mult::thread_select_ln13_10_fu_5710_p3() {
    select_ln13_10_fu_5710_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_9_fu_5702_p3.read());
}

void matrix_mult::thread_select_ln13_110_fu_6510_p3() {
    select_ln13_110_fu_6510_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_109_fu_6502_p3.read());
}

void matrix_mult::thread_select_ln13_111_fu_6518_p3() {
    select_ln13_111_fu_6518_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_110_fu_6510_p3.read());
}

void matrix_mult::thread_select_ln13_112_fu_6526_p3() {
    select_ln13_112_fu_6526_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_111_fu_6518_p3.read());
}

void matrix_mult::thread_select_ln13_113_fu_6534_p3() {
    select_ln13_113_fu_6534_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_112_fu_6526_p3.read());
}

void matrix_mult::thread_select_ln13_114_fu_6542_p3() {
    select_ln13_114_fu_6542_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_113_fu_6534_p3.read());
}

void matrix_mult::thread_select_ln13_115_fu_6550_p3() {
    select_ln13_115_fu_6550_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_114_fu_6542_p3.read());
}

void matrix_mult::thread_select_ln13_116_fu_6558_p3() {
    select_ln13_116_fu_6558_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_9_124_reg_4253.read(): select_ln13_115_fu_6550_p3.read());
}

void matrix_mult::thread_select_ln13_117_fu_6566_p3() {
    select_ln13_117_fu_6566_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_8_123_reg_4263.read());
}

void matrix_mult::thread_select_ln13_118_fu_6574_p3() {
    select_ln13_118_fu_6574_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_117_fu_6566_p3.read());
}

void matrix_mult::thread_select_ln13_119_fu_6582_p3() {
    select_ln13_119_fu_6582_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_118_fu_6574_p3.read());
}

void matrix_mult::thread_select_ln13_11_fu_5718_p3() {
    select_ln13_11_fu_5718_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_10_fu_5710_p3.read());
}

void matrix_mult::thread_select_ln13_120_fu_6590_p3() {
    select_ln13_120_fu_6590_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_119_fu_6582_p3.read());
}

void matrix_mult::thread_select_ln13_121_fu_6598_p3() {
    select_ln13_121_fu_6598_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_120_fu_6590_p3.read());
}

void matrix_mult::thread_select_ln13_122_fu_6606_p3() {
    select_ln13_122_fu_6606_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_121_fu_6598_p3.read());
}

void matrix_mult::thread_select_ln13_123_fu_6614_p3() {
    select_ln13_123_fu_6614_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_122_fu_6606_p3.read());
}

void matrix_mult::thread_select_ln13_124_fu_6622_p3() {
    select_ln13_124_fu_6622_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_123_fu_6614_p3.read());
}

void matrix_mult::thread_select_ln13_125_fu_6630_p3() {
    select_ln13_125_fu_6630_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_8_123_reg_4263.read(): select_ln13_124_fu_6622_p3.read());
}

void matrix_mult::thread_select_ln13_126_fu_6638_p3() {
    select_ln13_126_fu_6638_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_7_121_reg_4273.read());
}

void matrix_mult::thread_select_ln13_127_fu_6646_p3() {
    select_ln13_127_fu_6646_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_126_fu_6638_p3.read());
}

void matrix_mult::thread_select_ln13_128_fu_6654_p3() {
    select_ln13_128_fu_6654_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_127_fu_6646_p3.read());
}

void matrix_mult::thread_select_ln13_129_fu_6662_p3() {
    select_ln13_129_fu_6662_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_128_fu_6654_p3.read());
}

void matrix_mult::thread_select_ln13_12_fu_5726_p3() {
    select_ln13_12_fu_5726_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_11_fu_5718_p3.read());
}

void matrix_mult::thread_select_ln13_130_fu_6670_p3() {
    select_ln13_130_fu_6670_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_129_fu_6662_p3.read());
}

void matrix_mult::thread_select_ln13_131_fu_6678_p3() {
    select_ln13_131_fu_6678_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_130_fu_6670_p3.read());
}

void matrix_mult::thread_select_ln13_132_fu_6686_p3() {
    select_ln13_132_fu_6686_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_131_fu_6678_p3.read());
}

void matrix_mult::thread_select_ln13_133_fu_6694_p3() {
    select_ln13_133_fu_6694_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_7_121_reg_4273.read(): select_ln13_132_fu_6686_p3.read());
}

void matrix_mult::thread_select_ln13_134_fu_6702_p3() {
    select_ln13_134_fu_6702_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_6_120_reg_4283.read());
}

void matrix_mult::thread_select_ln13_135_fu_6710_p3() {
    select_ln13_135_fu_6710_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_134_fu_6702_p3.read());
}

void matrix_mult::thread_select_ln13_136_fu_6718_p3() {
    select_ln13_136_fu_6718_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_135_fu_6710_p3.read());
}

void matrix_mult::thread_select_ln13_137_fu_6726_p3() {
    select_ln13_137_fu_6726_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_136_fu_6718_p3.read());
}

void matrix_mult::thread_select_ln13_138_fu_6734_p3() {
    select_ln13_138_fu_6734_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_137_fu_6726_p3.read());
}

void matrix_mult::thread_select_ln13_139_fu_6742_p3() {
    select_ln13_139_fu_6742_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_138_fu_6734_p3.read());
}

void matrix_mult::thread_select_ln13_13_fu_5734_p3() {
    select_ln13_13_fu_5734_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_12_fu_5726_p3.read());
}

void matrix_mult::thread_select_ln13_140_fu_6750_p3() {
    select_ln13_140_fu_6750_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_6_120_reg_4283.read(): select_ln13_139_fu_6742_p3.read());
}

void matrix_mult::thread_select_ln13_141_fu_6758_p3() {
    select_ln13_141_fu_6758_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_5_118_reg_4293.read());
}

void matrix_mult::thread_select_ln13_142_fu_6766_p3() {
    select_ln13_142_fu_6766_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_1_5_118_reg_4293.read(): select_ln13_141_fu_6758_p3.read());
}

void matrix_mult::thread_select_ln13_143_fu_6774_p3() {
    select_ln13_143_fu_6774_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_1_5_118_reg_4293.read(): select_ln13_142_fu_6766_p3.read());
}

void matrix_mult::thread_select_ln13_144_fu_6782_p3() {
    select_ln13_144_fu_6782_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_5_118_reg_4293.read(): select_ln13_143_fu_6774_p3.read());
}

void matrix_mult::thread_select_ln13_145_fu_6790_p3() {
    select_ln13_145_fu_6790_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_5_118_reg_4293.read(): select_ln13_144_fu_6782_p3.read());
}

void matrix_mult::thread_select_ln13_146_fu_6798_p3() {
    select_ln13_146_fu_6798_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_5_118_reg_4293.read(): select_ln13_145_fu_6790_p3.read());
}

void matrix_mult::thread_select_ln13_147_fu_6806_p3() {
    select_ln13_147_fu_6806_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_4_117_reg_4303.read());
}

void matrix_mult::thread_select_ln13_148_fu_6814_p3() {
    select_ln13_148_fu_6814_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_1_4_117_reg_4303.read(): select_ln13_147_fu_6806_p3.read());
}

void matrix_mult::thread_select_ln13_149_fu_6822_p3() {
    select_ln13_149_fu_6822_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_4_117_reg_4303.read(): select_ln13_148_fu_6814_p3.read());
}

void matrix_mult::thread_select_ln13_14_fu_5742_p3() {
    select_ln13_14_fu_5742_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_13_fu_5734_p3.read());
}

void matrix_mult::thread_select_ln13_150_fu_6830_p3() {
    select_ln13_150_fu_6830_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_4_117_reg_4303.read(): select_ln13_149_fu_6822_p3.read());
}

void matrix_mult::thread_select_ln13_151_fu_6838_p3() {
    select_ln13_151_fu_6838_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_4_117_reg_4303.read(): select_ln13_150_fu_6830_p3.read());
}

void matrix_mult::thread_select_ln13_152_fu_6846_p3() {
    select_ln13_152_fu_6846_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_3_115_reg_4313.read());
}

void matrix_mult::thread_select_ln13_153_fu_6854_p3() {
    select_ln13_153_fu_6854_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_1_3_115_reg_4313.read(): select_ln13_152_fu_6846_p3.read());
}

void matrix_mult::thread_select_ln13_154_fu_6862_p3() {
    select_ln13_154_fu_6862_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_3_115_reg_4313.read(): select_ln13_153_fu_6854_p3.read());
}

void matrix_mult::thread_select_ln13_155_fu_6870_p3() {
    select_ln13_155_fu_6870_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_3_115_reg_4313.read(): select_ln13_154_fu_6862_p3.read());
}

void matrix_mult::thread_select_ln13_156_fu_6878_p3() {
    select_ln13_156_fu_6878_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_2_114_reg_4323.read());
}

void matrix_mult::thread_select_ln13_157_fu_6886_p3() {
    select_ln13_157_fu_6886_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_1_2_114_reg_4323.read(): select_ln13_156_fu_6878_p3.read());
}

void matrix_mult::thread_select_ln13_158_fu_6894_p3() {
    select_ln13_158_fu_6894_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_2_114_reg_4323.read(): select_ln13_157_fu_6886_p3.read());
}

void matrix_mult::thread_select_ln13_159_fu_6902_p3() {
    select_ln13_159_fu_6902_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_1_112_reg_4333.read());
}

void matrix_mult::thread_select_ln13_15_fu_5750_p3() {
    select_ln13_15_fu_5750_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_14_fu_5742_p3.read());
}

void matrix_mult::thread_select_ln13_160_fu_6910_p3() {
    select_ln13_160_fu_6910_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_1_1_112_reg_4333.read(): select_ln13_159_fu_6902_p3.read());
}

void matrix_mult::thread_select_ln13_161_fu_6918_p3() {
    select_ln13_161_fu_6918_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_1_0_111_reg_4343.read());
}

void matrix_mult::thread_select_ln13_162_fu_6926_p3() {
    select_ln13_162_fu_6926_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_163_fu_6934_p3() {
    select_ln13_163_fu_6934_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_162_fu_6926_p3.read());
}

void matrix_mult::thread_select_ln13_164_fu_6942_p3() {
    select_ln13_164_fu_6942_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_163_fu_6934_p3.read());
}

void matrix_mult::thread_select_ln13_165_fu_6950_p3() {
    select_ln13_165_fu_6950_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_164_fu_6942_p3.read());
}

void matrix_mult::thread_select_ln13_166_fu_6958_p3() {
    select_ln13_166_fu_6958_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_165_fu_6950_p3.read());
}

void matrix_mult::thread_select_ln13_167_fu_6966_p3() {
    select_ln13_167_fu_6966_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_166_fu_6958_p3.read());
}

void matrix_mult::thread_select_ln13_168_fu_6974_p3() {
    select_ln13_168_fu_6974_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_167_fu_6966_p3.read());
}

void matrix_mult::thread_select_ln13_169_fu_6982_p3() {
    select_ln13_169_fu_6982_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_168_fu_6974_p3.read());
}

void matrix_mult::thread_select_ln13_16_fu_5758_p3() {
    select_ln13_16_fu_5758_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_15_fu_5750_p3.read());
}

void matrix_mult::thread_select_ln13_170_fu_6990_p3() {
    select_ln13_170_fu_6990_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_9_138_reg_4153.read(): select_ln13_169_fu_6982_p3.read());
}

void matrix_mult::thread_select_ln13_171_fu_6998_p3() {
    select_ln13_171_fu_6998_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_8_137_reg_4163.read());
}

void matrix_mult::thread_select_ln13_172_fu_7006_p3() {
    select_ln13_172_fu_7006_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_171_fu_6998_p3.read());
}

void matrix_mult::thread_select_ln13_173_fu_7014_p3() {
    select_ln13_173_fu_7014_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_172_fu_7006_p3.read());
}

void matrix_mult::thread_select_ln13_174_fu_7022_p3() {
    select_ln13_174_fu_7022_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_173_fu_7014_p3.read());
}

void matrix_mult::thread_select_ln13_175_fu_7030_p3() {
    select_ln13_175_fu_7030_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_174_fu_7022_p3.read());
}

void matrix_mult::thread_select_ln13_176_fu_7038_p3() {
    select_ln13_176_fu_7038_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_175_fu_7030_p3.read());
}

void matrix_mult::thread_select_ln13_177_fu_7046_p3() {
    select_ln13_177_fu_7046_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_176_fu_7038_p3.read());
}

void matrix_mult::thread_select_ln13_178_fu_7054_p3() {
    select_ln13_178_fu_7054_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_177_fu_7046_p3.read());
}

void matrix_mult::thread_select_ln13_179_fu_7062_p3() {
    select_ln13_179_fu_7062_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_8_137_reg_4163.read(): select_ln13_178_fu_7054_p3.read());
}

void matrix_mult::thread_select_ln13_17_fu_5766_p3() {
    select_ln13_17_fu_5766_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_9_8_1135_reg_3463.read(): select_ln13_16_fu_5758_p3.read());
}

void matrix_mult::thread_select_ln13_180_fu_7070_p3() {
    select_ln13_180_fu_7070_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_7_135_reg_4173.read());
}

void matrix_mult::thread_select_ln13_181_fu_7078_p3() {
    select_ln13_181_fu_7078_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_180_fu_7070_p3.read());
}

void matrix_mult::thread_select_ln13_182_fu_7086_p3() {
    select_ln13_182_fu_7086_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_181_fu_7078_p3.read());
}

void matrix_mult::thread_select_ln13_183_fu_7094_p3() {
    select_ln13_183_fu_7094_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_182_fu_7086_p3.read());
}

void matrix_mult::thread_select_ln13_184_fu_7102_p3() {
    select_ln13_184_fu_7102_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_183_fu_7094_p3.read());
}

void matrix_mult::thread_select_ln13_185_fu_7110_p3() {
    select_ln13_185_fu_7110_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_184_fu_7102_p3.read());
}

void matrix_mult::thread_select_ln13_186_fu_7118_p3() {
    select_ln13_186_fu_7118_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_185_fu_7110_p3.read());
}

void matrix_mult::thread_select_ln13_187_fu_7126_p3() {
    select_ln13_187_fu_7126_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_7_135_reg_4173.read(): select_ln13_186_fu_7118_p3.read());
}

void matrix_mult::thread_select_ln13_188_fu_7134_p3() {
    select_ln13_188_fu_7134_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_6_134_reg_4183.read());
}

void matrix_mult::thread_select_ln13_189_fu_7142_p3() {
    select_ln13_189_fu_7142_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_188_fu_7134_p3.read());
}

void matrix_mult::thread_select_ln13_18_fu_5774_p3() {
    select_ln13_18_fu_5774_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_9_7_1133_reg_3473.read());
}

void matrix_mult::thread_select_ln13_190_fu_7150_p3() {
    select_ln13_190_fu_7150_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_189_fu_7142_p3.read());
}

void matrix_mult::thread_select_ln13_191_fu_7158_p3() {
    select_ln13_191_fu_7158_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_190_fu_7150_p3.read());
}

void matrix_mult::thread_select_ln13_192_fu_7166_p3() {
    select_ln13_192_fu_7166_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_191_fu_7158_p3.read());
}

void matrix_mult::thread_select_ln13_193_fu_7174_p3() {
    select_ln13_193_fu_7174_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_192_fu_7166_p3.read());
}

void matrix_mult::thread_select_ln13_194_fu_7182_p3() {
    select_ln13_194_fu_7182_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_6_134_reg_4183.read(): select_ln13_193_fu_7174_p3.read());
}

void matrix_mult::thread_select_ln13_195_fu_7190_p3() {
    select_ln13_195_fu_7190_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_5_132_reg_4193.read());
}

void matrix_mult::thread_select_ln13_196_fu_7198_p3() {
    select_ln13_196_fu_7198_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_195_fu_7190_p3.read());
}

void matrix_mult::thread_select_ln13_197_fu_7206_p3() {
    select_ln13_197_fu_7206_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_196_fu_7198_p3.read());
}

void matrix_mult::thread_select_ln13_198_fu_7214_p3() {
    select_ln13_198_fu_7214_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_197_fu_7206_p3.read());
}

void matrix_mult::thread_select_ln13_199_fu_7222_p3() {
    select_ln13_199_fu_7222_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_198_fu_7214_p3.read());
}

void matrix_mult::thread_select_ln13_19_fu_5782_p3() {
    select_ln13_19_fu_5782_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_18_fu_5774_p3.read());
}

void matrix_mult::thread_select_ln13_1_fu_5596_p3() {
    select_ln13_1_fu_5596_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_9_9_1136_reg_3453.read(): select_ln13_fu_5582_p3.read());
}

void matrix_mult::thread_select_ln13_200_fu_7230_p3() {
    select_ln13_200_fu_7230_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_5_132_reg_4193.read(): select_ln13_199_fu_7222_p3.read());
}

void matrix_mult::thread_select_ln13_201_fu_7238_p3() {
    select_ln13_201_fu_7238_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_4_131_reg_4203.read());
}

void matrix_mult::thread_select_ln13_202_fu_7246_p3() {
    select_ln13_202_fu_7246_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_2_4_131_reg_4203.read(): select_ln13_201_fu_7238_p3.read());
}

void matrix_mult::thread_select_ln13_203_fu_7254_p3() {
    select_ln13_203_fu_7254_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_4_131_reg_4203.read(): select_ln13_202_fu_7246_p3.read());
}

void matrix_mult::thread_select_ln13_204_fu_7262_p3() {
    select_ln13_204_fu_7262_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_4_131_reg_4203.read(): select_ln13_203_fu_7254_p3.read());
}

void matrix_mult::thread_select_ln13_205_fu_7270_p3() {
    select_ln13_205_fu_7270_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_4_131_reg_4203.read(): select_ln13_204_fu_7262_p3.read());
}

void matrix_mult::thread_select_ln13_206_fu_7278_p3() {
    select_ln13_206_fu_7278_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_3_129_reg_4213.read());
}

void matrix_mult::thread_select_ln13_207_fu_7286_p3() {
    select_ln13_207_fu_7286_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_2_3_129_reg_4213.read(): select_ln13_206_fu_7278_p3.read());
}

void matrix_mult::thread_select_ln13_208_fu_7294_p3() {
    select_ln13_208_fu_7294_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_3_129_reg_4213.read(): select_ln13_207_fu_7286_p3.read());
}

void matrix_mult::thread_select_ln13_209_fu_7302_p3() {
    select_ln13_209_fu_7302_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_3_129_reg_4213.read(): select_ln13_208_fu_7294_p3.read());
}

void matrix_mult::thread_select_ln13_20_fu_5790_p3() {
    select_ln13_20_fu_5790_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_19_fu_5782_p3.read());
}

void matrix_mult::thread_select_ln13_210_fu_7310_p3() {
    select_ln13_210_fu_7310_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_2_128_reg_4223.read());
}

void matrix_mult::thread_select_ln13_211_fu_7318_p3() {
    select_ln13_211_fu_7318_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_2_2_128_reg_4223.read(): select_ln13_210_fu_7310_p3.read());
}

void matrix_mult::thread_select_ln13_212_fu_7326_p3() {
    select_ln13_212_fu_7326_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_2_128_reg_4223.read(): select_ln13_211_fu_7318_p3.read());
}

void matrix_mult::thread_select_ln13_213_fu_7334_p3() {
    select_ln13_213_fu_7334_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_1_126_reg_4233.read());
}

void matrix_mult::thread_select_ln13_214_fu_7342_p3() {
    select_ln13_214_fu_7342_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_2_1_126_reg_4233.read(): select_ln13_213_fu_7334_p3.read());
}

void matrix_mult::thread_select_ln13_215_fu_7350_p3() {
    select_ln13_215_fu_7350_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_2_0_125_reg_4243.read());
}

void matrix_mult::thread_select_ln13_216_fu_7358_p3() {
    select_ln13_216_fu_7358_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_217_fu_7366_p3() {
    select_ln13_217_fu_7366_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_216_fu_7358_p3.read());
}

void matrix_mult::thread_select_ln13_218_fu_7374_p3() {
    select_ln13_218_fu_7374_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_217_fu_7366_p3.read());
}

void matrix_mult::thread_select_ln13_219_fu_7382_p3() {
    select_ln13_219_fu_7382_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_218_fu_7374_p3.read());
}

void matrix_mult::thread_select_ln13_21_fu_5798_p3() {
    select_ln13_21_fu_5798_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_20_fu_5790_p3.read());
}

void matrix_mult::thread_select_ln13_220_fu_7390_p3() {
    select_ln13_220_fu_7390_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_219_fu_7382_p3.read());
}

void matrix_mult::thread_select_ln13_221_fu_7398_p3() {
    select_ln13_221_fu_7398_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_220_fu_7390_p3.read());
}

void matrix_mult::thread_select_ln13_222_fu_7406_p3() {
    select_ln13_222_fu_7406_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_221_fu_7398_p3.read());
}

void matrix_mult::thread_select_ln13_223_fu_7414_p3() {
    select_ln13_223_fu_7414_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_222_fu_7406_p3.read());
}

void matrix_mult::thread_select_ln13_224_fu_7422_p3() {
    select_ln13_224_fu_7422_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_9_152_reg_4053.read(): select_ln13_223_fu_7414_p3.read());
}

void matrix_mult::thread_select_ln13_225_fu_7430_p3() {
    select_ln13_225_fu_7430_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_8_151_reg_4063.read());
}

void matrix_mult::thread_select_ln13_226_fu_7438_p3() {
    select_ln13_226_fu_7438_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_225_fu_7430_p3.read());
}

void matrix_mult::thread_select_ln13_227_fu_7446_p3() {
    select_ln13_227_fu_7446_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_226_fu_7438_p3.read());
}

void matrix_mult::thread_select_ln13_228_fu_7454_p3() {
    select_ln13_228_fu_7454_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_227_fu_7446_p3.read());
}

void matrix_mult::thread_select_ln13_229_fu_7462_p3() {
    select_ln13_229_fu_7462_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_228_fu_7454_p3.read());
}

void matrix_mult::thread_select_ln13_22_fu_5806_p3() {
    select_ln13_22_fu_5806_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_21_fu_5798_p3.read());
}

void matrix_mult::thread_select_ln13_230_fu_7470_p3() {
    select_ln13_230_fu_7470_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_229_fu_7462_p3.read());
}

void matrix_mult::thread_select_ln13_231_fu_7478_p3() {
    select_ln13_231_fu_7478_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_230_fu_7470_p3.read());
}

void matrix_mult::thread_select_ln13_232_fu_7486_p3() {
    select_ln13_232_fu_7486_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_231_fu_7478_p3.read());
}

void matrix_mult::thread_select_ln13_233_fu_7494_p3() {
    select_ln13_233_fu_7494_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_8_151_reg_4063.read(): select_ln13_232_fu_7486_p3.read());
}

void matrix_mult::thread_select_ln13_234_fu_7502_p3() {
    select_ln13_234_fu_7502_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_7_149_reg_4073.read());
}

void matrix_mult::thread_select_ln13_235_fu_7510_p3() {
    select_ln13_235_fu_7510_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_234_fu_7502_p3.read());
}

void matrix_mult::thread_select_ln13_236_fu_7518_p3() {
    select_ln13_236_fu_7518_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_235_fu_7510_p3.read());
}

void matrix_mult::thread_select_ln13_237_fu_7526_p3() {
    select_ln13_237_fu_7526_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_236_fu_7518_p3.read());
}

void matrix_mult::thread_select_ln13_238_fu_7534_p3() {
    select_ln13_238_fu_7534_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_237_fu_7526_p3.read());
}

void matrix_mult::thread_select_ln13_239_fu_7542_p3() {
    select_ln13_239_fu_7542_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_238_fu_7534_p3.read());
}

void matrix_mult::thread_select_ln13_23_fu_5814_p3() {
    select_ln13_23_fu_5814_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_22_fu_5806_p3.read());
}

void matrix_mult::thread_select_ln13_240_fu_7550_p3() {
    select_ln13_240_fu_7550_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_239_fu_7542_p3.read());
}

void matrix_mult::thread_select_ln13_241_fu_7558_p3() {
    select_ln13_241_fu_7558_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_7_149_reg_4073.read(): select_ln13_240_fu_7550_p3.read());
}

void matrix_mult::thread_select_ln13_242_fu_7566_p3() {
    select_ln13_242_fu_7566_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_6_148_reg_4083.read());
}

void matrix_mult::thread_select_ln13_243_fu_7574_p3() {
    select_ln13_243_fu_7574_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_3_6_148_reg_4083.read(): select_ln13_242_fu_7566_p3.read());
}

void matrix_mult::thread_select_ln13_244_fu_7582_p3() {
    select_ln13_244_fu_7582_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_3_6_148_reg_4083.read(): select_ln13_243_fu_7574_p3.read());
}

void matrix_mult::thread_select_ln13_245_fu_7590_p3() {
    select_ln13_245_fu_7590_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_3_6_148_reg_4083.read(): select_ln13_244_fu_7582_p3.read());
}

void matrix_mult::thread_select_ln13_246_fu_7598_p3() {
    select_ln13_246_fu_7598_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_6_148_reg_4083.read(): select_ln13_245_fu_7590_p3.read());
}

void matrix_mult::thread_select_ln13_247_fu_7606_p3() {
    select_ln13_247_fu_7606_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_6_148_reg_4083.read(): select_ln13_246_fu_7598_p3.read());
}

void matrix_mult::thread_select_ln13_248_fu_7614_p3() {
    select_ln13_248_fu_7614_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_6_148_reg_4083.read(): select_ln13_247_fu_7606_p3.read());
}

void matrix_mult::thread_select_ln13_249_fu_7622_p3() {
    select_ln13_249_fu_7622_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_5_146_reg_4093.read());
}

void matrix_mult::thread_select_ln13_24_fu_5822_p3() {
    select_ln13_24_fu_5822_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_23_fu_5814_p3.read());
}

void matrix_mult::thread_select_ln13_250_fu_7630_p3() {
    select_ln13_250_fu_7630_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_3_5_146_reg_4093.read(): select_ln13_249_fu_7622_p3.read());
}

void matrix_mult::thread_select_ln13_251_fu_7638_p3() {
    select_ln13_251_fu_7638_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_3_5_146_reg_4093.read(): select_ln13_250_fu_7630_p3.read());
}

void matrix_mult::thread_select_ln13_252_fu_7646_p3() {
    select_ln13_252_fu_7646_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_5_146_reg_4093.read(): select_ln13_251_fu_7638_p3.read());
}

void matrix_mult::thread_select_ln13_253_fu_7654_p3() {
    select_ln13_253_fu_7654_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_5_146_reg_4093.read(): select_ln13_252_fu_7646_p3.read());
}

void matrix_mult::thread_select_ln13_254_fu_7662_p3() {
    select_ln13_254_fu_7662_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_5_146_reg_4093.read(): select_ln13_253_fu_7654_p3.read());
}

void matrix_mult::thread_select_ln13_255_fu_7670_p3() {
    select_ln13_255_fu_7670_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_4_145_reg_4103.read());
}

void matrix_mult::thread_select_ln13_256_fu_7678_p3() {
    select_ln13_256_fu_7678_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_255_fu_7670_p3.read());
}

void matrix_mult::thread_select_ln13_257_fu_7686_p3() {
    select_ln13_257_fu_7686_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_256_fu_7678_p3.read());
}

void matrix_mult::thread_select_ln13_258_fu_7694_p3() {
    select_ln13_258_fu_7694_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_257_fu_7686_p3.read());
}

void matrix_mult::thread_select_ln13_259_fu_7702_p3() {
    select_ln13_259_fu_7702_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_4_145_reg_4103.read(): select_ln13_258_fu_7694_p3.read());
}

void matrix_mult::thread_select_ln13_25_fu_5830_p3() {
    select_ln13_25_fu_5830_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_9_7_1133_reg_3473.read(): select_ln13_24_fu_5822_p3.read());
}

void matrix_mult::thread_select_ln13_260_fu_7710_p3() {
    select_ln13_260_fu_7710_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_3_143_reg_4113.read());
}

void matrix_mult::thread_select_ln13_261_fu_7718_p3() {
    select_ln13_261_fu_7718_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_3_3_143_reg_4113.read(): select_ln13_260_fu_7710_p3.read());
}

void matrix_mult::thread_select_ln13_262_fu_7726_p3() {
    select_ln13_262_fu_7726_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_3_143_reg_4113.read(): select_ln13_261_fu_7718_p3.read());
}

void matrix_mult::thread_select_ln13_263_fu_7734_p3() {
    select_ln13_263_fu_7734_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_3_143_reg_4113.read(): select_ln13_262_fu_7726_p3.read());
}

void matrix_mult::thread_select_ln13_264_fu_7742_p3() {
    select_ln13_264_fu_7742_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_2_142_reg_4123.read());
}

void matrix_mult::thread_select_ln13_265_fu_7750_p3() {
    select_ln13_265_fu_7750_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_3_2_142_reg_4123.read(): select_ln13_264_fu_7742_p3.read());
}

void matrix_mult::thread_select_ln13_266_fu_7758_p3() {
    select_ln13_266_fu_7758_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_2_142_reg_4123.read(): select_ln13_265_fu_7750_p3.read());
}

void matrix_mult::thread_select_ln13_267_fu_7766_p3() {
    select_ln13_267_fu_7766_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_1_140_reg_4133.read());
}

void matrix_mult::thread_select_ln13_268_fu_7774_p3() {
    select_ln13_268_fu_7774_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_3_1_140_reg_4133.read(): select_ln13_267_fu_7766_p3.read());
}

void matrix_mult::thread_select_ln13_269_fu_7782_p3() {
    select_ln13_269_fu_7782_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_3_0_139_reg_4143.read());
}

void matrix_mult::thread_select_ln13_26_fu_5838_p3() {
    select_ln13_26_fu_5838_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_9_6_1132_reg_3483.read());
}

void matrix_mult::thread_select_ln13_270_fu_7790_p3() {
    select_ln13_270_fu_7790_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_271_fu_7798_p3() {
    select_ln13_271_fu_7798_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_270_fu_7790_p3.read());
}

void matrix_mult::thread_select_ln13_272_fu_7806_p3() {
    select_ln13_272_fu_7806_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_271_fu_7798_p3.read());
}

void matrix_mult::thread_select_ln13_273_fu_7814_p3() {
    select_ln13_273_fu_7814_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_272_fu_7806_p3.read());
}

void matrix_mult::thread_select_ln13_274_fu_7822_p3() {
    select_ln13_274_fu_7822_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_273_fu_7814_p3.read());
}

void matrix_mult::thread_select_ln13_275_fu_7830_p3() {
    select_ln13_275_fu_7830_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_274_fu_7822_p3.read());
}

void matrix_mult::thread_select_ln13_276_fu_7838_p3() {
    select_ln13_276_fu_7838_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_275_fu_7830_p3.read());
}

void matrix_mult::thread_select_ln13_277_fu_7846_p3() {
    select_ln13_277_fu_7846_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_276_fu_7838_p3.read());
}

void matrix_mult::thread_select_ln13_278_fu_7854_p3() {
    select_ln13_278_fu_7854_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_9_166_reg_3953.read(): select_ln13_277_fu_7846_p3.read());
}

void matrix_mult::thread_select_ln13_279_fu_7862_p3() {
    select_ln13_279_fu_7862_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_8_165_reg_3963.read());
}

void matrix_mult::thread_select_ln13_27_fu_5846_p3() {
    select_ln13_27_fu_5846_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_9_6_1132_reg_3483.read(): select_ln13_26_fu_5838_p3.read());
}

void matrix_mult::thread_select_ln13_280_fu_7870_p3() {
    select_ln13_280_fu_7870_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_279_fu_7862_p3.read());
}

void matrix_mult::thread_select_ln13_281_fu_7878_p3() {
    select_ln13_281_fu_7878_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_280_fu_7870_p3.read());
}

void matrix_mult::thread_select_ln13_282_fu_7886_p3() {
    select_ln13_282_fu_7886_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_281_fu_7878_p3.read());
}

void matrix_mult::thread_select_ln13_283_fu_7894_p3() {
    select_ln13_283_fu_7894_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_282_fu_7886_p3.read());
}

void matrix_mult::thread_select_ln13_284_fu_7902_p3() {
    select_ln13_284_fu_7902_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_283_fu_7894_p3.read());
}

void matrix_mult::thread_select_ln13_285_fu_7910_p3() {
    select_ln13_285_fu_7910_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_284_fu_7902_p3.read());
}

void matrix_mult::thread_select_ln13_286_fu_7918_p3() {
    select_ln13_286_fu_7918_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_285_fu_7910_p3.read());
}

void matrix_mult::thread_select_ln13_287_fu_7926_p3() {
    select_ln13_287_fu_7926_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_8_165_reg_3963.read(): select_ln13_286_fu_7918_p3.read());
}

void matrix_mult::thread_select_ln13_288_fu_7934_p3() {
    select_ln13_288_fu_7934_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_7_163_reg_3973.read());
}

void matrix_mult::thread_select_ln13_289_fu_7942_p3() {
    select_ln13_289_fu_7942_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_288_fu_7934_p3.read());
}

void matrix_mult::thread_select_ln13_28_fu_5854_p3() {
    select_ln13_28_fu_5854_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_9_6_1132_reg_3483.read(): select_ln13_27_fu_5846_p3.read());
}

void matrix_mult::thread_select_ln13_290_fu_7950_p3() {
    select_ln13_290_fu_7950_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_289_fu_7942_p3.read());
}

void matrix_mult::thread_select_ln13_291_fu_7958_p3() {
    select_ln13_291_fu_7958_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_290_fu_7950_p3.read());
}

void matrix_mult::thread_select_ln13_292_fu_7966_p3() {
    select_ln13_292_fu_7966_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_291_fu_7958_p3.read());
}

void matrix_mult::thread_select_ln13_293_fu_7974_p3() {
    select_ln13_293_fu_7974_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_292_fu_7966_p3.read());
}

void matrix_mult::thread_select_ln13_294_fu_7982_p3() {
    select_ln13_294_fu_7982_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_293_fu_7974_p3.read());
}

void matrix_mult::thread_select_ln13_295_fu_7990_p3() {
    select_ln13_295_fu_7990_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_7_163_reg_3973.read(): select_ln13_294_fu_7982_p3.read());
}

void matrix_mult::thread_select_ln13_296_fu_7998_p3() {
    select_ln13_296_fu_7998_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_6_162_reg_3983.read());
}

void matrix_mult::thread_select_ln13_297_fu_8006_p3() {
    select_ln13_297_fu_8006_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_4_6_162_reg_3983.read(): select_ln13_296_fu_7998_p3.read());
}

void matrix_mult::thread_select_ln13_298_fu_8014_p3() {
    select_ln13_298_fu_8014_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_4_6_162_reg_3983.read(): select_ln13_297_fu_8006_p3.read());
}

void matrix_mult::thread_select_ln13_299_fu_8022_p3() {
    select_ln13_299_fu_8022_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_4_6_162_reg_3983.read(): select_ln13_298_fu_8014_p3.read());
}

void matrix_mult::thread_select_ln13_29_fu_5862_p3() {
    select_ln13_29_fu_5862_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_9_6_1132_reg_3483.read(): select_ln13_28_fu_5854_p3.read());
}

void matrix_mult::thread_select_ln13_2_fu_5610_p3() {
    select_ln13_2_fu_5610_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_9_9_1136_reg_3453.read(): select_ln13_1_fu_5596_p3.read());
}

void matrix_mult::thread_select_ln13_300_fu_8030_p3() {
    select_ln13_300_fu_8030_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_6_162_reg_3983.read(): select_ln13_299_fu_8022_p3.read());
}

void matrix_mult::thread_select_ln13_301_fu_8038_p3() {
    select_ln13_301_fu_8038_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_6_162_reg_3983.read(): select_ln13_300_fu_8030_p3.read());
}

void matrix_mult::thread_select_ln13_302_fu_8046_p3() {
    select_ln13_302_fu_8046_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_6_162_reg_3983.read(): select_ln13_301_fu_8038_p3.read());
}

void matrix_mult::thread_select_ln13_303_fu_8054_p3() {
    select_ln13_303_fu_8054_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_5_160_reg_3993.read());
}

void matrix_mult::thread_select_ln13_304_fu_8062_p3() {
    select_ln13_304_fu_8062_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_4_5_160_reg_3993.read(): select_ln13_303_fu_8054_p3.read());
}

void matrix_mult::thread_select_ln13_305_fu_8070_p3() {
    select_ln13_305_fu_8070_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_4_5_160_reg_3993.read(): select_ln13_304_fu_8062_p3.read());
}

void matrix_mult::thread_select_ln13_306_fu_8078_p3() {
    select_ln13_306_fu_8078_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_5_160_reg_3993.read(): select_ln13_305_fu_8070_p3.read());
}

void matrix_mult::thread_select_ln13_307_fu_8086_p3() {
    select_ln13_307_fu_8086_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_5_160_reg_3993.read(): select_ln13_306_fu_8078_p3.read());
}

void matrix_mult::thread_select_ln13_308_fu_8094_p3() {
    select_ln13_308_fu_8094_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_5_160_reg_3993.read(): select_ln13_307_fu_8086_p3.read());
}

void matrix_mult::thread_select_ln13_309_fu_8102_p3() {
    select_ln13_309_fu_8102_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_4_159_reg_4003.read());
}

void matrix_mult::thread_select_ln13_30_fu_5870_p3() {
    select_ln13_30_fu_5870_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_9_6_1132_reg_3483.read(): select_ln13_29_fu_5862_p3.read());
}

void matrix_mult::thread_select_ln13_310_fu_8110_p3() {
    select_ln13_310_fu_8110_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_4_4_159_reg_4003.read(): select_ln13_309_fu_8102_p3.read());
}

void matrix_mult::thread_select_ln13_311_fu_8118_p3() {
    select_ln13_311_fu_8118_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_4_159_reg_4003.read(): select_ln13_310_fu_8110_p3.read());
}

void matrix_mult::thread_select_ln13_312_fu_8126_p3() {
    select_ln13_312_fu_8126_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_4_159_reg_4003.read(): select_ln13_311_fu_8118_p3.read());
}

void matrix_mult::thread_select_ln13_313_fu_8134_p3() {
    select_ln13_313_fu_8134_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_4_159_reg_4003.read(): select_ln13_312_fu_8126_p3.read());
}

void matrix_mult::thread_select_ln13_314_fu_8142_p3() {
    select_ln13_314_fu_8142_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_3_157_reg_4013.read());
}

void matrix_mult::thread_select_ln13_315_fu_8150_p3() {
    select_ln13_315_fu_8150_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_4_3_157_reg_4013.read(): select_ln13_314_fu_8142_p3.read());
}

void matrix_mult::thread_select_ln13_316_fu_8158_p3() {
    select_ln13_316_fu_8158_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_3_157_reg_4013.read(): select_ln13_315_fu_8150_p3.read());
}

void matrix_mult::thread_select_ln13_317_fu_8166_p3() {
    select_ln13_317_fu_8166_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_3_157_reg_4013.read(): select_ln13_316_fu_8158_p3.read());
}

void matrix_mult::thread_select_ln13_318_fu_8174_p3() {
    select_ln13_318_fu_8174_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_2_156_reg_4023.read());
}

void matrix_mult::thread_select_ln13_319_fu_8182_p3() {
    select_ln13_319_fu_8182_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_4_2_156_reg_4023.read(): select_ln13_318_fu_8174_p3.read());
}

void matrix_mult::thread_select_ln13_31_fu_5878_p3() {
    select_ln13_31_fu_5878_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_6_1132_reg_3483.read(): select_ln13_30_fu_5870_p3.read());
}

void matrix_mult::thread_select_ln13_320_fu_8190_p3() {
    select_ln13_320_fu_8190_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_2_156_reg_4023.read(): select_ln13_319_fu_8182_p3.read());
}

void matrix_mult::thread_select_ln13_321_fu_8198_p3() {
    select_ln13_321_fu_8198_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_1_154_reg_4033.read());
}

void matrix_mult::thread_select_ln13_322_fu_8206_p3() {
    select_ln13_322_fu_8206_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_4_1_154_reg_4033.read(): select_ln13_321_fu_8198_p3.read());
}

void matrix_mult::thread_select_ln13_323_fu_8214_p3() {
    select_ln13_323_fu_8214_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_4_0_153_reg_4043.read());
}

void matrix_mult::thread_select_ln13_324_fu_8222_p3() {
    select_ln13_324_fu_8222_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_325_fu_8230_p3() {
    select_ln13_325_fu_8230_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_324_fu_8222_p3.read());
}

void matrix_mult::thread_select_ln13_326_fu_8238_p3() {
    select_ln13_326_fu_8238_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_325_fu_8230_p3.read());
}

void matrix_mult::thread_select_ln13_327_fu_8246_p3() {
    select_ln13_327_fu_8246_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_326_fu_8238_p3.read());
}

void matrix_mult::thread_select_ln13_328_fu_8254_p3() {
    select_ln13_328_fu_8254_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_327_fu_8246_p3.read());
}

void matrix_mult::thread_select_ln13_329_fu_8262_p3() {
    select_ln13_329_fu_8262_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_328_fu_8254_p3.read());
}

void matrix_mult::thread_select_ln13_32_fu_5886_p3() {
    select_ln13_32_fu_5886_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_9_6_1132_reg_3483.read(): select_ln13_31_fu_5878_p3.read());
}

void matrix_mult::thread_select_ln13_330_fu_8270_p3() {
    select_ln13_330_fu_8270_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_329_fu_8262_p3.read());
}

void matrix_mult::thread_select_ln13_331_fu_8278_p3() {
    select_ln13_331_fu_8278_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_330_fu_8270_p3.read());
}

void matrix_mult::thread_select_ln13_332_fu_8286_p3() {
    select_ln13_332_fu_8286_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_9_180_reg_3853.read(): select_ln13_331_fu_8278_p3.read());
}

void matrix_mult::thread_select_ln13_333_fu_8294_p3() {
    select_ln13_333_fu_8294_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_8_179_reg_3863.read());
}

void matrix_mult::thread_select_ln13_334_fu_8302_p3() {
    select_ln13_334_fu_8302_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_333_fu_8294_p3.read());
}

void matrix_mult::thread_select_ln13_335_fu_8310_p3() {
    select_ln13_335_fu_8310_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_334_fu_8302_p3.read());
}

void matrix_mult::thread_select_ln13_336_fu_8318_p3() {
    select_ln13_336_fu_8318_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_335_fu_8310_p3.read());
}

void matrix_mult::thread_select_ln13_337_fu_8326_p3() {
    select_ln13_337_fu_8326_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_336_fu_8318_p3.read());
}

void matrix_mult::thread_select_ln13_338_fu_8334_p3() {
    select_ln13_338_fu_8334_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_337_fu_8326_p3.read());
}

void matrix_mult::thread_select_ln13_339_fu_8342_p3() {
    select_ln13_339_fu_8342_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_338_fu_8334_p3.read());
}

void matrix_mult::thread_select_ln13_33_fu_5894_p3() {
    select_ln13_33_fu_5894_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_9_5_1130_reg_3493.read());
}

void matrix_mult::thread_select_ln13_340_fu_8350_p3() {
    select_ln13_340_fu_8350_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_339_fu_8342_p3.read());
}

void matrix_mult::thread_select_ln13_341_fu_8358_p3() {
    select_ln13_341_fu_8358_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_8_179_reg_3863.read(): select_ln13_340_fu_8350_p3.read());
}

void matrix_mult::thread_select_ln13_342_fu_8366_p3() {
    select_ln13_342_fu_8366_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_7_177_reg_3873.read());
}

void matrix_mult::thread_select_ln13_343_fu_8374_p3() {
    select_ln13_343_fu_8374_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_342_fu_8366_p3.read());
}

void matrix_mult::thread_select_ln13_344_fu_8382_p3() {
    select_ln13_344_fu_8382_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_343_fu_8374_p3.read());
}

void matrix_mult::thread_select_ln13_345_fu_8390_p3() {
    select_ln13_345_fu_8390_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_344_fu_8382_p3.read());
}

void matrix_mult::thread_select_ln13_346_fu_8398_p3() {
    select_ln13_346_fu_8398_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_345_fu_8390_p3.read());
}

void matrix_mult::thread_select_ln13_347_fu_8406_p3() {
    select_ln13_347_fu_8406_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_346_fu_8398_p3.read());
}

void matrix_mult::thread_select_ln13_348_fu_8414_p3() {
    select_ln13_348_fu_8414_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_347_fu_8406_p3.read());
}

void matrix_mult::thread_select_ln13_349_fu_8422_p3() {
    select_ln13_349_fu_8422_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_7_177_reg_3873.read(): select_ln13_348_fu_8414_p3.read());
}

void matrix_mult::thread_select_ln13_34_fu_5902_p3() {
    select_ln13_34_fu_5902_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_9_5_1130_reg_3493.read(): select_ln13_33_fu_5894_p3.read());
}

void matrix_mult::thread_select_ln13_350_fu_8430_p3() {
    select_ln13_350_fu_8430_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_6_176_reg_3883.read());
}

void matrix_mult::thread_select_ln13_351_fu_8438_p3() {
    select_ln13_351_fu_8438_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_5_6_176_reg_3883.read(): select_ln13_350_fu_8430_p3.read());
}

void matrix_mult::thread_select_ln13_352_fu_8446_p3() {
    select_ln13_352_fu_8446_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_5_6_176_reg_3883.read(): select_ln13_351_fu_8438_p3.read());
}

void matrix_mult::thread_select_ln13_353_fu_8454_p3() {
    select_ln13_353_fu_8454_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_5_6_176_reg_3883.read(): select_ln13_352_fu_8446_p3.read());
}

void matrix_mult::thread_select_ln13_354_fu_8462_p3() {
    select_ln13_354_fu_8462_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_6_176_reg_3883.read(): select_ln13_353_fu_8454_p3.read());
}

void matrix_mult::thread_select_ln13_355_fu_8470_p3() {
    select_ln13_355_fu_8470_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_6_176_reg_3883.read(): select_ln13_354_fu_8462_p3.read());
}

void matrix_mult::thread_select_ln13_356_fu_8478_p3() {
    select_ln13_356_fu_8478_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_6_176_reg_3883.read(): select_ln13_355_fu_8470_p3.read());
}

void matrix_mult::thread_select_ln13_357_fu_8486_p3() {
    select_ln13_357_fu_8486_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_5_174_reg_3893.read());
}

void matrix_mult::thread_select_ln13_358_fu_8494_p3() {
    select_ln13_358_fu_8494_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_5_5_174_reg_3893.read(): select_ln13_357_fu_8486_p3.read());
}

void matrix_mult::thread_select_ln13_359_fu_8502_p3() {
    select_ln13_359_fu_8502_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_5_5_174_reg_3893.read(): select_ln13_358_fu_8494_p3.read());
}

void matrix_mult::thread_select_ln13_35_fu_5910_p3() {
    select_ln13_35_fu_5910_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_9_5_1130_reg_3493.read(): select_ln13_34_fu_5902_p3.read());
}

void matrix_mult::thread_select_ln13_360_fu_8510_p3() {
    select_ln13_360_fu_8510_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_5_174_reg_3893.read(): select_ln13_359_fu_8502_p3.read());
}

void matrix_mult::thread_select_ln13_361_fu_8518_p3() {
    select_ln13_361_fu_8518_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_5_174_reg_3893.read(): select_ln13_360_fu_8510_p3.read());
}

void matrix_mult::thread_select_ln13_362_fu_8526_p3() {
    select_ln13_362_fu_8526_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_5_174_reg_3893.read(): select_ln13_361_fu_8518_p3.read());
}

void matrix_mult::thread_select_ln13_363_fu_8534_p3() {
    select_ln13_363_fu_8534_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_4_173_reg_3903.read());
}

void matrix_mult::thread_select_ln13_364_fu_8542_p3() {
    select_ln13_364_fu_8542_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_5_4_173_reg_3903.read(): select_ln13_363_fu_8534_p3.read());
}

void matrix_mult::thread_select_ln13_365_fu_8550_p3() {
    select_ln13_365_fu_8550_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_4_173_reg_3903.read(): select_ln13_364_fu_8542_p3.read());
}

void matrix_mult::thread_select_ln13_366_fu_8558_p3() {
    select_ln13_366_fu_8558_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_4_173_reg_3903.read(): select_ln13_365_fu_8550_p3.read());
}

void matrix_mult::thread_select_ln13_367_fu_8566_p3() {
    select_ln13_367_fu_8566_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_4_173_reg_3903.read(): select_ln13_366_fu_8558_p3.read());
}

void matrix_mult::thread_select_ln13_368_fu_8574_p3() {
    select_ln13_368_fu_8574_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_3_171_reg_3913.read());
}

void matrix_mult::thread_select_ln13_369_fu_8582_p3() {
    select_ln13_369_fu_8582_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_5_3_171_reg_3913.read(): select_ln13_368_fu_8574_p3.read());
}

void matrix_mult::thread_select_ln13_36_fu_5918_p3() {
    select_ln13_36_fu_5918_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_9_5_1130_reg_3493.read(): select_ln13_35_fu_5910_p3.read());
}

void matrix_mult::thread_select_ln13_370_fu_8590_p3() {
    select_ln13_370_fu_8590_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_3_171_reg_3913.read(): select_ln13_369_fu_8582_p3.read());
}

void matrix_mult::thread_select_ln13_371_fu_8598_p3() {
    select_ln13_371_fu_8598_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_3_171_reg_3913.read(): select_ln13_370_fu_8590_p3.read());
}

void matrix_mult::thread_select_ln13_372_fu_8606_p3() {
    select_ln13_372_fu_8606_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_2_170_reg_3923.read());
}

void matrix_mult::thread_select_ln13_373_fu_8614_p3() {
    select_ln13_373_fu_8614_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_5_2_170_reg_3923.read(): select_ln13_372_fu_8606_p3.read());
}

void matrix_mult::thread_select_ln13_374_fu_8622_p3() {
    select_ln13_374_fu_8622_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_2_170_reg_3923.read(): select_ln13_373_fu_8614_p3.read());
}

void matrix_mult::thread_select_ln13_375_fu_8630_p3() {
    select_ln13_375_fu_8630_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_1_168_reg_3933.read());
}

void matrix_mult::thread_select_ln13_376_fu_8638_p3() {
    select_ln13_376_fu_8638_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_5_1_168_reg_3933.read(): select_ln13_375_fu_8630_p3.read());
}

void matrix_mult::thread_select_ln13_377_fu_8646_p3() {
    select_ln13_377_fu_8646_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_5_0_167_reg_3943.read());
}

void matrix_mult::thread_select_ln13_378_fu_8654_p3() {
    select_ln13_378_fu_8654_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_379_fu_8662_p3() {
    select_ln13_379_fu_8662_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_378_fu_8654_p3.read());
}

void matrix_mult::thread_select_ln13_37_fu_5926_p3() {
    select_ln13_37_fu_5926_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_5_1130_reg_3493.read(): select_ln13_36_fu_5918_p3.read());
}

void matrix_mult::thread_select_ln13_380_fu_8670_p3() {
    select_ln13_380_fu_8670_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_379_fu_8662_p3.read());
}

void matrix_mult::thread_select_ln13_381_fu_8678_p3() {
    select_ln13_381_fu_8678_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_380_fu_8670_p3.read());
}

void matrix_mult::thread_select_ln13_382_fu_8686_p3() {
    select_ln13_382_fu_8686_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_381_fu_8678_p3.read());
}

void matrix_mult::thread_select_ln13_383_fu_8694_p3() {
    select_ln13_383_fu_8694_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_382_fu_8686_p3.read());
}

void matrix_mult::thread_select_ln13_384_fu_8702_p3() {
    select_ln13_384_fu_8702_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_383_fu_8694_p3.read());
}

void matrix_mult::thread_select_ln13_385_fu_8710_p3() {
    select_ln13_385_fu_8710_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_384_fu_8702_p3.read());
}

void matrix_mult::thread_select_ln13_386_fu_8718_p3() {
    select_ln13_386_fu_8718_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_9_194_reg_3753.read(): select_ln13_385_fu_8710_p3.read());
}

void matrix_mult::thread_select_ln13_387_fu_8726_p3() {
    select_ln13_387_fu_8726_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_8_193_reg_3763.read());
}

void matrix_mult::thread_select_ln13_388_fu_8734_p3() {
    select_ln13_388_fu_8734_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_387_fu_8726_p3.read());
}

void matrix_mult::thread_select_ln13_389_fu_8742_p3() {
    select_ln13_389_fu_8742_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_388_fu_8734_p3.read());
}

void matrix_mult::thread_select_ln13_38_fu_5934_p3() {
    select_ln13_38_fu_5934_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_9_5_1130_reg_3493.read(): select_ln13_37_fu_5926_p3.read());
}

void matrix_mult::thread_select_ln13_390_fu_8750_p3() {
    select_ln13_390_fu_8750_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_389_fu_8742_p3.read());
}

void matrix_mult::thread_select_ln13_391_fu_8758_p3() {
    select_ln13_391_fu_8758_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_390_fu_8750_p3.read());
}

void matrix_mult::thread_select_ln13_392_fu_8766_p3() {
    select_ln13_392_fu_8766_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_391_fu_8758_p3.read());
}

void matrix_mult::thread_select_ln13_393_fu_8774_p3() {
    select_ln13_393_fu_8774_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_392_fu_8766_p3.read());
}

void matrix_mult::thread_select_ln13_394_fu_8782_p3() {
    select_ln13_394_fu_8782_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_393_fu_8774_p3.read());
}

void matrix_mult::thread_select_ln13_395_fu_8790_p3() {
    select_ln13_395_fu_8790_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_8_193_reg_3763.read(): select_ln13_394_fu_8782_p3.read());
}

void matrix_mult::thread_select_ln13_396_fu_8798_p3() {
    select_ln13_396_fu_8798_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_7_191_reg_3773.read());
}

void matrix_mult::thread_select_ln13_397_fu_8806_p3() {
    select_ln13_397_fu_8806_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_396_fu_8798_p3.read());
}

void matrix_mult::thread_select_ln13_398_fu_8814_p3() {
    select_ln13_398_fu_8814_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_397_fu_8806_p3.read());
}

void matrix_mult::thread_select_ln13_399_fu_8822_p3() {
    select_ln13_399_fu_8822_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_398_fu_8814_p3.read());
}

void matrix_mult::thread_select_ln13_39_fu_5942_p3() {
    select_ln13_39_fu_5942_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_9_4_1129_reg_3503.read());
}

void matrix_mult::thread_select_ln13_3_fu_5624_p3() {
    select_ln13_3_fu_5624_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_9_9_1136_reg_3453.read(): select_ln13_2_fu_5610_p3.read());
}

void matrix_mult::thread_select_ln13_400_fu_8830_p3() {
    select_ln13_400_fu_8830_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_399_fu_8822_p3.read());
}

void matrix_mult::thread_select_ln13_401_fu_8838_p3() {
    select_ln13_401_fu_8838_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_400_fu_8830_p3.read());
}

void matrix_mult::thread_select_ln13_402_fu_8846_p3() {
    select_ln13_402_fu_8846_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_401_fu_8838_p3.read());
}

void matrix_mult::thread_select_ln13_403_fu_8854_p3() {
    select_ln13_403_fu_8854_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_7_191_reg_3773.read(): select_ln13_402_fu_8846_p3.read());
}

void matrix_mult::thread_select_ln13_404_fu_8862_p3() {
    select_ln13_404_fu_8862_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_6_190_reg_3783.read());
}

void matrix_mult::thread_select_ln13_405_fu_8870_p3() {
    select_ln13_405_fu_8870_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_6_6_190_reg_3783.read(): select_ln13_404_fu_8862_p3.read());
}

void matrix_mult::thread_select_ln13_406_fu_8878_p3() {
    select_ln13_406_fu_8878_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_6_6_190_reg_3783.read(): select_ln13_405_fu_8870_p3.read());
}

void matrix_mult::thread_select_ln13_407_fu_8886_p3() {
    select_ln13_407_fu_8886_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_6_6_190_reg_3783.read(): select_ln13_406_fu_8878_p3.read());
}

void matrix_mult::thread_select_ln13_408_fu_8894_p3() {
    select_ln13_408_fu_8894_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_6_190_reg_3783.read(): select_ln13_407_fu_8886_p3.read());
}

void matrix_mult::thread_select_ln13_409_fu_8902_p3() {
    select_ln13_409_fu_8902_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_6_190_reg_3783.read(): select_ln13_408_fu_8894_p3.read());
}

void matrix_mult::thread_select_ln13_40_fu_5950_p3() {
    select_ln13_40_fu_5950_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_9_4_1129_reg_3503.read(): select_ln13_39_fu_5942_p3.read());
}

void matrix_mult::thread_select_ln13_410_fu_8910_p3() {
    select_ln13_410_fu_8910_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_6_190_reg_3783.read(): select_ln13_409_fu_8902_p3.read());
}

void matrix_mult::thread_select_ln13_411_fu_8918_p3() {
    select_ln13_411_fu_8918_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_5_188_reg_3793.read());
}

void matrix_mult::thread_select_ln13_412_fu_8926_p3() {
    select_ln13_412_fu_8926_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_6_5_188_reg_3793.read(): select_ln13_411_fu_8918_p3.read());
}

void matrix_mult::thread_select_ln13_413_fu_8934_p3() {
    select_ln13_413_fu_8934_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_6_5_188_reg_3793.read(): select_ln13_412_fu_8926_p3.read());
}

void matrix_mult::thread_select_ln13_414_fu_8942_p3() {
    select_ln13_414_fu_8942_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_5_188_reg_3793.read(): select_ln13_413_fu_8934_p3.read());
}

void matrix_mult::thread_select_ln13_415_fu_8950_p3() {
    select_ln13_415_fu_8950_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_5_188_reg_3793.read(): select_ln13_414_fu_8942_p3.read());
}

void matrix_mult::thread_select_ln13_416_fu_8958_p3() {
    select_ln13_416_fu_8958_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_5_188_reg_3793.read(): select_ln13_415_fu_8950_p3.read());
}

void matrix_mult::thread_select_ln13_417_fu_8966_p3() {
    select_ln13_417_fu_8966_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_4_187_reg_3803.read());
}

void matrix_mult::thread_select_ln13_418_fu_8974_p3() {
    select_ln13_418_fu_8974_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_6_4_187_reg_3803.read(): select_ln13_417_fu_8966_p3.read());
}

void matrix_mult::thread_select_ln13_419_fu_8982_p3() {
    select_ln13_419_fu_8982_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_4_187_reg_3803.read(): select_ln13_418_fu_8974_p3.read());
}

void matrix_mult::thread_select_ln13_41_fu_5958_p3() {
    select_ln13_41_fu_5958_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_9_4_1129_reg_3503.read(): select_ln13_40_fu_5950_p3.read());
}

void matrix_mult::thread_select_ln13_420_fu_8990_p3() {
    select_ln13_420_fu_8990_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_4_187_reg_3803.read(): select_ln13_419_fu_8982_p3.read());
}

void matrix_mult::thread_select_ln13_421_fu_8998_p3() {
    select_ln13_421_fu_8998_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_4_187_reg_3803.read(): select_ln13_420_fu_8990_p3.read());
}

void matrix_mult::thread_select_ln13_422_fu_9006_p3() {
    select_ln13_422_fu_9006_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_3_185_reg_3813.read());
}

void matrix_mult::thread_select_ln13_423_fu_9014_p3() {
    select_ln13_423_fu_9014_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_6_3_185_reg_3813.read(): select_ln13_422_fu_9006_p3.read());
}

void matrix_mult::thread_select_ln13_424_fu_9022_p3() {
    select_ln13_424_fu_9022_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_3_185_reg_3813.read(): select_ln13_423_fu_9014_p3.read());
}

void matrix_mult::thread_select_ln13_425_fu_9030_p3() {
    select_ln13_425_fu_9030_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_3_185_reg_3813.read(): select_ln13_424_fu_9022_p3.read());
}

void matrix_mult::thread_select_ln13_426_fu_9038_p3() {
    select_ln13_426_fu_9038_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_2_184_reg_3823.read());
}

void matrix_mult::thread_select_ln13_427_fu_9046_p3() {
    select_ln13_427_fu_9046_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_6_2_184_reg_3823.read(): select_ln13_426_fu_9038_p3.read());
}

void matrix_mult::thread_select_ln13_428_fu_9054_p3() {
    select_ln13_428_fu_9054_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_2_184_reg_3823.read(): select_ln13_427_fu_9046_p3.read());
}

void matrix_mult::thread_select_ln13_429_fu_9062_p3() {
    select_ln13_429_fu_9062_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_1_182_reg_3833.read());
}

void matrix_mult::thread_select_ln13_42_fu_5966_p3() {
    select_ln13_42_fu_5966_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_4_1129_reg_3503.read(): select_ln13_41_fu_5958_p3.read());
}

void matrix_mult::thread_select_ln13_430_fu_9070_p3() {
    select_ln13_430_fu_9070_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_6_1_182_reg_3833.read(): select_ln13_429_fu_9062_p3.read());
}

void matrix_mult::thread_select_ln13_431_fu_9078_p3() {
    select_ln13_431_fu_9078_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_6_0_181_reg_3843.read());
}

void matrix_mult::thread_select_ln13_432_fu_9086_p3() {
    select_ln13_432_fu_9086_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_433_fu_9094_p3() {
    select_ln13_433_fu_9094_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_432_fu_9086_p3.read());
}

void matrix_mult::thread_select_ln13_434_fu_9102_p3() {
    select_ln13_434_fu_9102_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_433_fu_9094_p3.read());
}

void matrix_mult::thread_select_ln13_435_fu_9110_p3() {
    select_ln13_435_fu_9110_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_434_fu_9102_p3.read());
}

void matrix_mult::thread_select_ln13_436_fu_9118_p3() {
    select_ln13_436_fu_9118_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_435_fu_9110_p3.read());
}

void matrix_mult::thread_select_ln13_437_fu_9126_p3() {
    select_ln13_437_fu_9126_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_436_fu_9118_p3.read());
}

void matrix_mult::thread_select_ln13_438_fu_9134_p3() {
    select_ln13_438_fu_9134_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_437_fu_9126_p3.read());
}

void matrix_mult::thread_select_ln13_439_fu_9142_p3() {
    select_ln13_439_fu_9142_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_438_fu_9134_p3.read());
}

void matrix_mult::thread_select_ln13_43_fu_5974_p3() {
    select_ln13_43_fu_5974_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_9_4_1129_reg_3503.read(): select_ln13_42_fu_5966_p3.read());
}

void matrix_mult::thread_select_ln13_440_fu_9150_p3() {
    select_ln13_440_fu_9150_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_9_1108_reg_3653.read(): select_ln13_439_fu_9142_p3.read());
}

void matrix_mult::thread_select_ln13_441_fu_9158_p3() {
    select_ln13_441_fu_9158_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_8_1107_reg_3663.read());
}

void matrix_mult::thread_select_ln13_442_fu_9166_p3() {
    select_ln13_442_fu_9166_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_441_fu_9158_p3.read());
}

void matrix_mult::thread_select_ln13_443_fu_9174_p3() {
    select_ln13_443_fu_9174_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_442_fu_9166_p3.read());
}

void matrix_mult::thread_select_ln13_444_fu_9182_p3() {
    select_ln13_444_fu_9182_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_443_fu_9174_p3.read());
}

void matrix_mult::thread_select_ln13_445_fu_9190_p3() {
    select_ln13_445_fu_9190_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_444_fu_9182_p3.read());
}

void matrix_mult::thread_select_ln13_446_fu_9198_p3() {
    select_ln13_446_fu_9198_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_445_fu_9190_p3.read());
}

void matrix_mult::thread_select_ln13_447_fu_9206_p3() {
    select_ln13_447_fu_9206_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_446_fu_9198_p3.read());
}

void matrix_mult::thread_select_ln13_448_fu_9214_p3() {
    select_ln13_448_fu_9214_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_447_fu_9206_p3.read());
}

void matrix_mult::thread_select_ln13_449_fu_9222_p3() {
    select_ln13_449_fu_9222_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_8_1107_reg_3663.read(): select_ln13_448_fu_9214_p3.read());
}

void matrix_mult::thread_select_ln13_44_fu_5982_p3() {
    select_ln13_44_fu_5982_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_9_3_1127_reg_3513.read());
}

void matrix_mult::thread_select_ln13_450_fu_9230_p3() {
    select_ln13_450_fu_9230_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_7_1105_reg_3673.read());
}

void matrix_mult::thread_select_ln13_451_fu_9238_p3() {
    select_ln13_451_fu_9238_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_450_fu_9230_p3.read());
}

void matrix_mult::thread_select_ln13_452_fu_9246_p3() {
    select_ln13_452_fu_9246_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_451_fu_9238_p3.read());
}

void matrix_mult::thread_select_ln13_453_fu_9254_p3() {
    select_ln13_453_fu_9254_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_452_fu_9246_p3.read());
}

void matrix_mult::thread_select_ln13_454_fu_9262_p3() {
    select_ln13_454_fu_9262_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_453_fu_9254_p3.read());
}

void matrix_mult::thread_select_ln13_455_fu_9270_p3() {
    select_ln13_455_fu_9270_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_454_fu_9262_p3.read());
}

void matrix_mult::thread_select_ln13_456_fu_9278_p3() {
    select_ln13_456_fu_9278_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_455_fu_9270_p3.read());
}

void matrix_mult::thread_select_ln13_457_fu_9286_p3() {
    select_ln13_457_fu_9286_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_7_1105_reg_3673.read(): select_ln13_456_fu_9278_p3.read());
}

void matrix_mult::thread_select_ln13_458_fu_9294_p3() {
    select_ln13_458_fu_9294_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_6_1104_reg_3683.read());
}

void matrix_mult::thread_select_ln13_459_fu_9302_p3() {
    select_ln13_459_fu_9302_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_7_6_1104_reg_3683.read(): select_ln13_458_fu_9294_p3.read());
}

void matrix_mult::thread_select_ln13_45_fu_5990_p3() {
    select_ln13_45_fu_5990_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_9_3_1127_reg_3513.read(): select_ln13_44_fu_5982_p3.read());
}

void matrix_mult::thread_select_ln13_460_fu_9310_p3() {
    select_ln13_460_fu_9310_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_7_6_1104_reg_3683.read(): select_ln13_459_fu_9302_p3.read());
}

void matrix_mult::thread_select_ln13_461_fu_9318_p3() {
    select_ln13_461_fu_9318_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_7_6_1104_reg_3683.read(): select_ln13_460_fu_9310_p3.read());
}

void matrix_mult::thread_select_ln13_462_fu_9326_p3() {
    select_ln13_462_fu_9326_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_6_1104_reg_3683.read(): select_ln13_461_fu_9318_p3.read());
}

void matrix_mult::thread_select_ln13_463_fu_9334_p3() {
    select_ln13_463_fu_9334_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_6_1104_reg_3683.read(): select_ln13_462_fu_9326_p3.read());
}

void matrix_mult::thread_select_ln13_464_fu_9342_p3() {
    select_ln13_464_fu_9342_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_6_1104_reg_3683.read(): select_ln13_463_fu_9334_p3.read());
}

void matrix_mult::thread_select_ln13_465_fu_9350_p3() {
    select_ln13_465_fu_9350_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_5_1102_reg_3693.read());
}

void matrix_mult::thread_select_ln13_466_fu_9358_p3() {
    select_ln13_466_fu_9358_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_7_5_1102_reg_3693.read(): select_ln13_465_fu_9350_p3.read());
}

void matrix_mult::thread_select_ln13_467_fu_9366_p3() {
    select_ln13_467_fu_9366_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_7_5_1102_reg_3693.read(): select_ln13_466_fu_9358_p3.read());
}

void matrix_mult::thread_select_ln13_468_fu_9374_p3() {
    select_ln13_468_fu_9374_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_5_1102_reg_3693.read(): select_ln13_467_fu_9366_p3.read());
}

void matrix_mult::thread_select_ln13_469_fu_9382_p3() {
    select_ln13_469_fu_9382_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_5_1102_reg_3693.read(): select_ln13_468_fu_9374_p3.read());
}

void matrix_mult::thread_select_ln13_46_fu_5998_p3() {
    select_ln13_46_fu_5998_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_3_1127_reg_3513.read(): select_ln13_45_fu_5990_p3.read());
}

void matrix_mult::thread_select_ln13_470_fu_9390_p3() {
    select_ln13_470_fu_9390_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_5_1102_reg_3693.read(): select_ln13_469_fu_9382_p3.read());
}

void matrix_mult::thread_select_ln13_471_fu_9398_p3() {
    select_ln13_471_fu_9398_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_4_1101_reg_3703.read());
}

void matrix_mult::thread_select_ln13_472_fu_9406_p3() {
    select_ln13_472_fu_9406_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_7_4_1101_reg_3703.read(): select_ln13_471_fu_9398_p3.read());
}

void matrix_mult::thread_select_ln13_473_fu_9414_p3() {
    select_ln13_473_fu_9414_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_4_1101_reg_3703.read(): select_ln13_472_fu_9406_p3.read());
}

void matrix_mult::thread_select_ln13_474_fu_9422_p3() {
    select_ln13_474_fu_9422_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_4_1101_reg_3703.read(): select_ln13_473_fu_9414_p3.read());
}

void matrix_mult::thread_select_ln13_475_fu_9430_p3() {
    select_ln13_475_fu_9430_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_4_1101_reg_3703.read(): select_ln13_474_fu_9422_p3.read());
}

void matrix_mult::thread_select_ln13_476_fu_9438_p3() {
    select_ln13_476_fu_9438_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_3_199_reg_3713.read());
}

void matrix_mult::thread_select_ln13_477_fu_9446_p3() {
    select_ln13_477_fu_9446_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_7_3_199_reg_3713.read(): select_ln13_476_fu_9438_p3.read());
}

void matrix_mult::thread_select_ln13_478_fu_9454_p3() {
    select_ln13_478_fu_9454_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_3_199_reg_3713.read(): select_ln13_477_fu_9446_p3.read());
}

void matrix_mult::thread_select_ln13_479_fu_9462_p3() {
    select_ln13_479_fu_9462_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_3_199_reg_3713.read(): select_ln13_478_fu_9454_p3.read());
}

void matrix_mult::thread_select_ln13_47_fu_6006_p3() {
    select_ln13_47_fu_6006_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_9_3_1127_reg_3513.read(): select_ln13_46_fu_5998_p3.read());
}

void matrix_mult::thread_select_ln13_480_fu_9470_p3() {
    select_ln13_480_fu_9470_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_2_198_reg_3723.read());
}

void matrix_mult::thread_select_ln13_481_fu_9478_p3() {
    select_ln13_481_fu_9478_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_7_2_198_reg_3723.read(): select_ln13_480_fu_9470_p3.read());
}

void matrix_mult::thread_select_ln13_482_fu_9486_p3() {
    select_ln13_482_fu_9486_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_2_198_reg_3723.read(): select_ln13_481_fu_9478_p3.read());
}

void matrix_mult::thread_select_ln13_483_fu_9494_p3() {
    select_ln13_483_fu_9494_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_1_196_reg_3733.read());
}

void matrix_mult::thread_select_ln13_484_fu_9502_p3() {
    select_ln13_484_fu_9502_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_7_1_196_reg_3733.read(): select_ln13_483_fu_9494_p3.read());
}

void matrix_mult::thread_select_ln13_485_fu_9510_p3() {
    select_ln13_485_fu_9510_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_7_0_195_reg_3743.read());
}

void matrix_mult::thread_select_ln13_486_fu_9518_p3() {
    select_ln13_486_fu_9518_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): ap_const_lv16_0);
}

void matrix_mult::thread_select_ln13_487_fu_9526_p3() {
    select_ln13_487_fu_9526_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_486_fu_9518_p3.read());
}

void matrix_mult::thread_select_ln13_488_fu_9534_p3() {
    select_ln13_488_fu_9534_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_487_fu_9526_p3.read());
}

void matrix_mult::thread_select_ln13_489_fu_9542_p3() {
    select_ln13_489_fu_9542_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_488_fu_9534_p3.read());
}

void matrix_mult::thread_select_ln13_48_fu_6014_p3() {
    select_ln13_48_fu_6014_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_9_2_1126_reg_3523.read());
}

void matrix_mult::thread_select_ln13_490_fu_9550_p3() {
    select_ln13_490_fu_9550_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_489_fu_9542_p3.read());
}

void matrix_mult::thread_select_ln13_491_fu_9558_p3() {
    select_ln13_491_fu_9558_p3 = (!icmp_ln13_8_fu_5646_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_8_fu_5646_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_490_fu_9550_p3.read());
}

void matrix_mult::thread_select_ln13_492_fu_9566_p3() {
    select_ln13_492_fu_9566_p3 = (!icmp_ln13_9_fu_5660_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_9_fu_5660_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_491_fu_9558_p3.read());
}

void matrix_mult::thread_select_ln13_493_fu_9574_p3() {
    select_ln13_493_fu_9574_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_492_fu_9566_p3.read());
}

void matrix_mult::thread_select_ln13_494_fu_9582_p3() {
    select_ln13_494_fu_9582_p3 = (!icmp_ln13_11_fu_5688_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_11_fu_5688_p2.read()[0].to_bool())? c_buff_8_9_1122_reg_3553.read(): select_ln13_493_fu_9574_p3.read());
}

void matrix_mult::thread_select_ln13_495_fu_9590_p3() {
    select_ln13_495_fu_9590_p3 = (!icmp_ln13_3_fu_5576_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_3_fu_5576_p2.read()[0].to_bool())? ap_const_lv16_0: c_buff_8_8_1121_reg_3563.read());
}

void matrix_mult::thread_select_ln13_496_fu_9598_p3() {
    select_ln13_496_fu_9598_p3 = (!icmp_ln13_4_fu_5590_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_4_fu_5590_p2.read()[0].to_bool())? c_buff_8_8_1121_reg_3563.read(): select_ln13_495_fu_9590_p3.read());
}

void matrix_mult::thread_select_ln13_497_fu_9606_p3() {
    select_ln13_497_fu_9606_p3 = (!icmp_ln13_5_fu_5604_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_5_fu_5604_p2.read()[0].to_bool())? c_buff_8_8_1121_reg_3563.read(): select_ln13_496_fu_9598_p3.read());
}

void matrix_mult::thread_select_ln13_498_fu_9614_p3() {
    select_ln13_498_fu_9614_p3 = (!icmp_ln13_6_fu_5618_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_6_fu_5618_p2.read()[0].to_bool())? c_buff_8_8_1121_reg_3563.read(): select_ln13_497_fu_9606_p3.read());
}

void matrix_mult::thread_select_ln13_499_fu_9622_p3() {
    select_ln13_499_fu_9622_p3 = (!icmp_ln13_7_fu_5632_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_7_fu_5632_p2.read()[0].to_bool())? c_buff_8_8_1121_reg_3563.read(): select_ln13_498_fu_9614_p3.read());
}

void matrix_mult::thread_select_ln13_49_fu_6022_p3() {
    select_ln13_49_fu_6022_p3 = (!icmp_ln13_10_fu_5674_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln13_10_fu_5674_p2.read()[0].to_bool())? c_buff_9_2_1126_reg_3523.read(): select_ln13_48_fu_6014_p3.read());
}

}

