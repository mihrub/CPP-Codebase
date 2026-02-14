#include<iostream>
using namespace std;

int gcd(int a,int b){

    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

int main(){

    int a,b;
    cout << "Enter two number : ";
    cin >> a >> b;

    int result = gcd(a,b);

    cout << "GCD : " << result << endl;
    
    int LCM = (a*b)/gcd(a,b);

    cout << "LCM : " << LCM << endl;

    return 0;
}