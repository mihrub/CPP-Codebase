#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

// Base class Person

class Person{
private:
    string name;
    string email;
public:  

    // Constructor to initialize name and email

    Person(string name, string email){
        this-> name = name;
        this-> email = email;
    }    

    // Function to display person details

    void display(){
        cout << "Name : " << name << "\nEmail : " << email << endl;
    }
};

// Derived class Student inherits publicly from Person

class Student : public Person{
private:
    double cgpa;
    string department;
public:    

    // Constructor: initializes base class and derived class members

    Student(string name,string email,double cgpa, string department) : Person(name,email){  // Call base class constructor
        this-> cgpa = cgpa;
        this-> department = department;
    }

    // Function to display student details (including base class info)

    void display(){
        Person::display();           //Call base class display
        cout << "CGPA : " << cgpa << "\nDepartment :  " << department << endl;
    }
};

// Derived class Teacher inherits publicly from Person

class Teacher : public Person{
private:
    string subject;
public:    
    Teacher(string name,string email,string subject) : Person(name,email){  // Call base class constructor
        this->subject = subject;
    }

    // Function to display teacher details (including base class info)

    void display(){
        Person::display();  // Call base class display
        cout << "Subject: " << subject << endl;
    }    
};

int main(){

    Person p1("Person 1","yourname@gmail.com");
    p1.display();

    Student s1("Peter Parker","peter123@gmail.com",3.6,"CSE");
    s1.display();

    Teacher t1("Tony Stark","tony123@gmail.com","CSE 1203");
    t1.display();

    return 0;
}