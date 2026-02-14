#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<map>
#include<sstream>
using namespace std;
int main(){
      
    string s;
    getline(cin,s);    // i love football we love football they love cricket
    stringstream ss(s);
    string word;

    map<string,int> mp;

    while(ss >> word){
        mp[word]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}