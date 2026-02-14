/*

You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), 
and English marks (eng_marks).

Your task is to sort the students data according to the eng_marks in descending order. If multiple student have the same eng_marks then
sort them according to the math_marks in descending order. If multiple student have the same math_marks then sort them
accoding to the id in ascending order as the id will be unique.

*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Student{
public:
    string nm;
    int cls;
    char s;
    int id;
    float math_marks;
    float eng_marks; 
    float total;
};

void print(class Student s1[], int n){
    for(int i = 0; i<n; i++){
        cout << s1[i].nm << " " << s1[i].cls << " " << s1[i].s << " " << s1[i].id << " " << s1[i].math_marks << " " << s1[i].eng_marks <<  endl;
    }
}

bool compare(class Student l, class Student r){

    if(l.eng_marks == r.eng_marks){
        if(l.math_marks == r.math_marks)
            return l.id < r.id;
        else    
            return l.math_marks > r.math_marks;    
    }

    else    
        return l.eng_marks > r.eng_marks;

}

int main() {
    
    int n;
    cin >> n;
    
    Student s1[n];
    
    for(int i = 0 ; i<n ; i++){

    string nm;
    int cls;
    char s;
    int id;
    float math_marks;
    float eng_marks; 

    cin >> nm >> cls;
    cin.ignore();
    cin >> s >> id >> math_marks >> eng_marks;
    
    s1[i].nm = nm;
    s1[i].cls = cls;
    s1[i].id = id;
    s1[i].s = s;
    s1[i].math_marks = math_marks;
    s1[i].eng_marks = eng_marks;
    s1[i].total = math_marks + eng_marks;

    }

    sort(s1,s1+n,compare);

    print(s1,n);
    
    return 0;
}