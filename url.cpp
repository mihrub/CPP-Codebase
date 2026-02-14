// URL = http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main(){
      
    string s;
    cin >> s;

    int index = s.find("username");
    index += 9;

    string username;
    while(s[index] != '&'){
        username += s[index++];
    }
    index += 5;

    string pwd;
    while(s[index] != '&'){
        pwd += s[index++];
    }
    index += 9;

    string profile;
    while(s[index] != '&'){
        profile += s[index++];
    }
    index += 6;

    string role;
    while(s[index] != '&'){
        role += s[index++];
    }
    index += 5;

    string key;
    while(index != s.length()){
        key += s[index++];
    }

    cout << "username: " << username << endl;
    cout << "pwd: " << pwd << endl;
    cout << "profile: " << profile << endl;
    cout << "role: " << role << endl;
    cout << "key: " << key << endl;
    return 0;
}