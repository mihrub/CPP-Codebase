#include<iostream>
using namespace std;
int main(){

    // pointer and variable have to be the same data  type
    int n = 5;
    cout << &n << endl;
    int *ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    return 0;
}