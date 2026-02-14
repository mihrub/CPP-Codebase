/*

Input:
5
2 4 1 3 5

Output:
4

Input:
5
3 2 5 1 7

Output:
5

*/

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    long long n;
    cin >> n;

    long long arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    long long ans = 0;

    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            ans += arr[i] - arr[i+1];
            arr[i+1] = arr[i];
        }
    }
    
    cout << ans << endl;

    return 0;
}