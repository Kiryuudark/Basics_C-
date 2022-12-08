#include <iostream>
#include <vector>

//using anonymous function, also know as lambda

using namespace std;

int main (){

    //anonymous function declaration -> ()[]{}
    // () is used to place function variables inside
    // [] is used to get extern values
    // {} this is where you declare functions

    int num1=1, num2=2, num3=3, num4=4;
    
    // using "=" inside [] means that function should get all variables used inside.
    auto soma = [=]()->int{
        return num1+num2+num3;
    };

    auto test = [](vector<int> n)->int{
        auto m=0;
        for (int x:n){
            m = (m>x)?m:x;
        }
        return m;
    };

    cout << soma() << endl;
    cout << test({8,3,4,5,6,7}) << endl;
    return 0;
}