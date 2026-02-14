#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter any Odd Number: ";
    cin >> n;
    
    int d = n/2;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j && i != d){
                cout << "\\";
            }
            else if(i+j == n-1 && i != d){
                cout << "/";
            }
            else if(i==d && j==d){
                cout << "x";
            }
            else{
                cout <<"*";
            }
        }
        cout << endl;
    }
    
    return 0;
}