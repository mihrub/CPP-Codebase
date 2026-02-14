#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string colour;
    int *milage;

Car(string name , string colour){
    this-> name =  name;
    this-> colour = colour;
    milage = new int;
    *milage = 12;
}    

//shallow copy
Car(Car &original){
    cout << "Copying" << endl;
    name = original.name;
    colour = original.colour;
    milage = original.milage;
}

//deep copy
Car(Car &original){
    cout << "Copying" << endl;
    name = original.name;
    colour = original.colour;
    milage = new int;
    *milage = *original.milage;
}

};
int main(){

    Car c1("maruti 800","white");
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.colour << endl;
    cout << *c2.milage << endl;
    *c2.milage = 20;
    cout << *c2.milage << endl;
    cout << *c1.milage << endl;

    return 0;
}