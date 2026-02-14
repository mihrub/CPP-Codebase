#include <iostream>
using namespace std;
int main(){
    int x = 10, y = 20;
    if(x++ > 20)
        if(y-- > 20)
            cout << "Branch 1";
        else
            cout << "Branch 2";
    else if(--x == 10)
        cout << "Branch 3";
    else
        cout << "Branch 4";
    cout << "\n the value of x : " << x << " y : " << y << endl;
}