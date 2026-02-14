#include<iostream>
int main(){

    //tenary operator ?: = replacement to an if/else statement
    //condition ? expression 1 : expression 2;
 
    int number;

    std:: cout << "Write a number: ";
    std:: cin >> number;

    number % 2 == 0 ? std:: cout << "EVEN \n" : std :: cout << "ODD \n";

    return 0;
}