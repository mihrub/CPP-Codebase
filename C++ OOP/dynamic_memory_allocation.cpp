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

void print(Cricketer& c1){
    cout << c1.name << " " << c1.runs << " " << c1.avg << endl;
}

void print(Cricketer *p){
    cout << p->name << " " << p->runs << " " << p->avg << endl;
}

int main(){

    Cricketer c1 ("AB de villears",55000,78.4);
    Cricketer c2 = {"Abdul",23000,53.4};

    Cricketer *ptr = new Cricketer("Andre",12670,66.3);
    
    print(c1);
    print(c2);

    cout << ptr->name << " " << ptr->runs << " " << ptr->avg << endl;

    print(ptr);


    int x = 5; // Static Allocation

    int *p = new int(6); // DMA



    return 0;
}