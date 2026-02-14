#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    long long n,t;
    cin >> n >> t;

    long long arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i<n; i++){
        arr[i] += arr[i-1];
    }


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