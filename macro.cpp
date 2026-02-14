#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>

#define ll long long
#define tt(t) for(int i = 0; i<t; i++){cout << "Hello" << endl;}
#define float int // float treated here as a variable name

using namespace std;
int main(){
      
    tt(5);

    cout << __DATE__ << " " << __TIME__ << " " << __LINE__ << endl;

    float a; // actually it is integer 
    cout << "Enter a number(float): ";
    cin >> a;
    cout << a << endl;
    
    return 0;
}