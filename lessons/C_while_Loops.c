#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char name[25];

    while (true) {
        printf("What's your name?\t");
        fgets(name, 25, stdin);
        name[strlen(name) -1] = '\0';
        if (strlen(name) == 0) {
            printf("Please enter a valid name\n");
            continue;
        }
        else {
            break;
        }
    }
    printf("Hello %s\n", name);
    return 0;
}