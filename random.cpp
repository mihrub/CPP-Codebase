#include<iostream>
#include<ctime>
using namespace std;
int main(){

    //#random event generator
    
    srand(time(0));
    int n = rand();
   int random_number = (n % 6) + 1 ;
    
    cout << random_number << endl;

    switch(random_number){

        case 1 :
           cout << "Go for a walk in the park" << endl;
           break;
        case 2 :
            cout << "Watch a movie at home" << endl;
            break;
        case 3 :
            cout << "Plan a weekend getaway" << endl;
            break;
        case 4 :
            cout << "Do a home workout or yoga session" << endl;
            break;
        case 5 :
            cout << "Attend a local concert or event"  << endl;
            break;
        case 6 :
            cout << "Call a friend or family member" << endl;
            break;      
        default:
            cout << "Go to Rooftop";
            break;
    }

    return 0;
}