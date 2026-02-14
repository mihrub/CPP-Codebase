#include<iostream>
using namespace std;

int Diagonal_Sum(int matrix [][4],int n){
    int ans = 0;
    for(int i= 0 ; i < n ; i++){
        ans +=  matrix [i][i];
       if( i != n-i-1){
            ans+= matrix[i][n-i-1];
       } 
    }
    return ans;
}

int main(){

    int matrix [4][4] = { { 1 , 2 , 3 , 4},
                          { 5 , 6 , 7 , 8 },
                          { 9 , 10 , 11 , 12 },
                          { 13 , 14 , 15 , 16 }
    };

    cout << Diagonal_Sum(matrix,4);

    return 0;
}