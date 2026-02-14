#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int i = 0;
    int j = size - 1;

    while (i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 7};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "REVERSE ARRAY" << endl;

    reverseArr(arr, size);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}