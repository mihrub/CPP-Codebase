#include <iostream>
using namespace std;

void fibonacci(int n){

    int num1 = 0;
    int num2 = 1;
    for (int i = 1; i < n; i++){

        if (i == 1){
            cout << num1 << " ";
        }
        if (i == 2){
            cout << num2 << " ";
        }
        int sum = num1 + num2;
        num1 = num2;
        num2 = sum;
        cout << sum << " ";
    }
}

int main(){
    int number;
    cout << "Number : ";
    cin >> number;
    fibonacci(number);

    return 0;
}