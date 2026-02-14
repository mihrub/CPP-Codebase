#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main(){

    srand(time(NULL));
    int random = rand() % 10 + 1;

    int a;
    cout << "Guess between 0-10 : ";
    cin >> a;

    while(a != random){
        if (a > random){
            cout << "Too high\n";
        }
        else{
            cout << "Too low\n";
        }
        cin >> a;
    }

    cout << "You got the number" << endl;

    return 0;
}