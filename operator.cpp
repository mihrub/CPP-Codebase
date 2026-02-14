#include<iostream>
using namespace std;
int main(){

    int a = 5 , b = 4;
    cout << a+ (b++) << endl; // 9
    cout << (--a) + b << endl; // 9

    cout << !(true && false) << endl; // 1
    cout << (true && false || true) << endl; //1    # priority ( NOT , AND , OR )

    int x = 7;
    cout << (++x <= 9 && x+2 >= 10)<< endl; // 1

    int y = 3;
    cout << (y == y++) << endl; //0

    float z = 8;
    z+=2;
    cout << z << endl; //10
    z/= 2;
    cout << z << endl; // 5


    // to clear the command line use this command :
   // system("cls");

}