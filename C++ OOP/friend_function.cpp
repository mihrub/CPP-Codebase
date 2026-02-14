#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class B;                     //forward declaration by allowing compiler to know there is a class named B which will be defined later in the code
class A{
private:
    int n;
public:
    A(){};
    A(int n){
        this->n = n;
    }         
    void friend add(A,B);      //Here private members of different classes are added using friend function
    void friend show(A);       //Private member can be accessed by using friend function
};
    void show(A a){
    cout << a.n << endl;
    }

class B{
private:
    int n;
public:
    B(int n){
        this->n = n;
    }        
    void friend add(A,B);  // A friend function of a class is defined outside of that class scope but 
    void friend show(B);   // it has the right to access all private and protected members of the class

};
    void show(B b){        // function overloaded
    cout << b.n << endl;
    }
void add(A a, B b){         // here 2 objects as an argument
    cout << a.n + b.n << endl;
}

void add(int a, int b){     // here 2 integer as an argument
    cout << a+b << endl;    // funtion overloaded
}

int main(){

    A a(3);
    B b(4);
    show(a);
    show(b);
    add(a,b);

    add(4,6);

    return 0;
}