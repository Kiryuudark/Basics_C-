#include <iostream>
#include <map>

//simple use of map

using namespace std;

int main(){

    map<int,string> test;
    map<int, string>::iterator ittest;

    test.insert(pair<int,string> (1,"Bruno"));
    test.insert(pair<int,string> (1,"Luisa"));
    test.insert(pair<int,string> (3,"Fernando"));
    test.insert(pair<int,string> (4,"Teodoro"));

    for (auto x:test){
        cout << x.second << endl;
    }

    ittest = test.find(1);

    cout << "\n";
    if(ittest==test.end())
        cout << "Object not found" << endl;
    else{
        cout << "Object Found" << endl;
        cout << ittest->second << endl;
    }

    return 0;
}