#include<iostream>
using namespace std;

class A{
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

    void set_x(int x){
        this->x = x;
    }
    int get_x(){
        return x;
    }

    void set_y(int y){
        this->y = y;
    }
    int get_y(){
        return y;
    }

    ~A(){
        cout << "Destructor A" << endl;
    }
    void display_a(){
        cout << "X : " << get_x() << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }

};

class B : public A{
public:
    B(int x, int y, int z):A(x,y,z){
        cout << "Constructor B" << endl;
    }

    void display(){
        cout << "X : " << get_x() << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }
    ~B(){
        cout << "Destructor B" << endl;
    }
};


int main(){
    A a1(10,12,25);
    a1.display_a();

    B b1(3,2,4);
    b1.display();

    return 0;
}