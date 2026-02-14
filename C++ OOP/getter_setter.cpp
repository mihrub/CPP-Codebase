#include<iostream>
using namespace std;

class Student{
public:        
    string name;
    int roll;

    Student(string name, int roll , float marks){ //constructor should always be under public access modifier
        this->name = name;                     
        this->roll = roll;
        this->marks = marks;
    }

    void set_marks(float marks){
        this->marks = marks;
    }

    float get_marks(){
        return marks;
    }

private: // private members can not be used,changed or print.
    float marks;   
    
    // main function can not access it
    void change(){
        roll = 75;
    }
};

int main(){

      Student s1("ABC",66,80.3);
      s1.name = "CDE";  // its value can be changed because it is under public access modifier
      s1.roll = 56;     // same as name
    //   s1.marks; // can not be access through . operator
    //   s1.marks = 77.2; // can not be assigned 
       
    // can be assigned or change using getters and setters 
    s1.set_marks(56.7);
    cout << s1.get_marks() << endl;

    // s1("GTE",97,24.5); // constructor can not be called more than one

    return 0;
}