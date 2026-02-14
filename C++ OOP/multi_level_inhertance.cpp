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

class B : public A {
public:
    B(int x, int y, int z) : A(x, y, z) {
    cout << "Constructor B" << endl;        
    }
    
    void display() {
        cout << "x = " << get_x() << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }

    ~B(){
        cout << "Destructor B" << endl;
    }
};

class C : public B {
public:
    C(int x, int y, int z) : B(x, y, z) {
        cout << "Constructor C" << endl;
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

    B obj(1,5,3);
    obj.display();

    C ob(44, 10, 12);
    ob.display();

    return 0;
}
