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

class B{
private:
    int a;
protected:
    int b;
public:
    int c;
    
    B(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
        cout << "Constructor B" << endl;
    }

    ~B(){
        cout << "Destructor B" << endl;
    }
};

class C : public A , public B {
public:
    C(int x, int y, int z) : B(x, y, z) , A(x,y,z) {
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

    C obj(44, 10, 12);
    obj.display();
    
    return 0;
}
