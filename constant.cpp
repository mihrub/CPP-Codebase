#include<iostream>
int main(){
    
    /*
    The const keyword specifies that a variable's
    value is constant
    tells the compiler to prevent anything from 
    modifyig it
    (read-only)

    (ALL LETTER SHOULD BE CAPITAL)
    */

    const double PI = 3.141516;
    double radius = 10;
    double cimcumference = 2 * PI * radius ;

    std:: cout << cimcumference << " cm" << '\n';

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    /* Namespace = provies a solution for preventing name conflicts 
                    in large prohects. Each entity needs a unique name.
                    A namespace allows for indentically named entities 
                    as long as the namespace are different.

    */

   return 0;
}