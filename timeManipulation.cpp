#include <iostream>
#include <ctime>

//using ctime lib to seek today's time.

using namespace std;

int main (){

    time_t ti;
    struct tm * infoTempo;
    char buffer[80];

    time(&ti);
    infoTempo=localtime(&ti);

    strftime(buffer,80,"Dia de hoje: %d/%m/%Y", infoTempo);
    cout << buffer << endl;
    cout << "raw:" << ctime(&ti) << endl;
    cout << "new func:" << asctime(infoTempo) << endl;
    cout << infoTempo->tm_min << endl;

    return 0;
}