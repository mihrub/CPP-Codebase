#include<iostream>
#include<cstring>
using namespace std;
int main(){
      
    long long n;
    cin >> n;

    long long tetra[10000];
    memset(tetra,-1,sizeof(tetra));

    tetra[0] = 0;
    tetra[1] = 1;
    tetra[2] = 1;
    tetra[3] = 2;

    for(int i = 4; i<=n; i++){
        tetra[i] = tetra[i-1] + tetra[i-2]+tetra[i-3]+tetra[i-4];
    }

    for(int i = 0; i<n;i++){
        cout << tetra[i] << " ";
    }
    cout << endl;

    return 0;
}