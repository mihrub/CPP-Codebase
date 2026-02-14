#include <iostream>
#include <climits>
using namespace std;
int main(){

    int n;
    cout << "Size : ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    // print array
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    int min_num = INT_MAX;
    int max_num = INT_MIN;

    for (int i = 0; i < n; i++){
        min_num = min(min_num, array[i]);
        max_num = max(max_num, array[i]);
    }
    cout << max_num << " " << min_num << endl;

    return 0;
}