#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){

        int a;
        cin >> a;
        
        vector<int> arr;
        for(int j = 0 ; j<a; j++){
           arr.push_back(j);
        }

        long long int sum = 0;

        for(int k = 0; k<a; k++){
            sum += arr[k];
        }

        if(!(sum % 2))
            cout << "NO" << endl;
        
        else
            cout << "YES" << endl;
    }
    return 0;
}