#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char arr[200];
    fgets(arr,200,stdin);
    int length = strlen(arr);


    if(length > 0 && arr[length-1] == '\n'){
        arr[length-1] = '\0';
    }

    bool capital = false;
    bool small = false;
    bool num = false;
    bool spe = false;
    char special [] = {"!@#$^&*()_+=-?><.,/|"};

    for (int i = 0; i < length; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            small = true;
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            capital = true;
        } else if (arr[i] >= '0' && arr[i] <= '9') {
            num = true;
        } else if (strchr(special, arr[i]) != NULL) {
            spe = true;
        }
    }
    if(small==num==capital==spe==true){
        cout << "Strong Password" << endl;
    }
    else{
        cout << "Not Strong Password" << endl;
    }
    return 0;
}