#include <iostream>
using namespace std;
int main()
{
    int User_Pin = 1234, PIN, Error_Counter = 0;
    do{
        cout << "PIN : ";
        cin >> PIN;
        if (User_Pin != PIN){
            Error_Counter++;
        }
    } while (User_Pin != PIN && Error_Counter < 3);

    (Error_Counter < 3) ? cout << "Loading" : cout << "Blocked";

    /* if(Error_Counter <3){
         cout << "Loading";
     }
     else{
         cout <<"Blocked";
     } */

    return 0;
}