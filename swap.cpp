#include<iostream>
using namespace std;
int main(){

// swap using a variable

    int a = 5 , b = 4 ;
    int temp = a;
    a = b ;
    b = temp ;
    cout << "a : " << a << ", b : " << b << endl;

// swap using c++ built-in swap function

    swap(a,b);
    cout << "a : " << a << ", b : " << b << endl;

// swap using equation

    a = a+b;
    b = a-b;
    a = a-b;
    cout << "a : " << a << ", b : " << b << endl;

// swap using XOR

    a = a^b;
    b = a^b;
    a = a^b;
    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}