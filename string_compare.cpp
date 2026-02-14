#include<iostream>
#include<string.h>
using namespace std;

// in c++ there is a better way to do this using string library
// this is under the hood the function does 

int compare(char *a,char *b,int size){
    int count =0;
    while(*a != '\0'){
        if(*a == *b){
            count++;
        }
        a++;
        b++;
    }
    return count-size;
}

int main(){
    
    char arr[200];
    cout << "String 1: ";
    fgets(arr,200,stdin);

    char crr[200];
    cout << "String 2: ";
    fgets(crr,200,stdin);

    int size = strlen(arr);

    // strcmp returns a integer (C-Style)
    int d = compare(arr,crr,size);

    if(d == 0){
        cout << "Both Strings are equal" << endl;
    }
    else if(d > 1){
        cout << "String 1 is greater than String 2" << endl;
    }
    else if(d < 1){
        cout << "String 1 is less than String 2" << endl;
    }

    return 0;
}