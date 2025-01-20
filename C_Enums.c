#include <stdio.h>


enum Day{SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7};

typedef enum Day day;

int main(){
    day today;

    printf("What day is it today? ");
    scanf("%d",&today);

    if (today == SUNDAY || today == SATURDAY){
        printf("IT'S THE WEEKEND BABYYYYY\n");
    }   
    else {
        printf("Work time :(\n");
    }

    return 0;
}
