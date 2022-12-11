#include <iostream>
#include <chrono>

//crono lib is a progression of time lib

using namespace std;
using namespace chrono;

int main() {
    //steady_clock is used to get this moment
    steady_clock::time_point t1 = steady_clock::now();

    using chrono::system_clock;
    duration<int, ratio<60*60*24>> umDia(1);
    
    system_clock::time_point hoje = system_clock::now();
    system_clock::time_point tomorrow = hoje + umDia;
    system_clock::time_point yesterday = hoje - umDia;

    time_t tt;

    tt = system_clock::to_time_t(hoje);
    cout << "Hoje: " << ctime(&tt) << endl;
    tt = system_clock::to_time_t(tomorrow);
    cout << "Amanha: " << ctime(&tt) << endl;
    tt = system_clock::to_time_t(yesterday);
    cout << "Amanha: " << ctime(&tt) << endl;

    //after all, t2 get this moment
    steady_clock::time_point t2 = steady_clock::now();
    //and subtract t1 and t2
    duration<double> passtime = duration_cast<duration<double>>(t2-t1);

    cout << "tempo de processamento: " << passtime.count() << endl;

    return 0;
}