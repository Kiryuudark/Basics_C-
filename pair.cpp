#include <iostream>
#include <utility>
#include <vector>

// using utility and vector to make pairs inside vector;

using namespace std;

int main (){

    pair<int, string> test;

    test.first = 100;
    test.second = "Bruno";
    cout << test.first << " - " << test.second << endl;

    test=make_pair(10, "Aethos");
    cout << test.first << " - " << test.second << endl;

    vector<pair<int, string>> test2;

    test2.push_back(make_pair(1, "Abbha"));
    test2.push_back(make_pair(2, "Beta"));
    test2.push_back(make_pair(3, "Cetrhos"));

    for (auto i:test2){
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}