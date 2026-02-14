#include<iostream>
using namespace std;

// Function to check spelling
void check_spelling() {
    cout << "Checking spelling..." << endl;
    // Add your actual spell-checking logic here
}

// Function to correct spelling errors
void correct_errors() {
    cout << "Correcting spelling errors..." << endl;
    // Add your actual spell correction logic here
}

// Function to display spelling errors
void display_errors() {
    cout << "Displaying spelling errors..." << endl;
    // Add your actual display error logic here
}

int main(){
        char ch;
        cout << "1. Check Spelling" << endl;
        cout << "2. Correct Spelling Errors" << endl;
        cout << "3. Display Spelling Errors" << endl;
        cout << "Strike any other key to skip "<< endl;
        cout << "Enter Your Choice : ";
    ch = getchar();

    switch(ch){
        case '1':
            check_spelling();
            break;
        case '2':
            correct_errors();
            break;
        case '3':
            display_errors();
            break;
        default :
            cout << "No Option Selected";
        }            

    return 0;
}    
