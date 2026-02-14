#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int k = 1;
    int count = 6;
    while(k < n){
        count++;
        k += 2;
    }

    for(int i = 0; i < count; i++){
        for(int j = i; j < count - 1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 5; i++){
            cout << " ";
        }
        for(int i = 0; i < n; i++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}