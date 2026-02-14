#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

class Point{
    int ax,ay;
public:
    Point(int x, int y){
        ax = x;
        ay = y;
    }
    void print(){
        cout << ax << " " << ay << endl;
    }
};

int main(){
    
    Point px = Point(3,4);
    px.print();
    
    return 0;
}