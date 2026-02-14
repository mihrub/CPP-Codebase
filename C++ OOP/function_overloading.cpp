#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Test{
public:
    int a;
    int b;
    Test(){

    }
    Test(int a, int b){
        this-> a = a;
        this-> b = b;
    }    
    void Sum(int a,int b){
        cout << a+b << endl;
    }
    void Sum(int a){
        cout << a << endl;
    }
    void Sum(float a, int b){
        cout << a + b << endl;
    }
    void Sum(int a, double b){
        cout << a+b << endl;
    }
    void Sum(double a, double b){
        cout << a+b << endl;
    }
};

int main(){
      
    Test t;
    t.Sum(10); 
    t.Sum(10,20); 
    t.Sum((float)5.7,20); 
    t.Sum(10,2.6); 
    t.Sum(10.5,20.7);    

    return 0;
}