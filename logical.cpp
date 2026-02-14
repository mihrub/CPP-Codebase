#include<iostream>
int main(){

    int temp;
    bool sunny = true;
    std:: cout << "Enter any temperature: ";
    std:: cin >> temp;

    if(temp <=0 && temp <= 40) {
        std:: cout << "Weather is bad! \n";
        }
    else{
        std:: cout << "Weather is good! \n";
        }
    if(sunny){
        std:: cout << "It is sunny outside! \n" ;
    }
    else{
        std:: cout << "It is not sunny outside! \n";
    }
    return 0;
}