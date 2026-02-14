#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int j = i;
        while(j && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){

    int n;
    cout << "Size: ";
    cin >> n;

    int arr[n];
    cout << "Initial Array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    insertion_sort(arr,n);
    cout << "Sorted Array: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}