#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout << "Parent Class Show..." << endl;
    }
    virtual void hello(){
        cout << "Parent Hello" << endl;
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "Child Class Show...."<< endl;
    }  
    void hello(){
        cout << "Child Hello" << endl;
    }      
};

int main(){

    Child c;
    c.Parent::hello();   // this syntax is also valid. 

    Parent *ptr;
    ptr = &c;

    ptr->hello();

    // virtual functions are dynamic in nature
    // defined by the keyword "virtual" inside a base class and are always
    //declared with a base class and overridden in a child class.
    // a virtual function is called during runtime

    // if a function is defined with virtual keyword in base class
    // then it should always be defined in derived class also without using virtual keyword

    return 0;
}