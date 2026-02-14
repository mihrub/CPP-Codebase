#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<stack>
using namespace std;

void display(){
    cout << endl << "** Stack **" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Display()" << endl;
    cout << "4. Top" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your option : ";    
}

int main(){
      
    stack<int> s;

    while(true){
        display();
        int option;
        cin >> option;

        switch(option){
            case 1:{
                int x;
                cout << "Enter a Value : ";
                cin >> x;
                s.push(x);
                cout << "Element Pushed" << endl;
                break;
            }
            case 2:{
                if(!s.empty()){
                    s.pop();
                    cout << "Element Popped" << endl;
                }
                else{
                    cout << "Stack is Empty" << endl;
                }
                break;
            }
            case 3:{
                stack<int> ss(s);
                while(!ss.empty()){
                    cout << ss.top() << " ";
                    ss.pop();
                }
                cout << endl;
                break;
            }
            case 4:
                if(!s.empty())
                    cout << "Top : " << s.top() << endl;
                else
                    cout << "Stack is Empty" << endl;
                break;
            case 5:
                cout << "Exiting....." << endl;
                exit(0);
                break;
            default:
                cout << "Enter Between (1-5) !" << endl;
        }
    }
    
    return 0;
}