#include <iostream>
#include "extLib.h"

//In this, a class was implemented using an external library

using namespace std;

int main(){

    Doll *boneca = new Doll(3);

    boneca->show_dress();

    return 0;
}