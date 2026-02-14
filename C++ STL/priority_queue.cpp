#include<iostream>
#include<algorithm>
#include<queue>
#include<functional>
using namespace std;
int main(){

    // A priority queue is a type of queue that arranges elements based on their priority values.

    // Example of Max Heap

    priority_queue<int> pq;

    pq.push(20);
    pq.push(30);
    pq.push(5);

    cout << pq.top() << " ";

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    
    // Example of Min Heap

    priority_queue<int,vector<int>,greater<int>> pqm;

    pqm.push(24);
    pqm.push(-19);
    pqm.push(10);
    pqm.push(-4);
    pqm.push(44);

    pqm.top();

    while(!pqm.empty()){
        cout << pqm.top() << " ";
        pqm.pop();
    }
    cout << endl;

    // Use Case : When we need most largest or most lowest from a sequence of number by each query. 
    // Time Complexity : O(nlogn)
    // If we try array and sort for each query to find the minimum or maximum we will get Time Complexity of : O(n*n logn)
    // In that case Priority Queue is better than Array.

    return 0;
}