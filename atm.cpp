#include<iostream>
using namespace std;

void UserMenu (){
    cout << "***************MENU***************" << endl ;
    cout <<"1. Balance" << endl ;
    cout << "2. Deposit" << endl ;
    cout << "3. Withdraw" << endl ;
    cout << "4. Exit" << endl ;
    cout << "******************************" << endl ;
}

int main(){

   double balance = 1000;
   double deposit;
   double withdraw ;
   int option ;

   do{
    UserMenu();
    cout << "Option : ";
    cin >> option ;

    cin.clear();    //cin.clear(): Clears the error state that occurs when invalid input is entered.
    cin.ignore();   //cin.ignore(): Skips the invalid input so the next cin can work correctly.
    
    system ("cls");

    switch(option){
        case 1 : cout << "Balance : " << balance << "$" << endl;
                 break;
        case 2 : cout << "Deposit : ";
                 cin >> deposit ;
                 balance += deposit ;
                 break;
        case 3 : cout << "Withdraw ammount : ";          
                 cin >> withdraw;
                 if(withdraw <= balance){
                balance -= withdraw;
                 }
                 else{
                    cout << "Not Enough Money" << endl;
                 }
                break;
        default :
                cout << "Not Valid" << endl;        
    }
        }while(option != 4);

    return 0;
}