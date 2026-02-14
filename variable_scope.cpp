#include<iostream>
using namespace std;
void print_num();
int num = 3; // this is a global variable

int main(){

    int num = 2 ;
    cout << num << endl;
    print_num();
    // to use global varibale to print   ::  this sign is used...
    cout << ::num << endl;

}
void print_num(){
    int num = 1;
    cout << num << endl;
}