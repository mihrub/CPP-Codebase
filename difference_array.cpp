#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    long long n,t;
    cin >> n >> t;
    long long arr[n+1];

    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }

    long long ans[n+2] ={0};

    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        ans[a] += c;
        ans[b+1] -= c;
    }

    for(int i = 1; i<=n; i++){
        ans[i] += ans[i-1];
    }

    for(int i = 1, j = 1; i<=n; i++){
        arr[i] += ans[j++];
    }

    for(int i = 1; i<=n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}