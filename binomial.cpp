#include<iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for (int i = 1 ; i<=n ; i++){
        fact *= i;
    }
        return fact;
}

int binomialCoeff(int n , int r){

    int value1 = factorial(n);
    int value2 = factorial(r);
    int value3 = factorial(n-r);

    int result = value1 / (value2 * value3);

    return result;
}

int main(){

    cout << binomialCoeff(4,2); 

    /*
        n
         C  = n! / { n! * (n-r)!}       
          r    
    */

    return 0;
}