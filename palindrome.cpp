#include <iostream>
#include <string>
using namespace std;
int main(){

// A palindrome is a word, sentence, verse, or even number that reads the same backward or forward

    string s;
    cout << "Enter a string: ";
    cin >> s;

    int i = 0, j = s.length() - 1;
    int count = 0;
    bool flag = true;

    while (i < j){
        if (s[i] != s[j]){
            printf("Not Palindrome");
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if (flag == true){
        printf("Palindrome");
    }
    return 0;
}