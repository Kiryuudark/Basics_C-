#include <iostream>

//it's a kind of game like Hangman. Someone type a word and other have to guess in 6 attempts.

using namespace std;

int main (){

    // lives is the number of attempts left, size is the size of word, count is an aux for an while below and END help to find the end of game when player found the right word.
    int lives=6, size=0, count, end=1;
    bool lost_life;
    char word[20], equals[20], letter;

    cout << "Type a word:";
    cin >> word;

    while (word[size]!='\0'){
        equals[size]='-';
        size++;
    }
    
    while (lives>0 && end!=0){
        system("clear");
        cout << "chances: " << lives;
        cout << "\nThe Word is: " << equals;
        cout << "\nyour guess: ";
        cin >> letter;

        count=0; lost_life=true; end=0;
        while (count<size){
            if (word[count]==letter){
                equals[count]=letter;
                lost_life=false;
            } 
            if (equals[count]=='-'){
                end++;
            }
                
            count++;
        }
        if (lost_life){
            lives--;
        }
    }

    if (lives==0){
        cout << "You Lost\n";
    }
    else
    {
        cout << "You Win.\n";
    }

    return 0;
}