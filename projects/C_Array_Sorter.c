#include <stdio.h>
#include <stdbool.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void display_int_array(int array[], int size){
    for (int i = 0; i < size; i++) {
        if (i == 0 || i < size - 1) {
            printf("%d, ", array[i]);
        }
        else {
            printf("%d\n",array[i]);
        }
    }
}

void int_array_sorter(int array[], int size, bool ascending){
    printf("Unsorted array\n");
    display_int_array(array, size);
    for (int i = 0; i < size - 1; i++) {
        printf(ANSI_COLOR_GREEN "i = %d :\n" ANSI_COLOR_RESET, i);

        for (int j = 0; j < size - i - 1; j++) {
            printf(ANSI_COLOR_RED"\tj = %d"ANSI_COLOR_RESET,j);
            if (ascending) {
                    if (array[j] > array [j+1]) {
                        printf("\n\t\t|array[%d]{%d} > array[%d]{%d}\n\t\t|TRUE => SWAP %d and %d\n\t\t|BEFORE SWAPPING: ", j,array[j], j+1,array[j+1], array[j], array[j+1]);
                        display_int_array(array, size);

                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;

                        printf("\n\t\t|AFTER SWAPPING: ");
                        display_int_array(array, size);
                    }
                    else {
                        printf("\n\t\t|array[%d]{%d} > array[%d]{%d}\n\t\t|FALSE => NO SWAP\n\t\t|CURRENT ARRAY STATE:", j,array[j], j+1,array[j+1]);
                        display_int_array(array, size);
                    }
            }
            else {
                    if (array[j] < array [j+1]) {
                        printf("\n\t\t|array[%d]{%d} < array[%d]{%d}\n\t\t|TRUE => SWAP %d and %d\n\t\t|BEFORE SWAPPING: ", j,array[j], j+1,array[j+1], array[j], array[j+1]);
                        display_int_array(array, size);

                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;

                        printf("\n\t\t|AFTER SWAPPING: ");
                        display_int_array(array, size);
                    }
                    else {
                        printf("\n\t\t|array[%d]{%d} < array[%d]{%d}\n\t\t|FALSE => NO SWAP\n\t\t|CURRENT ARRAY STATE:", j,array[j], j+1,array[j+1]);
                        display_int_array(array, size);
                    }
            }

        }
    }
    printf("Sorted array\n");
    display_int_array(array, size);

}

void display_char_array(char array[], int size){
    for (int i = 0; i < size; i++) {
        if (i == 0 || i < size - 1) {
            printf("%c, ", array[i]);
        }
        else {
            printf("%c\n",array[i]);
        }
    }
}

void char_array_sorter(char array[], int size, bool ascending) {
    printf("Unsorted array\n");
    display_char_array(array, size);

    for (int i = 0; i < size - 1; i++) {
        printf(ANSI_COLOR_GREEN "i = %d :\n" ANSI_COLOR_RESET, i);

        for (int j = 0; j < size - i - 1; j++) {
            printf(ANSI_COLOR_RED "\tj = %d" ANSI_COLOR_RESET, j);

            if (ascending) {
                if (array[j] > array[j + 1]) {
                    printf("\n\t\t|array[%d]{'%c'} > array[%d]{'%c'}\n\t\t|TRUE => SWAP '%c' and '%c'\n\t\t|BEFORE SWAPPING: ", 
                           j, array[j], j + 1, array[j + 1], array[j], array[j + 1]);
                    display_char_array(array, size);

                    char temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;

                    printf("\n\t\t|AFTER SWAPPING: ");
                    display_char_array(array, size);
                } else {
                    printf("\n\t\t|array[%d]{'%c'} > array[%d]{'%c'}\n\t\t|FALSE => NO SWAP\n\t\t|CURRENT ARRAY STATE: ", 
                           j, array[j], j + 1, array[j + 1]);
                    display_char_array(array, size);
                }
            } else {
                if (array[j] < array[j + 1]) {
                    printf("\n\t\t|array[%d]{'%c'} < array[%d]{'%c'}\n\t\t|TRUE => SWAP '%c' and '%c'\n\t\t|BEFORE SWAPPING: ", 
                           j, array[j], j + 1, array[j + 1], array[j], array[j + 1]);
                    display_char_array(array, size);

                    char temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;

                    printf("\n\t\t|AFTER SWAPPING: ");
                    display_char_array(array, size);
                } else {
                    printf("\n\t\t|array[%d]{'%c'} < array[%d]{'%c'}\n\t\t|FALSE => NO SWAP\n\t\t|CURRENT ARRAY STATE: ", 
                           j, array[j], j + 1, array[j + 1]);
                    display_char_array(array, size);
                }
            }
        }
    }

    printf("Sorted array\n");
    display_char_array(array, size);
}



int main(){
    int test_array[] = {7, 19, -69, 701, 25};
    int num_array[] = {17, 56, 23, 10, 94, 333, 145, 777, 696};
    char letter_array[] = {'A','D','Q','E','T','X'};
    int size = sizeof(num_array) / sizeof(int);
    int letter_array_size = sizeof(letter_array) / sizeof(char);
    int_array_sorter(test_array, 5, true);
    char_array_sorter(letter_array, letter_array_size, true);

    return 0;
}