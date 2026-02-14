#include<iostream>
using namespace std;

class A{
private:
    int a;
public:
    void set_A(int a){
        this-> a = a;
    } 
    int get_A(){
        return a;
    }       
};

class B : virtual public A{
private:
    int b;
public:
    void set_B(int b){
        this-> b = b;
    }  
    int get_B(){
        return b;
    }         
};

class C : virtual public A{
private:
    int c;
public:
    void set_C(int c){
        this-> c = c;
    }
    int get_C(){
        return c;
    }           
};

class Volume : public B , public C{
public:    
    void show_volume(){
        cout << get_A() * get_B() * get_C() << endl;
    }
};

int main(){
      
    Volume v;
    v.set_A(4);
    v.set_B(5);
    v.set_C(3);
    v.show_volume();

    return 0;
}