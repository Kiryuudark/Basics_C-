#include <iostream>
#include <fstream>

//this function creates a file "testing.txt", put some words inside and after get this content in a string that shows the content.

using namespace std;

int main(){

    //possible uses: ofstream(output file stream), ifstream (input file stream), fstream(file stream)

    ofstream ptrO;

    ptrO.open("testing.txt");

    ptrO << "hello world\n";

    ptrO.close();

    ifstream ptrI;

    string text;

    ptrI.open("testing.txt");

    if(ptrI.is_open()){
        while(getline(ptrI,text)){
            cout << text;
        }
    }
    else{
        cout << "file not open";
    }

    ptrI.close();

    cout << "\n";
    // also is possible use fstream

    fstream ptr;

    //to concat use ios::app; (app = append)
    ptr.open("testing.txt", ios::out);

    ptr << "not today\n";
    ptr << "tomorrow maybe\n";

    ptr.close();

    ptr.open("testing.txt", ios::in);

    string newtext;
    while (getline(ptr, newtext)){
     cout << newtext << "\n";
    }

    ptr.close();
    return 0;
}