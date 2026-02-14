#include<iostream>
using namespace std;
    int sum(int a , int b){
        return a + b;
    }
    double sum (double a , double b){
        return a + b;
    }
    float sum (float a , float b , float c){
        return a + b + c;
    }

int main(){

    cout << sum(5,4) << endl;
    cout << sum(5.5,4.4) << endl;
    cout << sum(5.5,4.5,8.4) << endl;

    return 0;
}
