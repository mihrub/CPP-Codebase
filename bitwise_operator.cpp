#include<iostream>
using namespace std;
int main(){

    int a = 4 , b = 8;
// execute in binary ... result in decimal...

    cout << (a & b)<< endl; // bitwise AND
    cout << (a | b)<< endl; // bitwise OR
    cout << (a ^ b)<< endl; // bitwise XOR

// << - bitwise Left_Shift operator
// >> - bitwise Right_Shift operator

    return 0;
}