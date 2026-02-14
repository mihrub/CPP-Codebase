#include<iostream>
using namespace std;
int main(){

    int c , r ;
    cin>> c >> r;
    for(int i = 0; i<=r ;i++){
        for(int j =0 ;j<=c;j++){
            cout <<(i-1)*c+j <<" ";
        }
        cout << endl;
    }

    return 0;
}