#include <stdio.h>

// switch <=> A more efficient alternative to using many "else if" statements allows a value to be tested for EQUALITY against many cases

int main(){
    char grade;

    printf("Please enter a letter grade: ");
    scanf("%c", &grade);
    
    switch (grade) {
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Heads up, you did good!\n");
            break;
        case 'C':
            printf("Another time maybe!\n");
            break;
        case 'D':
            printf("At least, it's not an F\n");
            break;
        case 'F':
            printf("You FAILED\n");
            break;
        default:
            printf("Please Enter a valid Grade\n");
    }

    return 0;
}