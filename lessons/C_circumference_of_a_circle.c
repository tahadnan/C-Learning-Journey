#include <stdio.h>
#include <math.h>

int main(){
    float PI = 3.14;
    double radius; 
    
    printf("Enter the circle radius: ");
    scanf("%lf", &radius);

    double circumference = 2*PI*radius;
    double area = PI*pow(radius, 2);
    printf("The circle circumference = %.2lfcm\nThe circle area = %.2lfcm^2\n", circumference, area);

    return 0;
}