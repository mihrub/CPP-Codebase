#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){

    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cout << "Size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Key : ";
    cin >> key;

    cout << linear_search(arr, n, key);

    return 0;
}