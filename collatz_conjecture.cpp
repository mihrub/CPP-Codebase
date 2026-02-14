#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){

    long long n;
    cout << "Enter a Number : ";
    cin >> n;

    int steps = 0;

    while(n != 1){
        if(n%2 == 0)
            n/=2;
        else
            n = n*3+1;
        steps++;
    }
    
    cout << "Steps : " << steps << endl;

    return 0;
}