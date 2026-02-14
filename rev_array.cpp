#include <iostream>
using namespace std;
int main()
{

    int arr[] = {5, 7, 19, 74, 2, 8};
    int size = sizeof(arr) / sizeof(int);

    int copyArr[size];

    for (int i = 0; i < size; i++){
        int j = size - i - 1;

        copyArr[i] = arr[j];
    }

    // output the copy array ...
    /*for(int i = 0; i < size ; i++){
        cout << copyArr[i] << " ";
    }
    */

    for (int i = 0; i < size; i++){
        arr[i] = copyArr[i];
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
