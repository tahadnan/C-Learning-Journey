# include <stdio.h>

int main(){

    int x = 5;
    int y = 2;
    int z = 4;

    int subtraction = x - y;
    int addition = x + y;
    float division = x / (float) y;
    int remainder = z % y; 

    printf("%d - %d = %d\n", x, y, subtraction);
    printf("%d + %d = %d\n", x, y, addition);
    printf("%d / %d = %.2f\n", x, y, division);
    printf("%d mod %d = %d\n", z, y, remainder);
    printf("%d incremented by one gives: ", x);
    x++;
    printf("%d\n",x);

    printf("%d decremented by one gives: ", y);
    y--;
    printf("%d\n",y);

    return 0;
    
}