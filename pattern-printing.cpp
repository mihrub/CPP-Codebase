#include<iostream>
using namespace std;
int main(){
        while(true){

    int c , r ;
    cin>> r >> c;
    if(c==0 && r==0){
        break;
    }
    for(int i = 0 ; i<r ;i++){
        for(int j = 0; j<c ;j++){         
        
        if((i+j)%2==0){
            cout <<"#";
        }
        else{
            cout <<".";
        }
        }
        cout << endl;
    }
    
    cout << endl;
     
    }
    return 0;
}