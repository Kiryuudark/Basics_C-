#include <iostream>
#include <list>

using namespace std;


int main() {

    list<int> test;
    list<int>::iterator ptr;

    while(test.size()<10){
        test.push_back(test.size());
        
    }

    //adress ptr to test list
    ptr = test.begin();
    //point ptr to fourth position
    advance(ptr, 6);
    //insert 333 value in this position. Also is possible exclude using .erase
    test.insert(ptr, 333);
    //sort all list ascending 
    test.sort();
    //revert this order to descending
    test.reverse();

    while(!test.empty()){
        cout << test.back() << "\n";
        test.pop_back();
    }

    return 0;
}