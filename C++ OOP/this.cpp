#include<iostream>
using namespace std;

class Person{
public:    
    string name;
    int age;

    //without using this keyword
    // Person(string name , int age){ // No compilation error . But it is not specified which is the local variable 
    //     name = name;                // and which is the member variable so it results garbage memory 
    //     age = age;
    // }


    // using this keyword

    Person(string name, int age){ // this points to member variable 
        this->name = name;
        this->age = age;
    }
};

int main(){

    Person p1("Henry",25);
    cout << p1.name << " " << p1.age << endl; 

    Person p2("Eggy",66);
    cout << p2.name << " " << p2.age << endl; 

    return 0;
}