#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;
    Car(){
        mileage = new int;
    }  

    // when dynamically memory is allocated
    // destructor should be created
    // else that will occur memory leak

    ~Car(){
        cout << "deleting object\n";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};

int main(){

    Car c1;
    c1.name ="Maruti 800";
    c1.color = "Grey";
    *c1.mileage = 100;

    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;

    return 0;
}