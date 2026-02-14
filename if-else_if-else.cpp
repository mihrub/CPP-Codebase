#include<iostream>
int main(){

    int age;
    std:: cout << "Enter Your Age : ";
    std:: cin >> age;

    if(age >= 18) {
        std:: cout << "You are Welcome.\n";
    }
    else if(age < 0){
        std:: cout<< "You are not age enough to enter.\n";
    }
    else{
        std:: cout << "You are so young. \n";
    }
    return 0;
    
}