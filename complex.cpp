#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;

public:

    Complex(int r , int i){
        real = r;
        imaginary = i;
    }

    void showNum(){
        // cout << "Real : " << real << "\n" << "Imaginary : " << imaginary << endl;
        cout << real << "+" << imaginary << "i" << endl;
    }

    Complex operator + (Complex &obj){

    int realRes = this-> real + obj.real;
    int imgRes = this-> imaginary + obj.imaginary;
    Complex c3(realRes,imgRes);
    return c3;
    }    

};
int main(){

    Complex c1(3,4);
    Complex c2(4,5);
    c1.showNum();
    c2.showNum();
    Complex c3 = c1 + c2;
    c3.showNum();

    return 0;
}