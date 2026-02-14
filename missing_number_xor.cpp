#include <iostream>
#include <vector>
using namespace std;

int missing_number(int arr[],int size) {
    int xor1 = 0, xor2 = 0;

    // xor 1 to n numbers
    for (int i = 1; i <= size; i++) {
        xor1 ^= i;
    }

    // xor array elements
    for (int i = 0; i < size - 1; i++) {
        xor2 ^= arr[i];
    }

    // Missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main() {

    int arr[] = {1,2,3,4,5,7,8}; 

    int result = missing_number(arr,7);  
    cout << "Missing Number: " << result << endl;  

    return 0;
}