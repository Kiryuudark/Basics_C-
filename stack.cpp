#include <iostream>
#include <stack>

//this function uses stacks lib to show how a stack works, FILO (first in, last out);

using namespace std;

int main (){

    stack <string> quadros;

    if(quadros.empty()){
        cout << "sem quadros na lista\n\n";
    }
    else {
        cout << "com quadros na lista\n";
    }

    quadros.push("Mona Lisa");
    quadros.push("A noite estrelada");
    quadros.push("Meisje met de parel");

    //quadros.size() retorna o tamanho;
    while(!quadros.empty()){
        cout << quadros.top() << "\n";
        quadros.pop();
    }

    return 0;
}