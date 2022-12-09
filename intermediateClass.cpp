#include <iostream>
using namespace std;

//implement some class functions

class Vehicle {
    private:
        const char* _name;
        int _wheels;
        const char* _collor;
    public:
        const char* getName (){ return _name; }
        void setName(const char* _name) {this->_name=_name;}
        int getWheels () { return this->_wheels; }
        void setWheels (int _wheels) {this->_wheels = _wheels;}
        const char* getcollor() { return this->_collor; }
        void setcollor(const char* _collor) {this->_collor = _collor;}
        virtual void shows(){
            cout << "name : " << getName() << endl;
            cout << "Wheels: " << getWheels() << endl << endl;
        }

};

class Car : public Vehicle{
    public:
    Car(){
        setName("Carro");
        setWheels(4);
        setcollor("green");
        shows();        
    }
    
    void shows() override {
        cout << "name : " << getName() << endl;
        cout << "Wheels: " << getWheels() << endl;
        cout << "collor: " << getcollor() << endl << endl;
    }
    
};

class Motorbike : public Vehicle{
    public:
    Motorbike() {
        setName("Moto");
        setWheels(2);
        setcollor("Red");
        shows();
    }
};

class Tank : public Vehicle{
    private:
    bool _isWeaponry;
    int _bullets;
    
    public:

    Tank(bool isWeaponry, int bullets):_isWeaponry(isWeaponry),_bullets(bullets) {
        setName("Moto");
        setWheels(8);
        setcollor("Blue");
        if(!isWeaponry)
        {
            _bullets=0;
        }
        shows();
    }
    int getBullets () { return _bullets; }
    void shows() override {
        cout << "name : " << getName() << endl;
        cout << "Wheels: " << getWheels() << endl;
        cout << "collor: " << getcollor() << endl;
        if(_isWeaponry){
            cout << "Armed Vehicle" << endl;
            cout << "Ammo: " << getBullets() << endl;
        }
        cout << endl;
    }
};

int main() {

    Car carro;
    Motorbike Moto;
    Tank tank(true,12);
    Tank tank1(false,12);

    return 0;
}