#include<iostream>
#include<vector>
using namespace std;

//Pair Sum for a sorted array 

vector<int> pair_sum(vector<int>arr,int target){

int start = 0;
int end = arr.size() - 1 ;
int sum ;
vector<int> ans;

while(start < end){

    sum = arr[start] + arr[end];

    if(sum == target){
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
    else if(sum < target){
        start++;
    }
    else if(sum > target){
        end--;
    }
}
    return ans;
}

int main(){

    vector<int> vec1 = {2,7,11,15};
    int target = 9 ;

   vector<int> result = pair_sum(vec1,target);
    cout << result[0] << ',' << result[1] << endl;

    return 0;
}