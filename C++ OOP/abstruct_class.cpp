#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Shape{
    int x;

public:    
    virtual void draw() = 0;
    void set_x(int a){
        x = a;
    }
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Circle draws" << endl;
    }    
};

class Triangle : public Circle{
public:
    void draw(){
        cout << "Triangle draws" << endl;
    }    
};

int main(){

    Circle c;
    Triangle t;

    Shape *s;
    s = &c;
    s->draw();
    s = &t;
    s->draw();
    
    return 0;
}