#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> vec2 (5,-1);
//size = 5 , initilization with -1

for(int i = 0 ; i<vec2.size() ;i++){
    cout << vec2[i] <<" ";
}

    cout << endl;

vector<int>vec1 = {1,2,3,4,5};
cout << vec1.size()<< '\n';
cout << vec1.capacity()<< endl;
vec1.push_back(6);
vec1.pop_back();
cout << vec1.size()<< '\n';
cout << vec1.capacity()<< endl;
for(int t : vec1){
    cout << t << " ";
}      
}