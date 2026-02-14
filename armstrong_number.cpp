#include<iostream>
#include<cmath>
using namespace std;

// An Armstrong number (or narcissistic number) is a positive integer equal to the sum of its own digits, 
// each raised to the power of the total number of digits in that integer

int count_digit(int n){

    int count = 0;
    while(n){
        n /= 10;
        count++;
    }
    return count;
}

void armstrong_num(int n){
    int number = n;
    int sum = 0;
    int digit = count_digit(n);
    while(n){
        int m = n%10;
        sum = sum + pow(m,digit);
        n/=10;
    }
    if(sum == number){
        cout << number << " is a armstrong number.\n";
    }
    else{
        cout << number << " is not a armstrong number.\n";
    }
}

int main(){

    int number;
    cout << "Number : ";
    cin >> number;

    armstrong_num(number);
    return 0;
}