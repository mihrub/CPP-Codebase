#include<iostream>
using namespace std;

void decNum(int binNum){
        int ans =0 , pow = 1;
    for(int i= 0 ; binNum>0 ; i++){
        int remainder = binNum % 10;
        binNum /= 10;
        ans = ans + (remainder * pow);
        pow *=2;
    }
        cout << ans << endl;
}

int main(){

    int number;
    cout << "Binary Number : ";
    cin >> number;

    decNum(number);

    return 0;
}
