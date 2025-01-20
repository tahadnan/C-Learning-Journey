#include <stdio.h>

int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are old enough!\n");
    }
    else if (age == 0){
        printf("You can'y sign up you were just born ( ◺˰◿ )\n");
    }
    else if (age < 18){
        printf("Age cannot be below 0! (¬`‸´¬)\n");
    }
    else{
        printf("You are too young to sign up : (\n");
    }


    return 0;
}