#include <iostream>
using namespace std;

class A {
private:
    int x;

protected:
    int y;

public:
    int z;

    A(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
        cout << "Constructor A" << endl;
    }

    int get_x(){ 
        return x; 
    }
    int get_y(){ 
        return y; 
    }

    ~A(){
        cout << "Destructor A" << endl;
    }
};

class B : virtual public A {
protected:
    int b;
public:
    B(int x, int y, int z) : A(x, y, z) {
        cout << "Constructor B" << endl;
    }
    ~B() {
        cout << "Destructor B" << endl;
    }
};

class C : virtual public A {
public:
    C(int x, int y, int z) : A(x, y, z) {
        cout << "Constructor C" << endl;
    }
    ~C() {
        cout << "Destructor C" << endl;
    }
};

class D : public B, public C {
public:
    D(int x, int y, int z) : A(x,y,z), B(x,y,z), C(x,y,z){
        cout << "Constructor D" << endl;
    }
    void display(){
        cout << "x = " << get_x() << endl;
        cout << "y = " << get_y() << endl;
        cout << "z = " << z << endl;
    }
    ~D(){
        cout << "Destructor D" << endl;
    }
};

int main(){
    D d1(2,4,6);
    d1.display();
    return 0;
}