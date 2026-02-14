#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class A{
private:
    int a;
public:    
    A(int a){
        this-> a = a;
    }
    void operator ++ (){ //pre increment
        a++;
    }
    void operator ++ (int){  //post increment
        a++;
    }
    void printA(){
        cout << a << endl;
    }
};

int main(){
      
   A a1(3);

   ++a1;

   a1++;

   a1.printA();

    return 0;
}