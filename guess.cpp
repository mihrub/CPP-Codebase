#include <iostream>
using namespace std;
int main(){

    int Host, Guest;
    cout << "Host : ";
    cin >> Host;
    // system("cls");
    cout << "Guest : ";
    cin >> Guest;

    if (Host == Guest){
        cout << "Correct";
    }
    else{
        int tries = 0;
        while (Host != Guest){
            cout << "Take your guess : ";
            cin >> Guest;
            tries++;
        }
        cout << "Congratulations!" << endl;
        cout << "You have attempted " << tries << " tries";
    }
    return 0;
}
