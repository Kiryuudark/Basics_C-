#include <iostream>

using namespace std;

void cont(int i, int aux=0);

int factorial (int i);

void fibbo(int posterior=0, int atual=0);

int main(){
    int aux;
    cout << "count up, type a number: ";
    cin >> aux;
    cont(aux);
    cout << "\n";

    cout << "factorial, type a number: ";
    cin >> aux;
    int num = factorial(aux);
    cout << num << "\n";

    cout << "fibo sequence\n";
    fibbo();

    return 0;
}

void cont(int i, int aux){
    cout << aux << " ";

    if(i>0)
        cont(i-1, ++aux);
}

int factorial(int i){

    if(i>1)
    return i*factorial(i-1);
    else
    return 1;
}

void fibbo(int posterior, int atual){

    cout << atual << " ";

    if (atual==0)
        posterior++;
    if (atual<1000)
    fibbo(posterior+atual, posterior);
}