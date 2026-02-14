#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cin >> number;

    int a=1;
    for(int i = 2; i<=sqrt(number); i++){
        if(number % i == 0){
            a=0;
            break;
        }
    }
    if(a==1 && number>1){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }

    return 0;
}