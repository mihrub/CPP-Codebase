#include<iostream>
using namespace std;
    // must be in sorted order....
    
    int binarySearch(int arr [] , int n , int key ){

        int start = 0;
        int end = n;

        while(start <= end ){

            int mid = (start + end) / 2 ;

            if (arr[mid] == key){
                return mid;
            }
            else if (arr[mid] < key ) {
                start = mid + 1;
            }
            else if (arr[mid] > key ){
                end = mid - 1 ;
            }
        }
        return -1;
    }

int main(){

    int n;
    cout << "Size Of Array : ";
    cin >> n;
    int arr [n];
    cout << "Array : " << endl;

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Key : ";
    cin >> key;

    cout << binarySearch(arr , n , key);

    return 0;
}