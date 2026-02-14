#include<iostream>

int main()
{
    int x,y; //declaration 
    x = 5; //assignment
    y = 10;
    int sum = x + y ;

    std:: cout << x << '\n';
    std:: cout << y << '\n';
    std:: cout << sum << '\n';
    // '\n' is used for new line [note: there will a single qoute]

    //integer (whole number)
    int age = 21;
    int year = 2023;
    float days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = false;
    bool For_Sale = true;

    //string (objects that represents a sequence of text)
    std:: string  name = "XYZ";
    std:: string day = "Friday";
    std:: string food = "Pizza";
    std:: string address = "123 fake street";


    std::cout << "Hello "  << name << '\n' ;
    std::cout << "You are " << age << " years old" << '\n';

    return 0;

}