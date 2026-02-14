#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float a,b,c;
    cin >> a >> b >> c;

    float s = (a+b+c)/2;

    double area;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << area << endl;

//std:: namespace
/*
int = 4 bytes
long long = 8 bytes 
float = 4 bytes
#define pi 3.1416

*/

    return 0;
}