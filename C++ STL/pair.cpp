#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<utility>
using namespace std;
int main(){
      
    pair<string,int> p;
    // can be initialize by calling make_pair function
    p = make_pair("Tony",123);

    // to access the pair
    cout << p.first << " " << p.second << endl;

    //another way to declare
    pair<string,int> q = {"Sony",456};
    q = {"Pony",234};

    //swaping two pairs
    swap(p,q);
    // p.swap(q);  // this works too

    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;

    //condition check on pair
    pair<int,int> a = {5,3};
    pair<int,int> b;
    b = a;

    if(a == b){
        cout << "YES" << endl;
    }

    b.second = 4;

    if(a == b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    vector<pair<int,int>> v;

    v.push_back({1,2});
    v.push_back({3,4});

    for(int i = 0; i<v.size(); i++){
        cout << v[i].first  << " " << v[i].second << endl;
    }
    // another way
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }

    // sort the pair
    vector<pair<int,int>> vec;
    vec.push_back({3,7});
    vec.push_back({100,7});
    vec.push_back({3,1});
    vec.push_back({4,12});

    sort(vec.begin(),vec.end());

    for(auto it : vec){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}