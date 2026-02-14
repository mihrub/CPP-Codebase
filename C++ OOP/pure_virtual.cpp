#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class A{
public:
    virtual void Print()=0;

};

class B:public A{
public:
    void Print(){
        cout<<"Inside Print() of class B"<<endl;
}
};

int main(){
      
    // A a;
    // a.Print();

    B b;
    b.Print();

    A* p;
    p = &b;
    p->Print();

    // p = &a;
    // p->Print();
    
    return 0;
}