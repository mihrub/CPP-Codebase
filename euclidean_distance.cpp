#include<iostream>
#include<cmath>

int main(){
    
    double a,b,c,d,result;

    std:: cout << "(x1,y1): ";
    std:: cin >> a >> b;

    std:: cout << "(x2,y2): ";
    std:: cin >> c >> d;

    result = sqrt(pow((a-c),2)+pow((b-d),2));
    std:: cout << "Distance = " << result << std:: endl;
    return 0;
}