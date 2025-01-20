#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}

char* AdultMinorCheck(int age){
    return (age >=18) ? "Adult":"Minor";
}
int main(){
    int max = findMax(5000, 5001);
    printf("%d", max);

    return 0;
}