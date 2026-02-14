#include<iostream>
#include<cmath>
using namespace std;

class Complex{
private:
    double real;
    double imaginary;

public:

    Complex(){
        real = 0;
        imaginary = 0;
    }

    Complex(double real, double imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex operator + (const Complex &obj)const{

        Complex temp;
        temp.real = this->real + obj.real;
        temp.imaginary = this->imaginary + obj.imaginary;

        return temp;
    }

    Complex operator - (const Complex &obj)const{

        Complex temp;
        temp.real = this->real - obj.real;
        temp.imaginary = this->imaginary - obj.imaginary;

        return temp;
    }

    Complex operator * (const Complex &obj)const{

        Complex temp;
        temp.real = (this->real * obj.real) - (this->imaginary * obj.imaginary);
        temp.imaginary = (this->real * obj.imaginary) + (this->imaginary * obj.real);

        return temp;
    }

    Complex operator / (const Complex &obj)const{

        Complex temp;
        temp.real = ( (this->real*obj.real) + (this->imaginary * obj.imaginary) ) / ( pow(obj.real,2) + pow(obj.imaginary,2) ) ;
        temp.imaginary = ( (this->imaginary * obj.real) - (this->real * obj.imaginary) ) / ( pow(obj.real,2) + pow(obj.imaginary,2) ); 

        return temp;
    }

    void print(){

        if(real > 0 && imaginary > 0)
            cout << real << "+" << imaginary << "i" << endl;
        else if(real < 0 && imaginary < 0)
            cout << real << imaginary << "i" << endl;
        else if(real < 0 && imaginary > 0) 
            cout <<  real << "+" << imaginary << "i" << endl;
        else
            cout << real << imaginary << "i" << endl;       
    }
};

int main(){

    Complex c0(4,9);
    Complex c1(5,4);
    Complex c2(2,7);

    Complex c3 = c0 + c1 + c2;  // c1+c2 = c1.add(c2)
    c3.print();

    c3 = c0 + c1 - c2;
    c3.print();

    c3 = c0 * c1 * c2;
    c3.print();

    c3 = c0 / c1 / c2 ;   // first temp = c0/ c1 then c3 = temp/c2
    c3.print();

    return 0;
}