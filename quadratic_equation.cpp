#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double a, b, c;
    cout << "Enter the Coefficient of Quadratic Equation : ";
    cin >> a >> b >> c;

    if (a == 0){
        cout << "It is a Linear Equation" << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0){
        double root1, root2;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 : " << root1 << endl;
        cout << "Root 2 : " << root2 << endl;
    }

    else if (discriminant == 0){
        double root = -b / (2 * a);
        cout << "Both roots are equal" << endl;
        cout << "Root : " << root << endl;
    }

    else{
        cout << "Both roots are complex" << endl;
    }

    return 0;
}