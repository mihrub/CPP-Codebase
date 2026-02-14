#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){

    unordered_set<int> us; // unordered set declaration

    // inserting values in the unordered set
    us.insert(1);
    us.insert(100);
    us.insert(-12);  // Time Complexity - O(1)
    us.insert(10);
    us.insert(1);
    us.insert(100);

    // printing a unordered set
    for(auto it : us){
        cout << it << " ";
    }
    cout << endl;

    // Find an element - returns a iterator, if not found then pointing to end iterator
    if(us.find(10) != us.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    // Number of occurence of an element 
    cout << us.count(1) << endl;
    cout << us.count(55) << endl; // if element not found then it returns 0.

    // erase all the element
    us.clear();

    if(us.empty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }
    
    unordered_set<int> us1 = {10,1,3,5,3,1,3,4,3,4,10,9};

    // Delete all occurrences of 3
    us1.erase(3);

    for(auto it : us1){
        cout << it << " ";
    }
    cout << endl;

    // to remove one occurance
    us1.erase(us1.find(10));
    for(auto it: us1){
        cout << it << " ";
    }
    cout << endl;

    // remove an element with an iterator
    auto itr = us1.begin();
    advance(itr,2);
    us1.erase(itr);

    for (auto it: us1) {
        cout << it << " ";
    }
    cout << "\n";
    
    unordered_set<int> us3 = {10,12,33,54,35,11,33,44,33,24,11,11};
    unordered_set<int> us4 = {1,2,4,3,4,4,3,5,3,6,2,1};

    cout << "First Unordered Set: " << endl;
    for(auto it: us3){
        cout << it << " ";
    }
    cout << endl;

    cout << "Second Unordered Set: " << endl;

    for(auto it: us4){
        cout << it << " ";
    }
    cout << endl;
    
    // after swap
    us3.swap(us4);
    cout << "-----After Swap-----" << endl;

    cout << "First Unordered Set: " << endl;
    for(auto it: us3){
        cout << it << " ";
    }
    cout << endl;

    cout << "Second Unordered Set: " << endl;

    for(auto it: us4){
        cout << it << " ";
    }
    cout << endl;    

    return 0;
}