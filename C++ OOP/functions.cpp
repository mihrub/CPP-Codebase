#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs , float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(int runs){
        cout << name << " " << runs << " " << avg << endl; // without using this keyword , here locaL variables priortizes so the variable under class
    }                                                      // will not be printed rather the local variable of that function is printed

    void print(){
        cout << this->name << " " << this->runs << " " << this->avg << endl;
    }

    int matches(){
        return runs/avg;
    }  
};

    // function outside the class

void print(Cricketer c){
    cout << c.name << " " << c.runs << " " << c.avg << endl; // this function prints all the values by passing the class to function
}   


int main(){
    Cricketer c1("AB de villeras",55000,70.77);
    Cricketer c2("Trent Bolt",10000,28.9);

    c1.print();

    c1.print(7); // does not change the runs to 7 rather print the value which is passed as an argument

    print(c2);
    print(c1);

    cout << "Matches :" << c1.matches() << endl;
    cout << "Matches :" << c2.matches() << endl;

    return 0;
}