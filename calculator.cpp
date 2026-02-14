#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  cout << "**********CALCULATOR********** \n";

  char symbol;

  cout << "Enter any Symbol ('+','-','*','/','%'): ";
  cin >> symbol;

  double num1, num2, result;

  cout << "Enter 1st Number: ";
  cin >> num1;

  cout << "Enter 2nd Number: ";
  cin >> num2;

  switch (symbol)
  {

  case '+':
    result = num1 + num2;
    cout << "Answer : " << result << '\n';
    break;

  case '-':
    result = num1 - num2;
    cout << "Answer : " << result << '\n';
    break;

  case '*':
    result = num1 * num2;
    cout << "Answer : " << result << '\n';
    break;

  case '/':
    result = num1 / num2;
    cout << "Answer : " << result << '\n';
    break;

  case '%':
    result = int(num1) % int(num2);
    cout << "Answer : " << result << '\n';
    break;

  default:
    cout << "That was not a valid operator.";
    break;

  }

  cout << "************************************* \n";

  return 0;
}