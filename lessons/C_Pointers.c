#include <stdio.h>

typedef char string[];

void printAge(float *pAge){
    printf("You are %d years old\n", *pAge);
}

int main(){
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc...
    // * = indirection operator (value at address)

    float age = 69;
    float *pAge = &age; // (&) addressof operator to get the memory address of a variable
    string name = "Taha Yasser Adnan";

    string *pName = NULL;
    pName = &name; // Good Practice

    printf("Variable age of type int,\nValue: %f\nMem address: %p\n", age, &age);
    printf("Pointer value: %p\n", pAge);
    printf("The value that the pointer pAge points to: %f\n", *pAge); //derefrencing the pointer
    printf("age variable size = %d\npAge pointer size = %d\n", sizeof(age), sizeof(pAge));

    printAge(pAge);

    return 0;
}
