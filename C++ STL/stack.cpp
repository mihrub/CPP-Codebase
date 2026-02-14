#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){

    // Stack (LIFO - Last in, First Out)

    stack<int> s;    // stack declaration

    // push element at the top
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // stack size
    cout << s.size() << endl;

    // pop element from the top
    s.pop();

    // returns the value of top element
    cout << s.top() << endl;
    
    // returns boolean value if stack empty returns true else false
    if(s.empty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }

    // printing each element after eleminating the top of the stack
    while(!(s.empty())){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}