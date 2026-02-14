#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int main(){

    // declaration
    unordered_map<int,string> m;

    m[101] = "IronMan"; // insert in map
    m[112] = "Thor";
    m[131] = "SuperMan";   // Time Complexity - O(1)
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
    for(unordered_map<int,string> :: iterator it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << (*it).second << endl;
    }

    cout << "Size : " << m.size() << endl;

    // find with key
    auto it = m.find(3); // O(1)
    if(it == m.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    // deletes the key pair
    m.erase(110); // O(1)

    // delete with iterator
    m.erase(m.begin()); //O(1)

    for(auto &it : m){
        cout << it.first << " "<< it.second << endl;
    }    

    // clear all the elements
    m.clear();

    // check if the container is empty or not
    if(m.empty()){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }
    
    return 0;
}