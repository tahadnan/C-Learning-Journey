#include <stdio.h>

int main(){
    char opperator;
    double num1;
    double num2;
    double result;

    printf("What are you willing to do (+, -, *, /): ");
    scanf("%c", &opperator);

    switch (opperator) {
        case '+':
            printf("Enter num1: ");
            scanf("%lf",&num1);
            printf("Enter num2: ");
            scanf("%lf",&num2);

            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n",num1, num2, result);
            break;
        case '-':
            printf("Enter num1: ");
            scanf("%lf",&num1);
            printf("Enter num2: ");
            scanf("%lf",&num2);
            
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n",num1, num2, result);
            break;
        case '*':
            printf("Enter num1: ");
            scanf("%lf",&num1);
            printf("Enter num2: ");
            scanf("%lf",&num2);
            
            result = num1 * num2;
            printf("%.2lf x %.2lf = %.2lf\n",num1, num2, result);
            break;
        case '/':
            printf("Enter num1: ");
            scanf("%lf",&num1);
            printf("Enter num2: ");
            scanf("%lf",&num2);
            
            if (num2 == 0){
                printf("Cannot devide by 0!\n");
                break;
            }
            else{
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n",num1, num2, result);
                break;
            }
        default:
            printf("Invalid operator! ");
    }

    return 0;
}