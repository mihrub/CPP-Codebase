#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Ball{
private:
    double speed;
    static int n;
public:
    Ball(){
        n++;
    }
    Ball(double speed){
        this->speed = speed;
        n++;
    }  
    void set_speed(double speed){
        this->speed = speed;
    }
    static int get_n(){  //• It is visible only within the class, but its lifetime is the entire program
        return n;        //• The value must be initialized outside the class

    }
    double get_speed(){
        return speed;
    }
    void get_average_speed(Ball &b){
        cout << (speed+b.speed)/2.0 << endl;
    } 

    Ball average_speed(Ball &b){
        Ball t;
        t.speed = (speed + b.speed)/2.0;
        return t;
    }
    
};

int Ball :: n = 0;

int main(){
      
    Ball a;
    a.set_speed(5);

    Ball b(10);
    b.get_average_speed(a);

    Ball c;
    c = a.average_speed(b);
    cout << c.get_speed() << endl;

    cout << Ball :: get_n() << endl;    // Static method can be called by class name with scope resolution operator

/*Only one copy of that member is created for the entire class 
and is shared by all the objects of that class, 
no matter how many objects are created
*/
    return 0;
}