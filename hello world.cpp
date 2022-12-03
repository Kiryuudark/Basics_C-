#include <iostream>

using namespace std;

int main (){
    cout << "hello world" << endl;

    int test;
    string nome;

    cout << "type a number: ";
    cin >> test;
    cout << "number typed:" << test << "\n";
    cout << "\ntype a string: ";
    cin >> nome;
    cout << "string typed: " << nome << "\n";

    // ------------

    (test==2) ? nome="lucky day\n" : nome="bad lucky\n";

    cout << nome;

    return 0;
}