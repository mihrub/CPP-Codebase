#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "Enter Index: ";
    cin >> i;

    try{
        if(i < 0 || i >= 5) {
            if(i < 0) {
                throw i;
            } 
            else if (i >= 5 && i <= 10){
                throw string("Out of Range Error");
            } 
            else{
                throw;
            }
        }
        cout << "ax[" << i << "] = " << ax[i] << endl;
    }
    catch(int x){
        cout << "Exception caught: Invalid index value = " << x << endl;
    }
    catch(string s){
        cout << "Exception caught: " << s << endl;
    }
    catch(...){
        cout << "Exception caught: Unknown error!" << endl;
    }

    return 0;
}