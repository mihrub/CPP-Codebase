#include <bits/stdc++.h>
using namespace std;

string sort_asc(string a){
  sort(a.begin(), a.end());
  return a;
}

string sort_dec(string a){
  sort(a.begin(), a.end(), greater<char>());
  return a;
}

int main(){
  // kaprekar constant = 6174

  string s;
  cout << "Enter a 4-digit number with at least two different digits " << endl;
  cout << "Number : ";
  cin >> s;

  int step = 0;

  while (s != "6174"){
    string ascending = sort_asc(s);
    string decending = sort_dec(s);
    int diff = stoi(decending) - stoi(ascending);
    s = to_string(diff);
    s = string(4 - s.length(), '0') + s;
    step++;
  }

  cout << "Steps: " << step << endl;

  return 0;
}