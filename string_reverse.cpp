#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char arr[200];
    cout << "String: ";
    fgets(arr,200,stdin);

    char *start = arr;
    char *end = arr;

    while(*end != '\0'){
        end++;
    }
    end--;

    if(*end == '\n'){
        *end = '\0';
        end--;
    }

    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "Reversed String: ";
    puts(arr);

    return 0;
}