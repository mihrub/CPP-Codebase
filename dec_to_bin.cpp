#include<iostream>
using namespace std;

void dec_to_bin(int number){
    int ans = 0;
    int pow = 1;

    for (int i = 0 ; number > 0 ; i++){
        int remainder = number % 2 ;
        number /= 2;  
        ans = ans + (remainder * pow);
        pow *= 10;
    }
    cout << ans<< endl;
}
int main(){

    int number;
    cout << "Decimal Number : ";
    cin >> number;

    dec_to_bin(number);
    return 0;
}