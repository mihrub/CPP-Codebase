#include<iostream>
using namespace std;

void IntroduceMe(string name , string country , int age ){
    cout << "My name is : " <<  name << endl ;
    cout << "My country is : " << country << endl ;
    if (age != 0)
        cout << "My age is : " << age << endl;
}     

int main(){

    string name;
    cout << "Name : ";
    cin >> name;

    string country;
    cout << "Country : ";
    cin >> country;

    int age;
    cout << "Age : ";
    cin >> age;

    IntroduceMe(name,country,age);

    return 0;
}
