#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main(){

    list<int> myList(5);        // Constructs a list with N elements and the value will be garbage.
    list<int> myList2(5,10);    // Constructs a list with N elements and the value will be V.
    list<int> myList3(myList);  // Constructs a list by copying another list list2.

    int arr[5];
    list<int> myList4(arr,arr+5);  //Constructs a list by copying all elements from an array A of size N

    vector<int> v = {1,2,3,4,5};
    list<int> myList5(v.begin(),v.end());  // Construct a list by copying all elements from a vector v.

    
    list<int> ll;               // List Declaration
    list<int> :: iterator p,q;  // Declaration of List iterator instead use 'auto' keyword

    // Push element at the end
    ll.push_back(4);
    ll.push_back(5);

    // Push element beginning of the list
    ll.push_front(1);
    ll.push_front(2);

    // Removes the starting element of the list
    ll.pop_front();

    //Removes the ending element of the list
    ll.pop_back();

    cout << ll.front() << endl; // first element of the list
    cout << ll.back() << endl; // last element of the list

    // Access the ith element O(n)
    cout << *(next(ll.begin(),2)) << endl; // it returns the iterator

    // Insert in ll
    ll.insert(next(ll.begin(),2),100); // insert at position 2
    list<int> l2 = {1,2,3,4};
    ll.insert(next(ll.begin(),2),l2.begin(),l2.end()); // inserts the l2 list in ll

    // Delete elements
    ll.erase(next(ll.begin(),3)); // Delete a single value or a specific position
    ll.erase(next(ll.begin(),2),next(ll.begin(),4)); // Delete a range of values

    // Not under List_STL 
    replace(ll.begin(),ll.end(),2,766); // Replace all the value with the specific value

    auto itr = find(ll.begin(),ll.end(),4980); // Returns the iterator
    if(itr == ll.end()){
        cout << "Not Found" << endl; // If not found the iterator goes to the end of list
    }
    else{
        cout << "Found" << endl;
    }

    // Remove elements (with value)
    ll.remove(20);     // Remove the value V from the list
    

    // print List
    for(auto it : ll){
        cout << it << " ";
    }

    cout << ll.size() << endl; // returns the size of the list

    //sort list
    ll.sort(); // ascending order
    ll.sort(greater<int>()); // descending order

    // reverse list
    ll.reverse();

    // unique elements in the list (****List has to sorted*****) otherwise wont work
    ll.unique();

    // check list is empty or not
    cout << ll.empty() << endl; // returns true or false

    // list resize
    ll.resize(10); // Change the size of the list. Assigns the new elements to 0
    ll.resize(12,19); // resizes and assigns new elements to value 19

    ll.clear(); // Clears the list element
    cout << ll.size() << endl;
      
    return 0;
}