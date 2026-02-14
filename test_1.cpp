#include<iostream>
using namespace std;
int main(){

    for(int x = 100; x!=65; x-=5){
        int z = x * x;
        cout << "x = " << x << ", z = " << z << endl;
    }

    for(int x = 0, y = 0; x+y < 10 ; ++x){
        y = getchar();
        y = y - '0';
        cout << y << endl;
    }
    
    return 0;
}