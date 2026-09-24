#include <stdio.h>
int main()
{
    float number1 = 13.5;
    double number2 = 12.4;

    float a = number1 + number2;

    printf("number1 = %f\n", number1);
    printf("number2 = %lf\n", number2);
    printf("number 1 + number2 = %f\n", a);
    return 0;
}