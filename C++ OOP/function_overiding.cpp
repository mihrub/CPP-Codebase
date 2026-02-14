#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout << "Parent Class Show..." << endl;
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "Child Class Show...."<< endl;
    }    
};

int main(){

    // it is a example of run time polymorphism

    Child c;
    c.show();

    Parent p;
    p.show();

    // here what happen is - the inherited class and a base class have a same function name with different implementation 
    // child class is inherited by parent class so the same function name overides so the compiler only knows the implementation of the function inside the derived class
    // thats why parent class show is not invoked

    return 0;
}