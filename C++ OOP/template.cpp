#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

template<typename T>
class A{
private:
    T a;
    T b;
public:    
void set_Data(T a, T b){
    this->a = a;
    this->b = b;         
}

T sum(){
    return a + b;
}
};

int main(){
      
    A<int> a;
    a.set_Data(4,6);
    cout << "Sum : " << a.sum() << endl; 

    A<double> b;
    b.set_Data(4.2,6.5);
    cout << "Sum : " << b.sum() << endl;     
    return 0;
}