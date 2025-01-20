#include <stdio.h>
#include <math.h>

int main(){

    int a = sqrt(9);
    printf("Square root of 9 using the sqrt() function is %d\n", a);

    int b = pow(2, 4); // syntax (base, power)
    printf("2^4 using the pow() function = %d\n", b);

    float c = 3.944444;
    int rounded_c = round(c);
    int rounded_up_c = ceil(c);
    int floored_c = floor(c);
    double d = -69 ;
    int abs_d = fabs(d);
    short int angle = 45; 
    double cos_angle = cos(angle);
    double sin_angle = sin(angle);
    double tan_angle = tan(angle);

    printf("%f rounded using round() function = %d\nRounded using the ceil() function = %d\nFloored using floor = %d\n", c, rounded_c, rounded_up_c, floored_c);
    printf("|%.0lf| = %d\n", d, abs_d);
    printf("Trigo funcs:\ncos(45)=%5.2lf\nsin(45)=%5.2lf\nsin(45)=%5.2lf\n",cos_angle, sin_angle, tan_angle);
    
    return 0;
}