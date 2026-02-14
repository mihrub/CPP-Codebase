#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Bank{
private:
    int id;
    float amount;
    static int n;

public:
    Bank(){
        id = 0;
        amount = 0;
        n++;
    }

    Bank(int id, float amount){
        this->id = id;
        this->amount = amount;
        n++;
    }

    Bank(Bank &object){
        id = object.id;
        amount = object.amount;
        n++;
    }

    void setID(int id){
        this->id = id;
    }

    void setAmount(float amount){
        this->amount = amount;
    }

    int getID(){
        return id;
    }

    float getAmount(){
        return amount;
    }

    void changeAmount(float amount){
        this->amount = amount;
    }

    static void displayN(){
        cout << "Total Users: " << n << endl;
    }

    void display(){
        cout << "ID: " <<id << endl;
        cout << "Amount: " << amount << endl;
        cout << "Users : "<< n << endl;
        cout << endl;
    }
};

int Bank :: n = 0;


int main(){

    Bank person1(1000,4000.23);
    person1.display();

    Bank person2(1100,3000.45);
    person2.display();

    Bank person3(1200,6000.55);
    person3.display();

    Bank person4(1300,4567.6);
    person4.changeAmount(222.5);
    person4.display();

    Bank person5(person2);
    person5.display();

    
    float Total_Amount = person1.getAmount() + person2.getAmount() + person3.getAmount() + person4.getAmount() + person5.getAmount();
    
    cout << "Total Amount of Bank : " << Total_Amount << endl;

    return 0;
}