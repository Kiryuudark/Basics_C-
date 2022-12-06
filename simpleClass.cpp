#include <iostream>

//Using classes, implementing functions and using his resources.

using namespace std;

class Drugs {

    private:
    int cost=0;

    public:
    int qnt_inventory;
    string name;

    void incr_cost();
    void decr_cost();
    void value();
};

void Drugs::incr_cost(){
    this->cost++;
}

void Drugs::decr_cost(){
    this->cost--;
}

void Drugs::value(){
    cout << this->cost << "\n";
}

int main() {

    Drugs *medicine = new Drugs; 

    medicine->value();
    medicine->incr_cost();
    medicine->value();
    medicine->decr_cost();
    medicine->value();

    medicine->name = "Dorflex";
    medicine->qnt_inventory = 5;

    cout << "name: " << medicine->name << "\n";
    cout << "inventory: " << medicine->qnt_inventory << "\n";
    medicine->incr_cost();
    medicine->value();

    return 0;
}