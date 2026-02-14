#include<iostream>
using namespace std;

// Function 1: Adds two integers using pointers
// It takes addresses of two integers as parameters
int add(int*a,int*b){
    int sum = *a+*b;
    return sum;
}

// Function 2: Adds two integers using normal parameters (by value)
// This is function overloading (same function name, different parameters)
int add(int a, int b){
    int sum = a + b;
    return sum;
}

void changeB(int* b){
    *b = 10;
    return;
}

void changeB(int b){
    b = 20;
    return;
}

int main(){

    int a = 10;
    int b = 22;

    // Calling pointer version of add()
    // &a and &b pass the addresses of variables
    int d = add(&a,&b);
    cout << "Pointer version of add : " << d << endl;

    // Calling normal version of add()
    // a and b pass the actual values
    d = add(a,b);
    cout << "Normal version of add : " << d << endl;

    cout << endl;
    cout << "Initial B : " << b << endl;

    changeB(&b);
    cout << "After Pointer version of changeB : " << b << endl;

    changeB(b);
    cout << "After Normal version of changeB : " << b << endl;

    return 0;
}