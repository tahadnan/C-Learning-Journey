#include <stdio.h>
#include <string.h>

void vars_swap(){
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\ny = %c\n", x, y);
}

void str_swap(){
    char water_glass[] = "water";
    char lemonade_glass[] = "lemonade";
    char temp[20];
    char line_break[] = "************************************************************************************";

    printf("Initial Variables State:\nwater_glass = %s\nlemonade_glass = %s\ntemp = %s", water_glass, lemonade_glass, temp);

    printf("Before copying 'water_glass' to temp \ntemp = %s {'temp' is empty leading to unexpected behavior}\nwater_glass = %s\n", temp, water_glass);
    strcpy(temp, water_glass);
    printf("After copying 'water_glass' to temp \ntemp = %s\nwater_glass = %s\n%s\n", temp, water_glass, line_break);

    printf("Before copying 'lemonade_glass' to 'water_glass' \nwater_glass = %s\nlemonade_glass = %s\n", water_glass, lemonade_glass);
    strcpy(water_glass, lemonade_glass);
    printf("After copying 'lemonade_glass' to 'water_glass' \nwater_glass = %s\nlemonade_glass = %s\n%s\n", water_glass, lemonade_glass, line_break);

    printf("Before copying 'temp' to 'lemonade_glass' \nlemonade_glass = %s\ntemp = %s\n", lemonade_glass, temp);
    strcpy(lemonade_glass, temp);
    printf("After copying 'temp' to 'lemonade_glass' \nlemonade_glass = %s\ntemp = %s\n%s\n", lemonade_glass, temp, line_break);

    printf("Final Variables State:\nwater_glass = %s\nlemonade_glass = %s\ntemp = %s\n", water_glass, lemonade_glass, temp);
}

int main(){
    vars_swap();
    str_swap();

    return 0;
}