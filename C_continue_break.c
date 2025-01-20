#include <stdio.h>


int main(){
    for (int i = 65; i <= 90; i++){
        if (73 <= i && i <= 78) {
            // I J K L M N won't be printed
            continue;
        }
        printf("%c and lowercase is %c\n",i, i + 32);
    }
    for (int j = 0; j < 100; j ++) {
        if (j == 69) {
            break;
        }
        else{
            printf("%d\n", j);
        }
        // last printed num will be 68  
    }
}