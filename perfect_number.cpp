#include<iostream>
#include<cmath>
using namespace std;

// A perfect number is a positive integer that is equal to the sum of its proper divisors.

void perfect_num(int number){

    int sum = 0;

    for(int i = 1; i <= number/2; i++){
        if(number % i == 0){
            sum += i;
        }
    }

    if(number == sum){
        cout << number << " is a perfect number.\n";
    }
    else{
        cout << number << " is not a perfect number.\n";
    }
}
int main(){

    int number;
    cout << "Number: ";
    cin >> number;

    perfect_num(number);

    return 0;
}