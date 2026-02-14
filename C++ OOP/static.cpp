#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class A{

    int a;
    static int b;
public:

    A(int a){
        this->a = a;
        b++;
    }

    void print(){
        cout << a << " " << b << endl;
    }

    static int get_b(){
        return b;
    }

};

int A :: b = 5;

int main(){
      
    A a1(4);                          // Only one copy of that member is created for the
    a1.print();                      // entire class and is shared by all the objects of that                         
   cout << A :: get_b() << endl;    // class, no matter how many objects are created

   cout << a1.get_b();

    return 0;
}