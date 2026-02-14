#include <iostream>
using namespace std;
int main(){

    float height;
    cout << "Height in meter: ";
    cin >> height;
    
    float weight;
    cout << "Weight in kilogram: ";
    cin >> weight;

    float BMI = weight / (height * height);

    if (BMI < 18.5){
        cout << "Underweight" << endl;
    }
    else if (BMI > 25){
        cout << "Overweight" << endl;
    }
    else{
        cout << "Normal Weight" << endl;
    }
    cout << "Your BMI is : " << BMI << endl;

    return 0;
}