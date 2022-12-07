#include <iostream>
#include <vector>

//at this function'd used auto and static. 

using namespace std;

//auto is used so that the type is determined from the received input.
auto sum(int n1, int n2)->int{
    return n1+n2;
}

void implement(){
    // while use static, i value is keep in memory until end program.
    static int i=0;
    i++;
    cout << i << endl;
}

int main() {

    auto num=5;
    auto name="Bruno";
    auto result = sum(2,5);
    cout << num << " " << name << " " << result << endl;

    cout << "\n";

    int cont=0;
    while(cont<10){
       implement();
       cont++;
    }

    vector<int> keys{2,3,4,5};
    cout << "\n";

    //in this case auto replace vector<int>::iterator
    for (auto it=keys.begin();it!=keys.end();it++)
        cout << *it << endl;

    return 0;
}