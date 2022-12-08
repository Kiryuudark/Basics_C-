#include <iostream>
#include <vector>
#include <algorithm>

//using algorithm for_each to plot values;

using namespace std;

int main(){

    vector<int> plot;
    plot.push_back(1);
    plot.push_back(2);
    plot.push_back(3);
    plot.push_back(4);
    plot.push_back(5);
    plot.push_back(6);
    plot.push_back(4);
    plot.push_back(5);
    plot.push_back(6);
    
    vector<int>::iterator itplot=plot.begin();

    for_each(plot.begin(), plot.end(), [](int num){cout << num << endl;});

    cout << endl;

    //cout << *itplot <<endl;
    for_each(itplot, plot.end(), [](int test){cout<<test<<endl;});

    return 0;
}