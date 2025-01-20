#include <stdio.h>


/*
    while loop <=> checks a condition, THEN executes a block of code IF condition is true

    do while loop <=> always executes a block of code once, THEN checks a condition
*/
int main(){
    int num = 0;
    int sum = 0;

    do{
        printf("Enter a num above 0\n");
        scanf("%d", &num);

        if (num > 0){
            sum += num;
        }
        else {
            printf("Invalid num\n");
        }
    }while (num > 0);

    printf("sum = %d\n", sum);
    return 0;
}