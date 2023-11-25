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
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address1\" :  \"" << a_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce1\" :  \"" << a_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q1\" :  \"" << a_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address1\" :  \"" << b_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce1\" :  \"" << b_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q1\" :  \"" << b_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_address0\" :  \"" << c_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_ce0\" :  \"" << c_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_we0\" :  \"" << c_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_d0\" :  \"" << c_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_address1\" :  \"" << c_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_ce1\" :  \"" << c_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_we1\" :  \"" << c_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_d1\" :  \"" << c_d1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

