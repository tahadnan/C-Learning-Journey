#include <stdio.h>
#include <stdbool.h>

int main(){
    // In C ! means 'not' ; we don't have 'not' itself as a logical opperator like python

    bool sunny = false;

    if (!sunny) {
        printf("It's cloudy outside\n");
    }
    else {
        printf("It's sunny outside\n");
    }
    
    return 0;
}