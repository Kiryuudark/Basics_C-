#include <iostream>
#include <ctime>

using namespace std;

int main (){

    time_t ti;
    struct tm * infoTempo;
    char buffer[80];

    time(&ti);
    infoTempo=localtime(&ti);

    strftime(buffer,80,"Dia de hoje: %d/%m/%Y", infoTempo);

    cout << buffer << endl;

    return 0;
}