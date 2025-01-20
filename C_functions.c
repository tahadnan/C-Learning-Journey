#include <stdio.h>

void birthday(char name[], int age){

    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name); 
    printf("Happy Birthday to you!\n");
    printf("You are %d years old!\n\n", age);
}

float square(double x){
    return x * x;
}

int main(){ 
    birthday("Taha",16);
    birthday("Mery",18);
    birthday("Taha",16);
    printf("%.2f", square(2));
    return 0;
}