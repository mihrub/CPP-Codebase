#include<iostream>
using namespace std;
int main(){

    int number , Reverse_Number = 0 ;
    cout << "Number : ";
    cin >> number;

    while(number != 0){
        Reverse_Number *= 10;
        int Last_Digit = number % 10;
        Reverse_Number += Last_Digit;
        number /= 10;
    }

    cout << "Reverse Number : " << Reverse_Number;

    return 0;
}
