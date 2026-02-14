#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){

// Multiset is an associative container similar to a set, but it can store multiple elements with the same value. 
// It is sorted in increasing order by default, but it can be changed to any desired order using a custom comparator.

    multiset<int> ms; // multiset declaration

    // inserting values in the multiset
    ms.insert(1);
    ms.insert(100);
    ms.insert(-12);
    ms.insert(10);
    ms.insert(1);
    ms.insert(100);

    // printing a multiset
    for(auto it : ms){
        cout << it << " ";
    }
    cout << endl;

    // dereferencing beginning iterator
    cout << *ms.begin() << endl;

    // dereferencing ending iterator
    cout << *(--ms.end()) << endl;

    // Find an element - returns a iterator, if not found then pointing to end iterator
    if(ms.find(10) != ms.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    // Number of occurence of an element 
    cout << ms.count(1) << endl;
    cout << ms.count(55) << endl; // if element not found then it returns 0.

    // erase all the element
    ms.clear();

    if(ms.empty()){
        cout << "Multiset is Empty" << endl;
    }
    else{
        cout << "Multiset is not Empty" << endl;
    }
    
    multiset<int> ms1 = {10,1,3,5,3,1,3,4,3,4,10,9};

    // Delete all occurrences of 3
    ms1.erase(3);

    for(auto it : ms1){
        cout << it << " ";
    }
    cout << endl;

    // to remove one occurance
    ms1.erase(ms1.find(10));
    for(auto it: ms1){
        cout << it << " ";
    }
    cout << endl;

    // remove an element with an iterator
    auto itr = ms1.begin();
    advance(itr,2);
    ms1.erase(itr);

    for (auto it: ms1) {
        cout << it << " ";
    }
    cout << "\n";

    // upper_bound - Iterator pointing to the first element greater than key, or end().

    if(ms1.upper_bound(1) == ms.end()){
        cout << "Element not Found" << endl;
    }
    else{
        cout << *ms1.upper_bound(1) << endl;
    }

    // lower_bound - Iterator pointing to first element equal to or greater than key, or end().

    if(ms1.lower_bound(5) == ms.end()){
        cout << "Element not Found" << endl;
    }
    else{
        cout << *ms1.lower_bound(5) << endl;
    }

    // Declaration with descending order
    multiset<int,greater<int>> ms2 = {1,2,3,4,4,5,4,5,5,5};

    for(auto it : ms2){
        cout << it << " ";
    }
    cout << endl;

    multiset<int> ms3 = {10,12,33,54,35,11,33,44,33,24,11,11};
    multiset<int> ms4 = {1,2,4,3,4,4,3,5,3,6,2,1};

    cout << "First Multiset: " << endl;
    for(auto it: ms3){
        cout << it << " ";
    }
    cout << endl;

    cout << "Second Multiset: " << endl;

    for(auto it: ms4){
        cout << it << " ";
    }
    cout << endl;

    // after swap
    ms3.swap(ms4);
    cout << "-----After Swap-----" << endl;

    cout << "First Multiset: " << endl;
    for(auto it: ms3){
        cout << it << " ";
    }
    cout << endl;

    cout << "Second Multiset: " << endl;

    for(auto it: ms4){
        cout << it << " ";
    }
    cout << endl;    

    return 0;
}