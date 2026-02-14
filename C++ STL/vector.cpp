#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){

    // to make array like vector or size declared vector
    vector<int> v (5); // 5 denotes the size
    //now we can input using || cin || function

    // declare size and assign a value
    vector<int> a (5,0); // Size , Value
    // a[0] = 0;

    // intialize with another vector
    vector<int> b(a); // this has all the values of a

    //printing the elements of vector b
    for(int i = 0; i<b.size(); i++){
        cout << b[i] << " " ;
    }

    vector<int> vec;  // size not declared. 
    vec.push_back(4); //so we have to call push_back to insert value
    vec.push_back(2); 
    vec.push_back(24);
    cout << vec[0] << endl; //  vec[0] = 4 , vec[1] = 2 , vec[2] = 24

    // both are same 
    cout << vec[1] << endl;
    cout << vec.at(1) << endl;

    // vector - Size
    cout << vec.size() << endl; // returns the size of vector

    // access 0th element
    cout << vec.front() << endl;
    cout << vec[0] << endl;

    // access last element
    cout << vec.back() << endl;
    cout << vec[vec.size() - 1] << endl;

    vec.clear(); // it changes the vector size to 0. 
                 //  But didnt erase values previously allocated
                 // Clears the vector elements. 
                 // Do not delete the memory, only clear the value.

    cout << vec[0] << endl; // here vec[0] = 4

    vec.push_back(1);
    cout << vec[0] << endl; // now it just assign  vec[0] = 1

    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    //delete from end
    vec.pop_back();
    vec.pop_back();

    // vector empty? 1 : 0
    cout << vec.empty() << endl; // returns boolean value 0 or 1
    // if vector is empty return 1
    //else return 0

    // just simple if else to chceck empty or not
    if(vec.empty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }

    //printing the elements
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << " ";        // output : 1 2 3
    }
    cout << endl;

    // delete 1 value from a particular index
    vec.erase(vec.begin()+1);
    for(int i = 0; i<vec.size(); i++){   
        cout << vec[i] << " ";
    }
    cout << endl;   // output : 1 3
    
    // delete a range of value
    vec.erase(vec.begin()+1,vec.end());
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;    //output : 1

    // insert 1 value after a particular index
    vec.insert(vec.begin()+1 , 2);
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << " ";    
    }
        cout << endl;  // output : 1 2 2 3

    // insert a range of values
    vec.insert(vec.begin()+1,3,0);   
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << " ";    // output : 1 0 0 0 2 3
    }
        cout << endl;  

    return 0;
}