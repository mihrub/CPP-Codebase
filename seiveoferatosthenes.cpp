#include<iostream>
using namespace std;

void seiveoferatosthenes(int n){

    bool prime[n+1];

    for(int i = 0; i<=n; i++){
        prime[i] = true;
    }

    for(int p = 2 ; p*p <= n ; p++){
        if(prime[p]){
            for(int i = p*p ; i<=n ; i+=p){
                prime[i] = false;
            }
        }
    }

    cout << "Prime Number up to " << n << " : ";

    for(int i = 2; i<=n; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
    cout << endl;

    // for a particular number

    // if(prime[n]){
    //     cout << "Prime";
    // }
    // else{
    //     cout << "Not Prime";
    // }

}

int main(){

    int n;
    cout << "Enter a Number : ";
    cin >> n;
    seiveoferatosthenes(n);
    
    return 0;
}