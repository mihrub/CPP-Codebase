#include<iostream>
using namespace std;

class Vector{
public:
    int *arr;
    int size;
    int capacity;

    Vector(){
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    void push(int num){
        if(size == capacity){
            capacity*=2;
            int *arr2 = new int[capacity];
            for(int i = 0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = num;
    }

    void print(){
        for(int i = 0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void size_capacity(){
        cout << size << " " << capacity << endl;
    }

    void pop(){
        if(size == 0){
            cout << "Array is Empty\n";
        }
        size--;
    }

    int get(int index){

        if(index >= size && index < 0){
            cout << "Invalid Index\n";
            return -1;
        }
        
        if(size == 0){
            cout << "Array is Empty\n";
            return -1;
        }

        return arr[index];
    }
};

int main(){

    Vector vec;
    vec.push(1);
    vec.print();
    vec.size_capacity();

    vec.push(2);
    vec.print();
    vec.size_capacity();

    vec.push(3);
    vec.print();
    vec.size_capacity();

    vec.push(4);
    vec.print();
    vec.size_capacity();

    vec.push(5);
    vec.print();
    vec.size_capacity();
    
    return 0;
}