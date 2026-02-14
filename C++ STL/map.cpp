#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main(){

    // key should be unique in map
    // map is sorted in nature
      
    map<int,string> m; // creates a map of key,value pair

    m[101] = "IronMan"; // insert in map
    m[112] = "Thor";
    m[131] = "SuperMan";   // Time Complexity - O(log(n))
    m[110] = "Captain America";

    // insert in map using insert function
    m.insert({3,"Doctor Strange"});  // using curly braces
    m.insert(make_pair(4,"SpiderMan")); // using make_pair

    cout << m[101] << endl; // access the value using key

    // using for each loop
    for(auto &it : m){
        cout << "Key : " << it.first << " -> " << "Value : " << it.second << endl;
    }

    cout << endl;

    // printing map using iterator
    for(map<int,string> :: iterator it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << (*it).second << endl;
    }

    cout << "Size : " << m.size() << endl;

    // find with key
    auto it = m.find(3);
    if(it == m.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    // deletes the key pair
    m.erase(110);

    // delete with iterator
    m.erase(m.begin());

    for(auto &it : m){
        cout << it.first << " "<< it.second << endl;
    }

    // Check if a key exist or not
    if(m.count(1000)){          // return a boolean value
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    

    return 0;
}