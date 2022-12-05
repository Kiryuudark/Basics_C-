#include <iostream>
#include <queue>

//using queue lib to learn how queue works. FIFO (first in, first out);

using namespace std;

int main (){

    queue <string> drinks;

    drinks.push("Margarita");
    drinks.push("Mojito");
    drinks.push("Manhattan");
    drinks.push("Mimosa");

    cout << "Quantidade de Drinks: " << drinks.size();

    while(!drinks.empty()){
        cout << "\nPrimeiro: " << drinks.front() << "\nUltimo:" << drinks.back() << "\n";
        drinks.pop();
    }



}