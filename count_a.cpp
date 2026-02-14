#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    string s;
    cin >> s;

    int length = s.length();
    int arr[length] = {0};

    for(int i = 0; i<length; i++){
        if(s[i] == 'a'){
            arr[i] = 1;
        }
    }
    

    for(int i = 1; i<=length; i++){
        arr[i] += arr[i-1];
    }

    int t;
    cin >> t;

    while(t--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        if(l == 0){
            cout << arr[r] << endl;
        }
        else{
            cout << arr[r] - arr[l-1] << endl;
        }
    }
    
    return 0;
}