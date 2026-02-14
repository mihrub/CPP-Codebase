#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int sum_of_natural_numbers(int n){
    if (n == 1)
        return 1;
    return n + sum_of_natural_numbers(n - 1);
}

void ascending(int n){
    if (n == 0)
        return;
    ascending(n - 1);
    cout << n << " ";
}

void decending(int n){
    if (n == 0)
        return;
    cout << n << " ";
    decending(n - 1);
}

int fibonacci(int n){
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){

    int n;
    cin >> n;

    cout << factorial(n) << endl;
    cout << sum_of_natural_numbers(n) << endl;

    ascending(n);
    decending(n);

    cout << fibonacci(n) << endl;

    return 0;
}