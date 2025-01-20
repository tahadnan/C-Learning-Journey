#include <stdio.h>
#include <ctype.h>


int main(){
    char unit;
    float temp;

    printf("Enter the unit please C for Celisius and F for Fahrenheit: ");
    scanf("%c", &unit);

    if (toupper(unit) == 'C'){
        printf("Enter the temp in C: ");
        scanf("%f", &temp);

        // Conversion process
        float C_to_F = temp * 9/5 + 32;
        printf("%.2f in F = %.2f\n", temp, C_to_F);
    }
    else if (toupper(unit) == 'F'){
        printf("Enter the temp in F\n");
        scanf("%f", &temp);

        // Conversion process
        float F_to_C = (temp - 32) * 9/5;
        printf("%.2f in C = %.2f\n", temp, F_to_C);
    } 
    else {
        printf("It's nor C nor F it's %c\n", unit);
    }

    return 0;
}