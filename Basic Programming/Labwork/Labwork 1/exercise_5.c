#include <stdio.h>

int main(void) {
    const int a = 1;
    const int b = 2;
    const int c = 1;
    float x;
    float polynomial;

    printf("Enter value for x: ");
    scanf("%f", &x);

    polynomial = a*(x*x) + b*x + c;

    printf("The result of the function is: %.2f\n", polynomial);

    return 0;
}