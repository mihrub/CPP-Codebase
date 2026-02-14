#include <iostream>
using namespace std;
int main(){

    while(true){

        int r, c;
        cin >> r >> c;
        if(c == 0 && r == 0){
            break;
        }

        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                if(((i == 1) || (i == r)) || ((j == 1) || (j == c))){
                    cout << "#";
                }
                else if(((j > 1) || (j < c)) && ((i != 1) && (i != r))){
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}