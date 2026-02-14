#include<iostream>
using namespace std;
int main(){

    int number [5] = { 1, 3 , 5 , 7 , 9 };
    int num[5];
    cout << number << endl;
    cout << &number[0] << endl;
    cout << &number[2] << endl;

    // same thing 
    cout << number[2] << endl ;
    cout << *(number+2) << endl;

    for(int i = 0 ; i<= 4 ; i++){
        cout << "Number : ";
        cin >> num [i];
    }
    for (int i = 0 ; i <= 4; i++){
        cout << *(num+i)<< " ";
    }

    return 0;
}