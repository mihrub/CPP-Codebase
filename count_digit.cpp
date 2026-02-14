#include <iostream>
using namespace std;
int main(){
    long long number;
    cout<<"Number : ";
    cin >> number; 

    if ( number == 0){
        cout << " You have entered 0";
    }
    else{
        if(number < 0 ){
            number = -1 * number;
        }

        int count = 0;
        while(number>0){
            number/=10;
            count++;
        }

        cout << count <<endl;

    }
    return 0;
}