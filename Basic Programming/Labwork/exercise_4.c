#include <stdio.h>

int main(void) {
    const double pi = 3.14159265359;
    double radius;
    double area;
    double circumference;

    printf("Enter a radius you want: ");
    scanf("%lf", &radius);

    area = pi * (radius * radius);
    circumference = 2 * pi * radius;
    
    printf("\nArea of the circle is approximately: %.2f\n", area);
    printf("Circumference of the circle is approximately: %.2f\n", circumference);

    return 0;
}