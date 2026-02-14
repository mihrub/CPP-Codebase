#include<iostream>
int main(){

    long long s;
    std:: cout << "Enter Time in Seconds: ";
    std:: cin >> s; 

    double a = (double)s/3600;
    int hour = a;
    int minute = (a-hour)*60;
    int second = s % 60;

    std:: cout << hour << ":" << minute << ":" << second << std:: endl;

    return 0;
}