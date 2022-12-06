#ifndef EXITLIB_H_INCLUDED
#define EXITLIB_H_INCLUDED

class Doll{
private:
    std::string current_dress;
    std::string dress1="Red Dress";
    std::string dress2="Blue Dress";
    std::string dress3="Green Dress";
public:
    std::string nome;
    int color;

    void changeDress();
    void show_dress();
    Doll(int value);
};

void Doll::show_dress(){
    std::cout << this->current_dress << "\n";
};

void Doll::changeDress(){
    if (this->current_dress == this->dress1)
        this->current_dress = this->dress2;
    else if (this->current_dress == this->dress2)
        this->current_dress = this->dress3;
    else if (this->current_dress == this->dress3)
        this->current_dress = this->dress1;
    else 
        this->current_dress = this->dress1;

};

Doll::Doll(int value){

    while(value>0){
        changeDress();
        value--;
    }
};

#endif