#include<iostream>
#include<cmath>

int main(){
    
    double a = 5.0001;
    double b = 6;
    int c = std:: max(a,b);
    int d = std:: min(a,b);
    int e = pow(2,4);
    int f = sqrt(256);
    int g = abs(-3);
    int h = round(a);   
    int i = floor(-2.5);
    int j = ceil(-2.5);
    long long k = tgamma(5);

    std :: cout << "MAX : " << c << std :: endl;    
    std :: cout << "MIN : " << d << std :: endl;
    std :: cout << "Power : " << e << std :: endl;
    std :: cout << "Square Root : " << f << std :: endl;
    std :: cout << "Absolute : " << g << std :: endl;
    std :: cout << "Round : " << h << std :: endl;
    std :: cout << "Floor : " << i << std :: endl;
    std :: cout << "Ceiling : " << j << std :: endl;
    std :: cout << "Factorial : " << k << std :: endl;

    return 0;
}