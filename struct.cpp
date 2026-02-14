#include<iostream>
#include<fstream>
using namespace std;

// Define a structure
struct Student {
    int id;          // Integer for student ID
    char name[200];   // String for student name
    float marks;     // Float for student marks
};

int main() {

    int n, i;

    // Create and open a text file for writing
    ofstream MyFile("Student_Info.txt");

    // Ask the user how many students they want to enter
    cout << "Enter the number of students: ";
    cin >> n;

    // Declare an array of structures
    struct Student students[n];

    // Input details for each student
    for (i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i+1 << ":\n";
        
        cout << "Enter ID: ";
        cin >> students[i].id;

        cout << "Enter Name: ";
        cin >> students[i].name; // Read string with spaces

        cout << "Enter Marks: ";
        cin >> students[i].marks;
    }

    // Display details of all students
    MyFile << "--- Student Details ---" << endl;
    for (i = 0; i < n; i++) {
        MyFile << "Student " << i+1 << " :\n";
        MyFile << "  ID: " << students[i].id << "\n";
        MyFile << "  Name: " << students[i].name << "\n";
        MyFile << "  Marks: " << students[i].marks << "\n";
    }

    cout << "All the Information Stored in the text file." << endl;

    // close the file
    MyFile.close();
    return 0;
}
