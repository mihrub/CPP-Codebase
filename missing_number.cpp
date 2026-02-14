/*

Input:

5
5 2 1 3

Output:
4

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

    long long arr[n-1];

    for(int i = 0; i<n-1; i++){
        cin >> arr[i];
    }

    long long sum1 = 0;

    for(int i = 0; i<n-1; i++){
        sum1 += arr[i];
    }

    long long sum2 = n *(n+1) * 0.5;

    cout << sum2 - sum1 << endl;

    return 0;
}