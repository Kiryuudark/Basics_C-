#include <iostream> 
#include <algorithm>
#include <vector>

//using find from algorithm lib

using namespace std;

int main(){
    vector<string> test{"test"};
    vector<string>::iterator itTest;


    string num;

    while (test.back()!="exit"){
        cout << "type a name[type exit to leave]: " << endl;
        cin >> num; 
        itTest = find(test.begin(),test.end(), num);
        if (itTest!=test.end()){

            cout << endl << "Palavra já digitada, digite outra" << endl << endl;
        }
        else{
            test.push_back(num);
        }
        
       
    }

    while(itTest!=test.end()){
        cout << *itTest << endl;
        itTest++;
    }
    
    return 0;
}