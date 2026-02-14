#include <iostream>
#include <vector>
#include <string>
using namespace std;

class A{
private:
    int x;

protected:
    int y;

public:
    int z;

    A(int a, int b, int c){
        x = a;
        y = b;
        z = c;
        cout << "Constructor A" << endl;
    }

    int getY(){
        return y;
    }
    int getX(){
        return x;
    }
    ~A(){
        cout << "Destructor A" << endl;
    }
};

class B : protected A{
public:
    B(int a, int b, int c) : A(a, b, c){
        cout << "Constructor B" << endl;
    }
    ~B(){
        cout << "Destructor B" << endl;
    }

    int get_B_X(){
        return getX();
    }

    int get_B_Y(){
        return y;
    }
};

class C : private B
{
public:
    C(int a, int b, int c) : B(a, b, c){
        cout << "Constructor C" << endl;
    }
    ~C(){
        cout << "Destructor C" << endl;
    }

    void sum(){
        cout << get_B_X() + z + y << endl;
    }
};

class D : private C{
public:
    D(int a, int b, int c) : C(a, b, c){
        cout << "Constructor D" << endl;
    }

    ~D(){
        cout << "Destructor D" << endl;
    }

    /* void add(){
            cout << get_B_X() << endl; // not possible
        }
    */
    void check(){
        sum();
    }
};

int main(){

    C c1(4, 5, 6);
    c1.sum();

    D d1(1, 2, 3);
    // d1.add();
    d1.check();

    return 0;
}