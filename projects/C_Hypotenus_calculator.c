# include <stdio.h>
#include <math.h>

/*
The formula to find the hypotenuse of a right triangle is derived from the Pythagorean theorem, which states that the square of the hypotenuse (c) is equal to the sum of the squares of the other two sides (a and b): c=a2+b2
​. This means you can calculate the hypotenuse by taking the square root of the sum of the squares of the two legs.
*/


int main(){
    double side_a;
    double side_b;

    printf("Enter the measure of the first side: ");
    scanf("%lf", &side_a);

    printf("Enter the measure of the second side: ");
    scanf("%lf", &side_b);

    double hypotenus = sqrt(pow(side_a, 2) + pow(side_b, 2));

    printf("The hypotenus = %.2lf", hypotenus);

    return 0;
}