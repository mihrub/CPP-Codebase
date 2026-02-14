#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    int n;
    cin >> n;
    int a = n/2;

    for(int i = 0; i<a; i++){
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        cout << "\\";
        for(int k = 0 ; k<2*(a-i)-1 ; k++){
            cout << " ";
        }
        cout << "/" << endl;
    }

    for(int i = 0 ; i<a ; i++){
        cout << " ";
    }
        cout << "X" << endl;

    for(int i = a; i>0; i--){
        for(int j = i; j>1; j--){
            cout << " ";
        }
        cout << "/" ; 
    for(int k = 0 ; k<2*(a-i+1)-1 ; k++){
            cout << " ";
        }
        cout << "\\" << endl;
    }  
    
    return 0;
}