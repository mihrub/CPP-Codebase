#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[] = { 3 , -4 , 5 , 4 , -1 , 7 , -8};
    int size = sizeof(arr)/sizeof(int);

    int MaxSum = INT_MIN;
    
    for(int i = 0 ; i<size; i++){
        int current_sum = 0;
        for(int j = i ; j<size ; j++){
            current_sum += arr[j];
            MaxSum = max(MaxSum,current_sum);
        }
        
    }
    cout << MaxSum << endl;

//Kadane's Algorithm : 

  int arr[] = { 3 , -4 , 5 , 4 , -1 , 7 , -8};
    int size = sizeof(arr)/sizeof(int);

    int MaxSum = INT_MIN;
    int current_sum = 0;
    
    for(int i = 0 ; i<size; i++){

        current_sum += arr[i];
        MaxSum = max(MaxSum,current_sum);
            
        if(current_sum < 0)
            current_sum = 0;        
    }
    cout << MaxSum << endl;

    return 0;
}