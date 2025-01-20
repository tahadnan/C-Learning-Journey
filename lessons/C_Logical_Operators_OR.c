#include <stdio.h>

int main(){
    // In C || means or; we don't have or itself as a logical opperator like python

    float temp;
    printf("Enter the temp please: ");
    scanf("%f", &temp);

    if (temp >= 0 || temp <= 25){
        printf("The weather is good buddy\n");
    }
    else {
        printf("The weather is catastrophic 💀\n");
    }

    return 0;    
}