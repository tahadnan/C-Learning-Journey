#include <stddef.h>
#include <stdio.h>

// array <=> A data structure that can store values of the SAME data type
/*
    SYNTAX:
        values_data_type array_name = {array_value_1,array_value_2, ..., array_value_n};

    MANIPULATING:
        array_name[n] accessing the n array item
*/

// 2D Array <=> an array where each element is a whole array


int main(){
    double marks[] = {20,19,17.75,9.25,18.5};

    char grades[5] = {'A','B', 'C', 'D', 'F'};

    // for (int i = 0; i <= sizeof(marks) / sizeof(double); i ++) {
    //     printf("%lf\n",marks[i]);
    // }


    int twodemensions_array[3][3]= {
                                    {69,69,69},
                                    {87,87,87},
                                    {97,97,97}
                                    };

    int foo_array[3][3];

    for (size_t i = 0 ; i < sizeof(foo_array) / sizeof(foo_array[0]) ; i ++) {
        for (size_t j = 0; j < sizeof(foo_array[0]) / sizeof(int) ; j ++) {
            if (i == 0) {
                foo_array[i][j] = 69;
            }
            else if (i == 1) {
                foo_array[i][j] = 87;
            }
            else {
                foo_array[i][j] = 97;
            }
        }
    
    }
    
    for (int i = 0 ; i < 3; i ++) {
        for (int j = 0; j < 3; j ++) {
            printf("At row %d Column %d:\ntwodemensions_array[%d][%d] = %d and foo_array[%d][%d] = %d\n", i, j, i, j, twodemensions_array[i][j], i, j, foo_array[i][j]);
        }
    }



    return 0;
}