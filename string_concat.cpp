#include<iostream>
using namespace std;

// in c++ there is a better way to do this using string library
// this is under the hood the function does 

char* concat(char*a,char*b){
    static char trr[200];
    char *c = trr;
    while(*a != '\0'){
        if(*a != '\n'){
            *c = *a;
            c++;
        }
        a++;
    }
    while(*b != '\0'){
        *c = *b;
        c++;
        b++;
    }
    *c ='\0';
    return trr;
}

int main(){

    char arr[200];
    cout << "Enter a text: ";
    fgets(arr,200,stdin);
    char *ptr = arr;
    char crr[200];
    char*ptr2 = crr;

    while(*ptr != '\0'){
        *ptr2 = *ptr;
        ptr++;
        ptr2++;
    }
    char *a = concat(arr,crr);
    cout << a;

    return 0;
}