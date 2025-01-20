#include <stdio.h>
#include <string.h>


int main(){

    char names[][10] = {"Taha", "Yasser", "Adnan"};

    strcpy(names[1], "Khalil");

    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i ++) {
        printf("%s\n", names[i]);
    }

    return 0;
}