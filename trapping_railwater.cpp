#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int trap(vector<int> height , int n){

    vector<int> left_max(n);
    vector<int> right_max(n);

    left_max[0] = height[0];
    right_max[n-1] = height[n-1];

    for(int i = 1; i<n ; i++){
        left_max[i] = max(left_max[i-1], height[i-1]);
    }

    for(int i = n-2; i>=0; i--){
        right_max[i] = max(right_max[i+1],height[i+1]);
    }

    int waterTrapped = 0;

    for(int i= 0; i<n; i++){
        int current_water = min(left_max[i],right_max[i]) - height[i];
        if(current_water > 0){
            waterTrapped += current_water;
        }
    }
    return waterTrapped;
}

int main(){
      
    vector <int> height = {4,2,0,6,3,2,5};
    int size = height.size();
    cout << trap(height,size) << endl;

    return 0;
}