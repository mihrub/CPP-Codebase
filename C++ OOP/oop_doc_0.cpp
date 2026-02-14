#include<iostream>
using namespace std;

class Student{ // Class name Student 
public:
    string name;
    int roll;
    float cgpa;
};

void print(Student s1){
    cout << "Name : " << s1.name << endl;
    cout << "Roll No : " << s1.roll << endl;
    cout << "CGPA : " << s1.cgpa << endl;
}

void change(Student s1){
    s1.roll = 35;
}
void change1(Student &s1){
    s1.roll = 80;
}

int main(){

    Student a1; // a1 refers to a object of Student class

    // declaration using dot operator
    a1.name = "TenZ";
    a1.roll = 7;
    a1.cgpa = 8.2;

    //without using fuction
    cout << a1.name << " " << a1.roll << " " << a1.cgpa << endl;

    // objects are passed by value in a function. So it does not change anything.
    print(a1);
    change(a1);
    print(a1);

    // to pass as a reference
    change1(a1);
    print(a1);

    return 0;
}