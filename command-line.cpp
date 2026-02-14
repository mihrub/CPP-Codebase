#include<iostream>
using namespace std;
int main(int argc , char argv[]){

    cout << "Program name is : " << argv[0] << endl;
    cout << "Number of Argument Passed : " << argc << endl;

    for(int i = 0; i<argc; i++){
        cout <<"Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}