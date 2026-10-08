#include <stdio.h>
#include <math.h>

int main(void) {
    
    double a, b, c;
    double function;

    printf("Enter value for a: ");
    scanf("%lf", &a);

    printf("Enter value for b: ");
    scanf("%lf", &b);

    printf("Enter value for c: ");
    scanf("%lf", &c);

    function = 3*a - (b*b*b) - 2*sqrt(c);

    printf("The result of the function is: %lf", function);

    return 0;
}