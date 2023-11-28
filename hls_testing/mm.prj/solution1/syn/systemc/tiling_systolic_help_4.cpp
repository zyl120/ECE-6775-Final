#include "tiling_systolic_help.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void tiling_systolic_help::thread_ap_return_74() {
    ap_return_74 = out_7_4_0_reg_3227.read();
}

void tiling_systolic_help::thread_ap_return_75() {
    ap_return_75 = out_7_5_0_reg_3237.read();
}

void tiling_systolic_help::thread_ap_return_76() {
    ap_return_76 = out_7_6_0_reg_3247.read();
}

void tiling_systolic_help::thread_ap_return_77() {
    ap_return_77 = out_7_7_0_reg_3257.read();
}

void tiling_systolic_help::thread_ap_return_78() {
    ap_return_78 = out_7_8_0_reg_3267.read();
}

void tiling_systolic_help::thread_ap_return_79() {
    ap_return_79 = out_7_9_0_reg_3277.read();
}

void tiling_systolic_help::thread_ap_return_8() {
    ap_return_8 = out_0_8_0_reg_2567.read();
}

void tiling_systolic_help::thread_ap_return_80() {
    ap_return_80 = out_8_0_0_reg_3287.read();
}

void tiling_systolic_help::thread_ap_return_81() {
    ap_return_81 = out_8_1_0_reg_3297.read();
}

void tiling_systolic_help::thread_ap_return_82() {
    ap_return_82 = out_8_2_0_reg_3307.read();
}

void tiling_systolic_help::thread_ap_return_83() {
    ap_return_83 = out_8_3_0_reg_3317.read();
}

void tiling_systolic_help::thread_ap_return_84() {
    ap_return_84 = out_8_4_0_reg_3327.read();
}

void tiling_systolic_help::thread_ap_return_85() {
    ap_return_85 = out_8_5_0_reg_3337.read();
}

void tiling_systolic_help::thread_ap_return_86() {
    ap_return_86 = out_8_6_0_reg_3347.read();
}

void tiling_systolic_help::thread_ap_return_87() {
    ap_return_87 = out_8_7_0_reg_3357.read();
}

void tiling_systolic_help::thread_ap_return_88() {
    ap_return_88 = out_8_8_0_reg_3367.read();
}

void tiling_systolic_help::thread_ap_return_89() {
    ap_return_89 = out_8_9_0_reg_3377.read();
}

void tiling_systolic_help::thread_ap_return_9() {
    ap_return_9 = out_0_9_0_reg_2577.read();
}

void tiling_systolic_help::thread_ap_return_90() {
    ap_return_90 = out_9_0_0_reg_3387.read();
}

void tiling_systolic_help::thread_ap_return_91() {
    ap_return_91 = out_9_1_0_reg_3397.read();
}

void tiling_systolic_help::thread_ap_return_92() {
    ap_return_92 = out_9_2_0_reg_3407.read();
}

void tiling_systolic_help::thread_ap_return_93() {
    ap_return_93 = out_9_3_0_reg_3417.read();
}

void tiling_systolic_help::thread_ap_return_94() {
    ap_return_94 = out_9_4_0_reg_3427.read();
}

void tiling_systolic_help::thread_ap_return_95() {
    ap_return_95 = out_9_5_0_reg_3437.read();
}

void tiling_systolic_help::thread_ap_return_96() {
    ap_return_96 = out_9_6_0_reg_3447.read();
}

void tiling_systolic_help::thread_ap_return_97() {
    ap_return_97 = out_9_7_0_reg_3457.read();
}

void tiling_systolic_help::thread_ap_return_98() {
    ap_return_98 = out_9_8_0_reg_3467.read();
}

void tiling_systolic_help::thread_ap_return_99() {
    ap_return_99 = out_9_9_0_reg_3477.read();
}

void tiling_systolic_help::thread_grp_fu_104547_p2() {
    grp_fu_104547_p2 = (!icmp_ln15_reg_107305.read()[0].is_01())? sc_lv<16>(): ((icmp_ln15_reg_107305.read()[0].to_bool())? ap_const_lv16_0: tmp_1_fu_99459_p102.read());
}

void tiling_systolic_help::thread_grp_fu_104758_p2() {
    grp_fu_104758_p2 = (!icmp_ln15_reg_107305_pp0_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln15_reg_107305_pp0_iter1_reg.read()[0].to_bool())? ap_const_lv16_0: tmp_7_fu_99883_p102.read());
}

void tiling_systolic_help::thread_grp_fu_104864_p2() {
    grp_fu_104864_p2 = (!icmp_ln15_reg_107305_pp0_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((icmp_ln15_reg_107305_pp0_iter1_reg.read()[0].to_bool())? ap_const_lv16_0: tmp_s_fu_100095_p102.read());
}

void tiling_systolic_help::thread_icmp_ln11_fu_98501_p2() {
    icmp_ln11_fu_98501_p2 = (!k_0_reg_2476.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2476.read() == ap_const_lv4_A);
}

void tiling_systolic_help::thread_icmp_ln15_fu_98513_p2() {
    icmp_ln15_fu_98513_p2 = (!k_0_reg_2476.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_2476.read() == ap_const_lv4_0);
}

void tiling_systolic_help::thread_icmp_ln16_1_fu_98445_p2() {
    icmp_ln16_1_fu_98445_p2 = (!add_ln16_1_fu_98439_p2.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(add_ln16_1_fu_98439_p2.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void tiling_systolic_help::thread_icmp_ln16_fu_98387_p2() {
    icmp_ln16_fu_98387_p2 = (!ii.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(ii.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void tiling_systolic_help::thread_icmp_ln17_fu_98429_p2() {
    icmp_ln17_fu_98429_p2 = (!add_ln17_1_fu_98423_p2.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(add_ln17_1_fu_98423_p2.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void tiling_systolic_help::thread_ii_read_read_fu_670_p2() {
    ii_read_read_fu_670_p2 = ii.read();
}

void tiling_systolic_help::thread_jj_read_read_fu_664_p2() {
    jj_read_read_fu_664_p2 = jj.read();
}

void tiling_systolic_help::thread_k_fu_98507_p2() {
    k_fu_98507_p2 = (!k_0_reg_2476.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(k_0_reg_2476.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void tiling_systolic_help::thread_select_ln15_1_fu_99876_p3() {
    select_ln15_1_fu_99876_p3 = (!icmp_ln15_reg_107305.read()[0].is_01())? sc_lv<16>(): ((icmp_ln15_reg_107305.read()[0].to_bool())? ap_const_lv16_0: tmp_4_fu_99671_p102.read());
}

void tiling_systolic_help::thread_select_ln16_1_fu_98884_p3() {
    select_ln16_1_fu_98884_p3 = (!icmp_ln16_reg_107238.read()[0].is_01())? sc_lv<16>(): ((icmp_ln16_reg_107238.read()[0].to_bool())? tmp_5_fu_98778_p102.read(): ap_const_lv16_0);
}

void tiling_systolic_help::thread_select_ln16_2_fu_99120_p3() {
    select_ln16_2_fu_99120_p3 = (!icmp_ln16_1_reg_107265.read()[0].is_01())? sc_lv<16>(): ((icmp_ln16_1_reg_107265.read()[0].to_bool())? tmp_8_fu_99014_p102.read(): ap_const_lv16_0);
}

void tiling_systolic_help::thread_select_ln16_3_fu_99339_p3() {
    select_ln16_3_fu_99339_p3 = (!icmp_ln16_1_reg_107265.read()[0].is_01())? sc_lv<16>(): ((icmp_ln16_1_reg_107265.read()[0].to_bool())? tmp_10_fu_99233_p102.read(): ap_const_lv16_0);
}

void tiling_systolic_help::thread_select_ln16_fu_98634_p3() {
    select_ln16_fu_98634_p3 = (!icmp_ln16_reg_107238.read()[0].is_01())? sc_lv<16>(): ((icmp_ln16_reg_107238.read()[0].to_bool())? tmp_2_fu_98528_p102.read(): ap_const_lv16_0);
}

void tiling_systolic_help::thread_select_ln17_1_fu_99452_p3() {
    select_ln17_1_fu_99452_p3 = (!icmp_ln17_reg_107254.read()[0].is_01())? sc_lv<16>(): ((icmp_ln17_reg_107254.read()[0].to_bool())? tmp_11_fu_99346_p102.read(): ap_const_lv16_0);
}

void tiling_systolic_help::thread_select_ln17_fu_99002_p3() {
    select_ln17_fu_99002_p3 = (!icmp_ln17_reg_107254.read()[0].is_01())? sc_lv<16>(): ((icmp_ln17_reg_107254.read()[0].to_bool())? tmp_6_fu_98896_p102.read(): ap_const_lv16_0);
}

void tiling_systolic_help::thread_shl_ln16_1_fu_98401_p3() {
    shl_ln16_1_fu_98401_p3 = esl_concat<4,1>(ii.read(), ap_const_lv1_0);
}

void tiling_systolic_help::thread_shl_ln16_2_fu_98451_p3() {
    shl_ln16_2_fu_98451_p3 = esl_concat<4,3>(add_ln16_1_fu_98439_p2.read(), ap_const_lv3_0);
}

void tiling_systolic_help::thread_shl_ln16_3_fu_98459_p3() {
    shl_ln16_3_fu_98459_p3 = esl_concat<4,1>(add_ln16_1_fu_98439_p2.read(), ap_const_lv1_0);
}

void tiling_systolic_help::thread_shl_ln17_1_fu_98649_p3() {
    shl_ln17_1_fu_98649_p3 = esl_concat<4,1>(k_0_reg_2476.read(), ap_const_lv1_0);
}

void tiling_systolic_help::thread_shl_ln1_fu_98641_p3() {
    shl_ln1_fu_98641_p3 = esl_concat<4,3>(k_0_reg_2476.read(), ap_const_lv3_0);
}

void tiling_systolic_help::thread_shl_ln_fu_98393_p3() {
    shl_ln_fu_98393_p3 = esl_concat<4,3>(ii.read(), ap_const_lv3_0);
}

void tiling_systolic_help::thread_zext_ln16_1_fu_98519_p1() {
    zext_ln16_1_fu_98519_p1 = esl_zext<7,4>(k_0_reg_2476.read());
}

void tiling_systolic_help::thread_zext_ln16_2_fu_98467_p1() {
    zext_ln16_2_fu_98467_p1 = esl_zext<7,5>(shl_ln16_3_fu_98459_p3.read());
}

void tiling_systolic_help::thread_zext_ln16_fu_98409_p1() {
    zext_ln16_fu_98409_p1 = esl_zext<7,5>(shl_ln16_1_fu_98401_p3.read());
}

void tiling_systolic_help::thread_zext_ln17_1_fu_98435_p1() {
    zext_ln17_1_fu_98435_p1 = esl_zext<7,4>(add_ln17_1_fu_98423_p2.read());
}

void tiling_systolic_help::thread_zext_ln17_2_fu_98657_p1() {
    zext_ln17_2_fu_98657_p1 = esl_zext<7,5>(shl_ln17_1_fu_98649_p3.read());
}

void tiling_systolic_help::thread_zext_ln17_fu_98419_p1() {
    zext_ln17_fu_98419_p1 = esl_zext<7,4>(jj.read());
}

}

