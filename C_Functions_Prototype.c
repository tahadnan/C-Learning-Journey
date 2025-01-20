#include <stdio.h>

/*
    function prototype
    Is function decleration, without a body {empty}, before main() 
    Ensures that calls to a function are made with the correct args

    Notes:
    Many C compilers DO NOT CHECK for parameter matching
    Missing args will result in unexpected behavior
    A func prototype causes the compiler to flag an error if arguments are missing
*/

void hello(char name[], int age); // func prototype

void hello(char name[], int age){
    printf("Hello %s you are %d years old\n", name, age);
};

int main(){
    hello("Taha Yasser Adnan", 16);
    return 0;
}

