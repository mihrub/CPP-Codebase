#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

void display(){
cout << "**** Main Menu ****" << endl;
cout << "1. Insert" << endl;
cout << "2. Delete" << endl;
cout << "3. Search" << endl;
cout << "4. Display list" << endl;
cout << "5. Exit" << endl;
cout << "Enter your option : " ;
}

void display_insert(){
cout << "**** Insert Sub Menu ****" << endl;
cout << "1. Insert at First" << endl;
cout << "2. Insert at Last" << endl;
cout << "3. Insert Before" << endl;
cout << "4. Insert After" << endl;
cout << "5. Exit" << endl;
cout << "Enter your option : " ;
}

int main(){
      
    vector<int> vec;

    while(true){
    display();
    int option;
    cin >> option;

    bool flag = false;

    switch(option){
        case 1:{
            display_insert();
            int x;
            cin >> x;
            switch(x){
                int a;
                case 1:
                    cin >> a;
                    vec.insert(vec.begin(),a);
                    break;
                case 2:
                    cin >> a;
                    vec.push_back(a);
                    break;
                case 3:{
                    int position;
                    cout << "Position : ";
                    cin >> position;
                    int value;
                    cout << "Value : ";
                    cin >> value;
                    vec.insert(vec.begin() + position, value);
                    break;
                }
                case 4:{   
                    int position;
                    cout << "Position : ";
                    cin >> position;
                    int value;
                    cout << "Value : ";
                    cin >> value;
                    vec.insert(vec.begin() + position-1, value);   
                    break;
                }
                case 5:{
                    cout << "Exiting....." << endl;
                    break;
                }
                default:
                    cout << "Please Enter Carefully" << endl;
            }
            break;
        }
        case 2:
            vec.pop_back();
            break;
        case 3:{
            int b;
            cin >> b;
            auto search = find(vec.begin(),vec.end(),b);

            if(search != vec.end()){
                cout << "Found" << endl;
            }
            else{
                cout << "Not Found" << endl;
            }
            break;
        }
        case 4:{
            for(int z : vec){
                cout << z << " ";
            }    
            cout << endl;
            break;
        }
        case 5:
            flag = true;
            cout << "Exiting...." << endl;
            break;   
        default:
            cout << "Please Enter Carefully" << endl;
    }

    if(flag){
        break;
    }
}
    return 0;
}