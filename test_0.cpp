#include<iostream>
int main(){

    int n,i;
    char txt[50];
    std:: cout << "Enter the text: ";
    std:: cin >> txt;

    std:: cout << "How many times to display? ";
    std:: cin >> n;

    for(i = 1; i<=n; i++){
        std:: cout << txt << "\n";
    }
    return 0;
}