#include <iostream>
#include <cstring>  // For strlen()

using namespace std;

void converge(char *targ, const char *src);  // Function declaration

int main() {
    char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";  // Initialize target

    converge(target, "This is a test of converge().");  // Call converge function
    cout << "Final string: " << target << endl;  // Print final result

    return 0;
}

// Function definition
void converge(char *target, const char *src) {
    int i, j;
    cout << target << endl;  // Print initial state of target string

    // Perform character substitution from both ends of the string
    for (i = 0, j = strlen(src); i <= j; i++, j--) {
        target[i] = src[i];  // Replace from the left side
        target[j] = src[j];  // Replace from the right side
        cout << target << endl;  // Print the target string after each step
    }
}
