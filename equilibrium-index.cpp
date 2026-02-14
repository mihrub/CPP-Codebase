/*
 Given an array of integers, find the equilibrium index.
 An equilibrium index is an index such that the sum of elements
 at lower indexes is equal to the sum of 
 elements at higher indexes.

Example:
Input
7
-7 1 5 2 -4 3 0
Output
3

Explanation: At index 3, the sum of elements before it is -1 and after it is also -1

Sum of before index 3  = -7 + 1 + 5 = -1
Sum of after index    3	  = -4 + 3 + 0 = -1
*/

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

void equilibrium_index(vector<int>arr){
    int i = 1;
    int j = arr.size() - 1;

    if((arr[j] - arr[0]) == 0)
        cout << i-1 << " ";

    while(i <= j){
        int previous = arr[i-1];
        int next = arr[j] - arr[i];
        if(!(previous-next))
            cout << i << " ";
        i++;    
    }
}

int main(){
      
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i<n; i++){
        arr[i] += arr[i-1];
    }
    
    equilibrium_index(arr);

    return 0;
}
