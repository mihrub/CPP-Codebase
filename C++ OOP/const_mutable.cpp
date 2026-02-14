#include<iostream>
using namespace std;

class A{
    mutable int x;
public:
    void setX(int a){
        x = a;
    }  
    int getX()const{        //It is illegal for a const member function to modify a class data member (safe function) , if mutable not used
        x++;                // by adding mutable now it can change the value of x
        return x;           //otherwise x can not be changed
    }                       // no difference in using const after int because int works like a const
};

int main(){
      
    A x1;
    x1.setX(4);
    cout << x1.getX() << endl;

    return 0;
}