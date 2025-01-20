#include <stdio.h>

int main(){
    // In C && means and; we don't have and itself as a logical opperator like python
    
    float temp;
    printf("Enter the temp please: ");
    scanf("%f", &temp);

    if (temp >= 0 && temp <= 25){
        printf("The weather is good buddy\n");
    }
    else if (temp > 25 && temp < 40) {
        printf("The weather is hot\n");
    }
    else {
        printf("The weather is catastrophic 💀\n");
    }

    return 0;
}