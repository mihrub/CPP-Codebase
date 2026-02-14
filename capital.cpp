#include <iostream>
#include <cstring>
using namespace std;

void Upper(string &ch, int n){

    for (int i = 0; i < n; i++){
        char eh = ch[i];
        if (eh >= 'A' && eh <= 'Z')
            continue;
        else
            ch[i] = eh - 'a' + 'A';
    }
}

int main(){

    string ch;
    cin >> ch;
    int size = ch.length();

    Upper(ch, size);

    cout << ch << endl;

    return 0;
}