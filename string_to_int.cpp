#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int string_to_int(string a){
    int ans = 0;
    for(int i = 0; i<a.length(); i++){
        ans += ((a[i] - '0') * pow(10,a.length()-1-i));
    }
    return ans;
}

int main(){

    string a;
    cin >> a;
    cout << string_to_int(a) << endl;
    
    return 0;
}