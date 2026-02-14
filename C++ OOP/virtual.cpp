#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class A{
private:
    int a;
    int b;
public: 

    A(){
        cout << "Constructor A" << endl;
    }

    A(int a, int b){
    this->a = a;
    this->b = b;
    }

    ~A(){
        cout << "Destructor A" << endl;    
    }    

    void print(){
        cout << "Printing From A" << endl;
    }
};

class B : virtual public A{
private:    
    int c;
    int d;
public:

    B(){
        cout << "Constructor B" << endl;
    }

    B(int c, int d){
        this->c = c;
        this->d = d;
    }    

    ~B(){
        cout << "Destructor B" << endl;
    }

    void print(){
        cout << "Printing From B" << endl;
    }
};

class C : virtual public A{
private:    
    int e;
    int f;
public:

    C(){
        cout << "Constructor C" << endl;
    }

    C(int e, int f){
        this->e = e;
        this->f = f;
    }    

    ~C(){
        cout << "Destructor C" << endl;
    }
    
};

class D :  public B,  public C{
public:
    D(){
        cout << "Constructor D" << endl;
    }
    ~D(){
        cout << "Destructor D" << endl;
    }    
};

int main(){
      
    D d1;
    d1.print();

    return 0;
}