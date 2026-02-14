#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> crr(n);
    for(int i = 0; i < n; i++){
        cin >> crr[i];
    }

    vector<int> arr(crr);

    for(int i = 1; i < n; i++){
        arr[i] = arr[i] + arr[i - 1];
    }

    if(arr[n - 1] - crr[0] == 0){
        cout << 0 << endl;
    }
    else{
        for(int i = 1; i < n; i++){
            int x = arr[i - 1] - (arr[n - 1] - arr[i]);
            if(x == 0){
                cout << i << " ";
            }
        }
    }
    return 0;
}