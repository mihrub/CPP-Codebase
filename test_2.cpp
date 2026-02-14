#include <iostream>
int main(){
    
    int x = 7, y = 17;

    printf("(1) %d ; %d ; \n", x % y, y % x);  // 7 ; 3 ;
    printf("(2) %d\n", (x / y) != 0);          // 0
    printf("(3) %c \n", (x <= y) ? 'Y' : 'N'); // Y
    printf("(4) %d \n", (x >= y) || (y > -1)); // 1
    y += x - (y % x);
    printf("(5) %d\n", y); // 21

    return 0;
}