# include <stdio.h>

int main(){

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double (long float)
    // %d = integer

    // %.1 = decimal precision
    // %1 =
    // %- =

    float item1_price = 5.75;
    float item2_price = 15.00;
    float item3_price = 69.99;

    printf("Item1: $%10.2f\nItem2: $%10.2f\nItem3: $%10.2f\n", item1_price, item2_price, item3_price);
}