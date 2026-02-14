#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<utility>
#include<tuple>
using namespace std;
int main(){

    /*
    tuple is not a homogeneous container—every position can (and usually does) hold a value of a different type.
    Because of that, the only way the compiler can know the type it must return from 
    get is if the index you pass to get is a compile‑time constant (a template non‑type parameter), not a run‑time variable.
    */

    tuple<string,int,float,double,char> tt = {"ABCD",44,5.6,9.2,'C'};
    cout << get<0>(tt);

    // this method wont work
    // for(int i = 0; i<5; i++){          // // i is read at run‑time, so the compiler cannot
    //     cout << get<i>(a) << " ";      // // decide which element type to return.  
    // }
    
    
    //tuple declaration
    tuple<int,double,char> tp; 

    // assign values using make_tuple() function
    tp = make_tuple(10,5.4,'B');

    //printing element
    cout << get<0>(tp) << " " << get<1>(tp) << " " << get<2>(tp) << endl;

    //to make changes
    get<0>(tp) = 4;
    get<2>(tp) = 'A';

    cout << get<0>(tp) << " " << get<1>(tp) << " " << get<2>(tp) << endl;

    // declare and assign value together
    tuple<float,char> tpl = {7.2,'D'};
    cout << get<0>(tpl) << " " << get<1>(tpl) << endl;

    // tuple swap
    tuple<float,char> tpp = {9.5,'G'};
    tpp.swap(tpl);
    cout << get<0>(tpp) << " " << get<1>(tpp) << endl;    
    cout << get<0>(tpl) << " " << get<1>(tpl) << endl;

    // tuple concatenate
    auto tpptpl = tuple_cat(tpl,tpp);
    cout << get<0>(tpptpl) << " " << get<1>(tpptpl) << " " << get<2>(tpptpl) << " " << get<3>(tpptpl) << endl;

    // unpacking tuple into variables (without ignore)
    int a;
    char c;
    double d;
    tie(a,d,c) = tp;
    cout << a << " " << d << " " << c << endl;

    // unpacking tuple into variables (with ignore)
    int b;
    char e;
    double f;
    tie(b,ignore,e) = tp;
    cout << b << " " << e << endl;

    // cout << f << endl; // garbage value double f not assigned

    return 0;
}