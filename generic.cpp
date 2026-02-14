#include<iostream>
using namespace std;

// typename or class both are correct.
//

template<class T>

void Swap(T& a , T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 6 , b = 3;
    cout << a << " | " << b << endl;
    Swap<int>(a,b) ;                        // <int> optional
    cout << a << " | " << b << endl;

    char c = 'c' , d ='d';
    cout << c << " | " << d << endl;
    Swap<char>(c,d);                        // <char> optional
    cout << c << " | " << d << endl;

    return 0;
}