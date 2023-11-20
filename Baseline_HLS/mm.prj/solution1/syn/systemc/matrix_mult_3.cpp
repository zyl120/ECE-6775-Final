#include "matrix_mult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_mult::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_address0\" :  \"" << a_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_ce0\" :  \"" << a_0_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_0_q0\" :  \"" << a_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_address1\" :  \"" << a_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_ce1\" :  \"" << a_0_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_0_q1\" :  \"" << a_0_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_address0\" :  \"" << a_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_ce0\" :  \"" << a_1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_1_q0\" :  \"" << a_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_address1\" :  \"" << a_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_ce1\" :  \"" << a_1_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_1_q1\" :  \"" << a_1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_address0\" :  \"" << b_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_ce0\" :  \"" << b_0_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_0_q0\" :  \"" << b_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_address1\" :  \"" << b_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_ce1\" :  \"" << b_0_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_0_q1\" :  \"" << b_0_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_address0\" :  \"" << b_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_ce0\" :  \"" << b_1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_1_q0\" :  \"" << b_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_address1\" :  \"" << b_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_ce1\" :  \"" << b_1_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_1_q1\" :  \"" << b_1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_address0\" :  \"" << c_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_ce0\" :  \"" << c_0_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_we0\" :  \"" << c_0_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_d0\" :  \"" << c_0_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_address1\" :  \"" << c_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_ce1\" :  \"" << c_0_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_we1\" :  \"" << c_0_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_0_d1\" :  \"" << c_0_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_address0\" :  \"" << c_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_ce0\" :  \"" << c_1_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_we0\" :  \"" << c_1_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_d0\" :  \"" << c_1_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_address1\" :  \"" << c_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_ce1\" :  \"" << c_1_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_we1\" :  \"" << c_1_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_1_d1\" :  \"" << c_1_d1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

