#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
using namespace std;
int main(){

    // Queue (FIFO - First in, First Out)
      
    queue<int> q; // Initialize a queue

    // Push elements into the queue (push_back functionality)
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.size() << endl; // returns the size of the queue

    cout << q.empty() << endl; // check if the queue is empty or not returns boolean value

    if(q.empty()){
        cout << "Queue is Empty" << endl;
    }
    else{
        cout << "Queue is not Empty" << endl;
    }

    cout << q.front() << endl; // returns the first element of the queue
    cout << q.back() << endl; // returns the last element of the queue
    
    q.pop();                   // pop elements from the front of the queue

    // printing the elemets of the queue
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}