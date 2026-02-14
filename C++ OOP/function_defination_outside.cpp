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
    void print(); // function declaration inside
};

void Cricketer :: print(){       // function defination outside
    cout << name << " " << runs << " " << avg << endl;
} 


int main(){
    
    Cricketer c1("AB de villeras",55000,70.77);
    Cricketer c2("Trent Bolt",10000,28.9);

    c1.print();

    return 0;
}