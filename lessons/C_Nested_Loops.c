#include <stdio.h>

int main(){
    int rows;
    int columns;
    char symbol;

    printf("Enter num of rows:\n");
    scanf("%d", &rows);

    printf("Enter num of columns:\n");
    scanf("%d", &columns);

    while (getchar() != '\n');

    printf("Enter a symbol to use:\n");
    scanf("%c", &symbol);

    for (int idx = 1; idx <= rows; idx++) {
        for (int jdx = 1; jdx <= columns; jdx++){
            if (idx == 1 || idx == rows || jdx == 1 || jdx == columns){
                printf("%c", symbol);
            }
        }
        printf("\n");
    }

    return 0;
}