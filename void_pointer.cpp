#include<iostream>
using namespace std; 

void print_number(int *numptr){
    cout << *numptr << endl;
} 

void print_char(char *charptr){
    cout << *charptr << endl;
}
// void pointer 

    void print (void *ptr , char type){
        switch(type){
            case 'i':
                cout << *((int*)ptr) << endl;
                break;
            case 'c': 
                cout << *((char*)ptr)<< endl;
                break;   
        }
    }

int main(){

    int number = 8;
    char letter = 'a';
    
    // using pointer for each datatype
    print_number(&number);
    print_char(&letter);

    // making it universal to use all datatype
    print(&number ,'i');
    print(&letter , 'c');

}