#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main(){
      
    set<int> s = {1,2,2,3,4,5,5,5,7,19,10,19,14,6};

    // insert in set
    s.insert(1);

    // print set
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // print in reverse order
    for(auto it = s.rbegin(); it != s.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // check if a element exits in set
    if(s.count(40)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    // removing duplicate from a vector and sort in ascending order

    vector<int> v = {14,3,23,44,7,2,7,7,2,13,14,3,3,3,3,3,3,3,3};
    set<int> ss(v.begin(),v.end());

    for(auto it = ss.begin(); it != ss.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // using custom comparator to get the element in decending order
    set<int,greater<int>> s1 = {1,33,4,5,6,1,3,5,5,4,3,35,98,2};
    
    // print set
    for(auto it : s1){
        cout << it << " ";
    }
    cout << endl;


    set<int> s2 = {1,33,4,5,6,1,3,5,5,4,3,35,98,2,5};
    
    // lower-bound
    // Iterator pointing to first element equal to or greater than key, or end().

    if(s2.lower_bound(3) == s2.end()){
        cout << "Element not Found" << endl;
    }
    else{
        cout << *s2.lower_bound(3) << endl; // 3 or greater than 3
    }

    if(s2.lower_bound(7) == s2.end()){
        cout << "Element not Found" << endl;
    }
    else{
        cout << *s2.lower_bound(7) << endl; // if 7 not found then greater than 7
    }

    // upper-bound
    // Iterator pointing to the first element greater than key, or end().
    if(s2.upper_bound(3) == s2.end()){
        cout << "Element not Found" << endl;
    }
    else{
        cout << *s2.upper_bound(3) << endl; // strictly greater than 3
    }

    if(s2.upper_bound(7) == s2.end()){
        cout << "Element not found" << endl;
    }
    else{
        cout << *s2.upper_bound(7) << endl; // strictly greater than 7
    }

    // empty - Returns true if the set is empty.

    if(s2.empty()){
        cout << "Set is Empty" << endl;
    }
    else{
        cout << "Set is not Empty" << endl;
    }

    return 0;
}