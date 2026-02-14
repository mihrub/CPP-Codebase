#include<iostream>
#include<string.h>

typedef struct{
    char name[200];
    char number[200];
} people;

int main(){

    people person[3];

    strcpy(person[0].name,"Doe");
    strcpy(person[0].number,"123456789");

    strcpy(person[1].name,"John");
    strcpy(person[1].number,"678900");

    strcpy(person[2].name,"William");
    strcpy(person[2].number,"987172");

    char input[200];
    // fgets(input,200,stdin);
    // input[strcspn(input, "\n")] = 0;

    printf("Name of the Person : ");
    scanf("%s",input);

    for(int i = 0 ; i<3; i++){

        if(strcmp(person[i].name,input) == 0){
            printf("Found\n");
            printf("Phone Number : %s",person[i].number);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}