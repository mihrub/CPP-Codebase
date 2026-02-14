#include <iostream>
using namespace std;

class Father {
private:
    int money;
protected:
    int gold;
public:
    int land;

    Father(int money, int gold, int land) {
        this->money = money;
        this->gold = gold;
        this->land = land;
        cout << "Constructor Father" << endl;
    }

    Father(int gold,int land){
        this->gold = gold;
        this->land = land;
        cout << "Constructor Father" << endl;
    }

    void set_money(int money){
        this->money = money;
    }

    int get_money(){
        return money;
    }
};

class Son : private Father {
public:
    Son(int gold,int land) : Father(gold,land){}
    void access() {
        cout << "Gold from Father: " << gold << endl;
        cout << "Land from Father: " << land << endl;
    }

    void access_money(){
        cout << "Money from Father: " << get_money() << endl;
    }

    void set_father_money(int money){
        set_money(money);
    }
};

class GrandSon : public Son {
public:
    GrandSon(int gold,int land) : Son(gold,land){}

    void set_son_money(int money){
        set_father_money(money);
    }

    void get_son_money(){
        access_money();
    }

    void display(){
        access();
    }
};

int main() {

    Son s(10,546);
    s.set_father_money(700);
    s.access();
    s.access_money();

    GrandSon g(60,43);
    g.set_son_money(39);
    g.get_son_money();
    g.display();

    return 0;
}