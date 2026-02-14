#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<iterator>
using namespace std;
int main(){
      
    vector<int> vec1;
    vec1.push_back(10);
    vec1.push_back(11);
    vec1.push_back(12);
    vec1.push_back(13);     // 10 11 12 13
    
    vector<int> vec2;
    vec2.push_back(20);
    vec2.push_back(21);
    vec2.push_back(22);
    vec2.push_back(23);      // 20 21 22 23

    vec1.swap(vec2);

    //printing elements using iterator
    for(vector<int> :: iterator it = vec1.begin(); it != vec1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //printing elements using iterator
    for(vector<int> :: iterator it = vec2.begin(); it != vec2.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // sort a vector in accending order
    sort(vec1.begin(),vec1.end());
    
    //sort a vector in decending order
    sort(vec2.begin(),vec2.end(),greater<int>());

    //reverse a vector
    reverse(vec1.begin(),vec1.end());

    // find a element in vector
    auto it = find(vec1.begin(),vec1.end(),20); // returns a iterator
    cout << *it << endl;          // so we can not get the index

    //check if the value is present in the vector or not
    auto value = find(vec2.begin(),vec2.end(),12);

    if(value == vec2.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;


    vector<int> v = {1,2,3,1,1,2,2,4,4,5,5,6,20};

    // number of duplicates
    int duplicates = distance(v.begin(),unique(v.begin(),v.end()));
    cout << duplicates << endl;

    sort(v.begin(),v.end());     // first sort to remove duplicates
    v.erase(unique(v.begin(),v.end()),v.end());

    // used range based loop to print the elements
    for(int c :v){
        cout << c << " ";
    }
    
    return 0;
}