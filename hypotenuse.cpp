#include <iostream>
#include<cmath>

int main(){
    
    int x,y,z;
    std:: cout << "What's the length of the base? ";
    std::cin >> x;

    std:: cout << "What's the length of the perpendicular? ";
    std:: cin >> y;

    z = sqrt(pow(x,2)+pow(y,2));
    std:: cout << "The Length of the Hypotenuse " << z << '\n';
    
    return 0;

}