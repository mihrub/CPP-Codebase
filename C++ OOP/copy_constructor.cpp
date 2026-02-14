#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        string color;
    Car(){

    }  
    // there is a copy constuctor which is provided by compiler


    // custom copy constructor
    // to use copy constructor at first we need to create a object
    Car(Car &c){
        cout << "copying....\n";
        name = c.name;
        color = c.color;
    }    
};

int main(){

    Car c1;
    c1.name ="Maruti 800";
    c1.color = "Grey";
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.color << endl;

    return 0;
}