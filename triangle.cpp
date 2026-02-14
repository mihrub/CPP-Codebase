#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter the Length of Three Sides (a,b,c) : ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a){

        if (a == b && a == c){
            cout << "Equielateral Triangle" << endl;
        }
        else if (a != b && a != c && b != c){
            cout << "Scalene Triangle" << endl;
        }
        else{
            cout << "Isosceles Triangle" << endl;
        }
    }
    else{
        cout << "Invalid" << endl;
    }
    return 0;
}