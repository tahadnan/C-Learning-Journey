# include <stdio.h>
# include <string.h>

int main(){
    int age;
    char name[25];

    printf("What is your name? ");
    fgets(name, 25, stdin); // for input with whitespaces includes the new line character
    name[strlen(name)-1] = '\0'; // to get rid of the new line character

    printf("What is your age? ");
    scanf("%d", &age);

    printf("You are %d years old\n", age);
    printf("Your name is %s\n", name);
    // printf("Age var mem address: %p\n",&age);

    return 0;
}