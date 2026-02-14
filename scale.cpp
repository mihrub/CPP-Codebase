#include<iostream>

int main(){

    std:: cout << "************* Temperature Convertion ************* \n";

    std:: cout << "Celsius = C ";

    std:: cout << "Fahrenheit = F ";

    char unit ;
    double Temperature;
    double result;

    std:: cout << "Type C/F : ";
    std:: cin >> unit;

    switch(unit) {

    case 'C':
        
        std:: cout << "Write Fahrenheit Temperature: ";
        std:: cin >> Temperature;
        result = 5.0/9.0*(Temperature-32);
        std:: cout <<"Temperature in Celsius is " << result  << "\n";
        break;

    case 'F':

        std:: cout << "Write Celsius Temperature: ";
        std:: cin >> Temperature;
        result = (9.0/5.0 * Temperature) + 32 ;
        std:: cout <<"Temperature in Fahrenheit is : " << result << "\n" ;
        break;

    default:
        std:: cout << "PLEASE ENTER C/F \n";
        break;   
    }

    std:: cout << "**************************************************** \n";

    return 0;
}