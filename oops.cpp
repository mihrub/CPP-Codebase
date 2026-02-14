#include <iostream>
using namespace std;

class Student{
    // properties
    string name;
    float cgpa;

public:
    // methods
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }
    // Setters
    void setName(string nameval){
        name = nameval;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    // Getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};

class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout << "deactivating account \n";
    }
    void editBio(string newBio){
        bio = newBio;
    }
};

class Car{
    string name;
    string colour;

public:
    Car(){
        cout << "constructor without parameter\n";
    }

    Car(string name, string colour){
        cout << "constructor is called , object being created\n"
             << endl;
        this->name = name;
        this->colour = colour;
    }
    // Getter
    string getName(){
        return name;
    }
    string getColour(){
        return colour;
    }
    void start(){
        cout << "car has started" << endl;
    }
    void stop(){
        cout << "car has stopped" << endl;
    }
};

int main(){

    Student s1;
    s1.setName("APO");
    s1.setCgpa(4.0);
    // cout << s1.cgpa << endl;
    s1.getPercentage();

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    Car c1("maruti 800", "white");
    cout << c1.getName() << endl;
    cout << c1.getColour() << endl;

    Car c0;

    Car c2("fortuner", "white");
    cout << c2.getName() << endl;
    cout << c2.getColour() << endl;

    return 0;
}