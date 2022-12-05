#include <iostream>

using namespace std;

//in this function was use structs and functions within;

struct Sala {
    string _professor, _aluno1, _aluno2, _aluno3;
    int _ano;

    void inserir(string professor, string aluno1, string aluno2, string aluno3, int ano){
        _professor = professor;
        _aluno1 = aluno1;
        _aluno2 = aluno2;
        _aluno3 = aluno3;
        _ano = ano;
    }

    void mostrar(){
        cout << "Professor: " << _professor;
        cout << "\nAlunos: " << _aluno1 << ", " << _aluno2 << ", " << _aluno3;
        cout << "\nAno de entrada: " << _ano << "\n";
    }
};

int main (){

    //simple use
    /*
    Sala salaA;

    salaA.inserir("Domingos","A","B","C",2020);
    salaA.mostrar();
    */

    //advanced use
    Sala *sala = new Sala[5];

    int a=0;

    for (int i=0; i<5; i++){
        sala[i].inserir("Domingos","A","B","C",2020);
        if (i==4)
            sala[i].inserir("Domingos","A","B","D",2010);
        else
            sala[i].inserir("Domingos","A","B","C",2020);
        sala[i].mostrar();
        cout << "\n";
    }

    return 0;
}