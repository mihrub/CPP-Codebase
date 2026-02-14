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
};

void change(Cricketer& c){
    c.runs = 23000;
}

void change(Cricketer *c){
    c->avg = 66.2; 
}

int main(){
    Cricketer c1("AB de villeras",55000,70.77);
    Cricketer c2("Trent Bolt",10000,28.9);

    // pass by reference
    cout << c1.runs << endl;
    change(c1);
    cout << c1.runs << endl;

    //using object pointer
    cout << c1.avg << endl;
    change(&c1);
    cout << c1.avg << endl;

    Cricketer *ptr = &c2;
    cout << (*ptr).runs << endl;
    (*ptr).runs = 777000;            // ptr->runs = 77000 similar syntax;
    cout << c2.runs << endl;

    return 0;
}