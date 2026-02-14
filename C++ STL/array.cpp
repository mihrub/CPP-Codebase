#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<array>
using namespace std;
int main(){
    
    // without declaration
    array<int,4> a;

    //taking input
    for(int i = 0; i<a.size(); i++){
        cin >> a[i];
    }

    // output
    for(int i = 0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // with declaration
    array<int,4> b = {1,2,3,4};

    for(auto itr : b){
        cout << itr << " ";
    }
    cout << endl;

    //same
    cout << b.at(2) << endl; // returns value in the array 
    cout << b[2] << endl;

    // access first and last index
    cout << b.front() << endl; // returns the first element of the array
    cout << b.back() << endl; //return the last element of the array

    // assign value to every index 
    b.fill(5);
    for(auto itr : b){
        cout << itr << " ";
    }
    cout << endl;   
    
    //swap two arrays
    b.swap(a);
    for(auto itr : b){
        cout << itr << " ";
    }
    cout << endl;
    
    // check array is empty or not
    // returns true if array is empty else return false.
    // ******** It never returns true as an Array can never be empty. **********
    if(b.empty()){
        cout << "Empty" << endl; 
    }
    else{
        cout << "Not Empty" << endl;
    } 

    // address of first element
    cout << b.begin() << endl;
    // value at first index
    cout << *(b.begin()) << endl;

    //address of last element
    cout << b.end() - 1 << endl;
    //value at last index
    cout << *(b.end() - 1) << endl;

    return 0;
}