#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

    cout << "******************* Five Digit Verification Code *******************\n";

    srand(time(NULL));

    char ch;
    
    do{
        int sum = 0;

        for(int i = 0; i<5; i++){
            sum += rand() % 90000 + 10000;
        }
    
        int a = sum;
        int count = 0;
        while(a){
            a/=10;
            count++;
        }
    
        if(count > 5){
            cout<< "Vefication Code : " << sum / (10*(count-5)) << endl;
        }
    
        else{
            cout<< "Vefication Code : " << sum << endl;
        }
    
        cout << "Do Not Share your OTP with others." << endl;
        cout << endl;
        cout << "Do You Want Another?(y/n)" << endl;
        cin >> ch;

    }while(ch == 'y' || ch == 'Y');

}