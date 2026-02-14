#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int roll;
    double marks;
};

bool compare(Student l , Student r){

    if(l.marks == r.marks)
        return l.roll < r.roll;
    
    else
        return l.marks > r.marks;


// similar

    // return (l.marks == r.marks)? l.roll < r.roll : l.marks > r.marks;
    
}

int main(){

    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i<n ;i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    cout << endl;

    sort(a,a+n,compare);

    for(int i = 0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}