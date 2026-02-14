#include <iostream>
using namespace std;

class A {
private:
    int x;

protected:
    int y;

public:
    int z;

    A(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
        cout << "Constructor A" << endl;
    }

    int get_x() {
        return x; 
    }
    int get_y() {
        return y; 
    }

    ~A(){
        cout << "Destructor A" << endl;
    }
};

class B : public A{
private:
    int a;
protected:
    int b;
public:
    int c;
    
    B(int a, int b, int c) : A(a,b,c){
        cout << "Constructor B" << endl;
    }
    ~B(){
        cout << "Destructor B" << endl;
    }
};

class C : public A {
public:
    C(int x, int y, int z) : A(x, y, z){
        cout << "Constuctor C" << endl;
    }

    void display() {
        cout << "x = " << get_x() << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
    ~C(){
        cout << "Destructor C" << endl;
    }
};

int main() {

    C obj(44, 10, 12);
    obj.display();
    

    return 0;
}
