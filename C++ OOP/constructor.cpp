#include<iostream>
using namespace std;

class Student{
public:

    string name;
    int roll;
    float cgpa;

    Student(){ // this is a default constructor
                // if no constructor is created it runs automatically. When a constructor is created, it overwrites the default constructor.   
    }

    Student(string n, int r, float c){
        name = n;
        roll = r;
        cgpa = c;
    }

    Student(int r, float c ,string n){
        roll = r;
        name = n;
        cgpa = c;
    }

    Student(int r){
        roll = r;
    }

    Student(int r , float c){
        cgpa = c;
        roll = r;
    }

    Student(string n){
        name = n;
    }

};

int main(){
    
    // using default constructor
    Student s1;
    s1.name = "ABC";
    s1.cgpa = 9.2;
    s1.roll = 56;

    Student s2(s1); // copy constructor
    s2.name = "TY"; // deep copy -> does not effect on the main object it changes the current object.

    // using parameterized constructor
    Student s3("QQQ",756,8.5); // constructor -> (str,int,float)

    Student s4(92,5.6,"ADV"); // constructor -> (int,float,str)

    Student s5("RRR"); // constructor -> (str)

    Student s6(25,9.8); // constructor -> (int,float)

    s6.name = "YUI";

    Student s7(64);
    s7.roll = 22;
    s7.cgpa = 1.7;

    Student s8 = s1; // copy constructor 
    s8.name = "OPAS";

    cout << s1.name << " " << s1.roll << " " << s1.cgpa << endl;
    cout << s2.name << " " << s2.roll << " " << s2.cgpa << endl;
    cout << s3.name << " " << s3.roll << " " << s3.cgpa << endl;
    cout << s4.name << " " << s4.roll << " " << s4.cgpa << endl;
    cout << s6.name << " " << s6.roll << " " << s6.cgpa << endl;
    cout << s8.name << " " << s8.roll << " " << s8.cgpa << endl;

    return 0;
}