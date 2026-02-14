#include<iostream>
#include<algorithm>
using namespace std;

void bubble_sort(int arr[],int size){

    for(int i = 0; i<size-1 ; i++){
        for(int j = 0 ; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){

    int n;
    cout << "Size: ";
    cin >> n;

    int arr[n];
    cout << "Initial Array : ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Sorted Array: ";
    bubble_sort(arr,n);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}