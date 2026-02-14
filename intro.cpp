#include<iostream>
int main(){

    std:: string  name;
    int age;
    std:: cout << "What is your full name? " ;
    //std:: cin >> name;
    // it will not work if the use uses space in their name
    //so process 2--
    std::getline(std::cin, name);
    //it is used for string data type more than one word

    std:: cout<< "What is your age? ";
    std:: cin >> age;

    std:: cout << "Hello " << name << '\n';
    std:: cout << "You are " << age << " years old" << '\n';

    return 0;
}
