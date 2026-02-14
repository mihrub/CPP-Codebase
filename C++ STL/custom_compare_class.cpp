#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<functional>
using namespace std;

class Student{
public:
    string name;
    int roll;
    double marks;
    Student(string name, int roll, double marks){
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }    
};

class Compare{
public:
    bool operator()(Student l, Student r){    // operator is a reserved keyword so syntax must be exactly same.
        if(l.marks < r.marks){                // Opposite of sort comparator function.
            return true;
        }
        else if(l.marks > r.marks){
            return false;
        }
        else{
            return l.roll > r.roll;
        }
    }    
};

int main(){
      
    int n;
    cin >> n;

    // In sort a custom compare function is used, But in priority queue a custom compare class is used.

    priority_queue<Student,vector<Student>,Compare> pq;   // Comapre Class is used. It is not a Function.

    for(int i = 0; i<n; i++){
        string name;
        int roll;
        double marks;
        cin >> name >> roll >> marks;

        // Creating a obejct then push it to priority queue

        // Student s1(name,roll,marks);
        // pq.push(s1);

        // This just works fine. Without Creating an object of Student Class.

        pq.push(Student(name,roll,marks));

    }

    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}