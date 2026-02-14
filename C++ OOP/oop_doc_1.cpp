#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Rectangle{
private:
    int length;
    int width;
    int *random;    // just a random variable 
    int *arbitrary; // for better understanding of destructor
public:
    Rectangle();
    Rectangle(int length,int width){
        this->length = length;
        this->width = width;
        cout << "Constructor is called object being created" << endl;
        random = new int();
        arbitrary = new int[10];
        // printArea();         // valid can be called
    } 
    Rectangle(const Rectangle &r){
        length = r.length;
        width = r.width;
        cout << "Constructor is called object being created" << endl;
        random = new int;      // with paranthesis without paranthesis both valid
        arbitrary = new int[20];
    }
    ~Rectangle(){              // no arguments for destructor
        cout << "Destructor is called object being destroyed" << endl;
        if(random != NULL){
            delete random;
            random = NULL;
        }
        if(arbitrary != NULL){
            delete[] arbitrary;
            arbitrary = NULL;
        }
    }   
    void set_length(int length){
        this->length = length;
    }
    void set_width(int width){
        this->width = width;
    }
    int get_length(){
        return length;
    }
    int get_width(){
        return width;
    }
    void printArea();
};

void Rectangle :: printArea(){
    cout << length*width << endl;
}

Rectangle :: Rectangle(){    // consturctor can be defined from outside the class
    cout << "Constructor is called object being created" << endl; 
    random = new int;
    arbitrary = new int[30];
}
int main(){

    //parameterized constructor 
    Rectangle r1(4,6);
    r1.printArea();

    //pointer to a object (statically)
    Rectangle *r2 = &r1;
    r2->set_length(6);
    r2->set_width(6);

    r2->printArea();
    r1.printArea();

    //points to a chunk of memory (dynamically) (heap) using parameterized constructor
    Rectangle *r3 = new Rectangle(2,6);

    // dynamically allocated memory should always be deleted after use
    r3->printArea();
    delete r3;
    r3 = NULL;

    //copy a object using copy constructor
    Rectangle r4(r1);
    r4.printArea();

    //points to a chunk of memory (dynamically) (heap) using non-parameterized constructor
    Rectangle *r5 = new Rectangle();
    r5->set_length(3);
    r5->set_width(4);
    r5->printArea();

    delete r5;
    r5 = NULL;
    
    return 0;
}