#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n; i++){
        int k = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[k]){
                k = j;
            }
        }
        swap(arr[i],arr[k]);
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}