#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
using namespace std;

void display(){
    cout << endl << "** Queue **" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display Front" << endl;
    cout << "4. Display Rear" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your option : " ;    
}

int main(){
    
    queue<int> q;

        while(true){
        display();
        int option;
        cin >> option;

        switch(option){
            case 1:{
                int x;
                cout << "Enter a Value : ";
                cin >> x;
                q.push(x);
                cout << "Element Pushed" << endl;
                break;
            }
            case 2:{
                if(!q.empty()){
                    q.pop();
                    cout << "Element Popped" << endl;
                }
                else{
                    cout << "Queue is Empty" << endl;
                }
                break;
            }
            case 3:{
                if(!q.empty())
                    cout << "Front : " << q.front() << endl;
                else
                    cout << "Queue is Empty" << endl;
                break;
            }
            case 4:{
                if(!q.empty())
                    cout << "Rear : " << q.back() << endl;
                else
                    cout << "Queue is Empty" << endl;
                break; 
            }
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