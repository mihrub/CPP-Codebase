#include<iostream>
using namespace std;

int getMin(int numbers[], int n){

    int min = numbers[0];

    for (int i = 1 ; i < n ; i++ ){
        if(min >= numbers[i])
            min = numbers[i];
    }
        return min;
}

int getMax(int numbers[], int n){

    int max = numbers[0];

    for (int i = 1 ; i < n ; i++ ){
        if(max <= numbers[i])
            max = numbers[i];
    }
        return max;
}

void GetMin_Max(int numbers[], int n , int *max , int *min){

    for (int i = 1 ; i < n ; i++ ){
        if(*max <= numbers[i])
            *max = numbers[i];
    else if(*min >= numbers[i])
            *min = numbers[i];    
    }
}
int main(){

    int n;
    cout << "Size of array : ";
    cin >> n;

    int numbers[n]; 
    cout << "Array : " << endl;

    for (int i = 0 ; i < n ; i++){
        cin >> numbers[i];
    }

    cout << "Min is : " << getMin(numbers,n) << endl;
    cout << "Max is : " << getMax(numbers,n) << endl;

//Alternnative approach

    int min = numbers[0];
    int max = numbers[0];

    GetMin_Max(numbers,n,&max,&min) ;

    cout << "Min is : " << min << endl;
    cout << "Max is : " << max << endl;

    return 0;
}