#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<deque>
#include<list>
using namespace std;
int main(){
      
    deque<int> deq;
    
    deq.push_front(1);
    deq.push_front(2);

    deq.push_back(3);
    deq.push_back(4);

    for(int x: deq){
        cout << x << " ";
    }
    cout << endl;

    cout << "Front : "  << deq.front() << endl;
    cout << "Back : " << deq.back() << endl;

    deq.pop_back();
    deq.pop_front();

    cout << "Front : " << deq.front() << endl;
    cout << "Back : " << deq.back() << endl;

    for(int x: deq){
        cout << x << " ";
    }
    cout << endl;   

    cout << "Size : " << deq.size() << endl;

    deq = {1,2,3,4};

    // begin() iterator -> points to beginning element of the deque container
    cout << "First Value : " << *(deq.begin()) << endl;

    // end() iterator ->  points to the theoretical element just after the last element in a container
    auto it = deq.end();
    --it;
    cout << "Last Value : " <<  *it << endl;
    
    // reverse iterator

    // rbegin() -> it points to the last element of the container
    cout << "Last Value : " << *(deq.rbegin()) << endl;

    // rend() -> points to the theoretical element just before the first element in a container
    auto itr = deq.rend();
    --itr;
    cout << "First Value : " <<  *itr << endl;


    deque<int> deq1 = {1,2,3,4,5};
    deque<int> deq2 = {6,7,8,9,10};

    // swap -> swap between two deque
    deq1.swap(deq2);

    cout << "Deque 1 : ";
    for(int x : deq1){
        cout << x << " ";
    }
    cout << endl;

    cout << "Deque 2 : ";
    for(int x : deq2){
        cout << x << " ";
    }
    cout << endl;

    // insert -> insert into a deque 
    it = deq1.end();
    --it;
    deq1.insert(it,77);
    cout << "Inserted Value : " << *it << endl;

    // erase -> delete a value from a deque
    cout << "Value to Delete : " << *it << endl;
    deq1.erase(it);
    cout << "Last Value : " << *(--deq1.end()) << endl;

    return 0;
}