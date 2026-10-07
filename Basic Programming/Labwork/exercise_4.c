#include <stdio.h>

int main(void) {
    const double pi = 3.14159265359;
    double radius, area, circumference, circumference2;
    double radius2 = 4.5;

    printf("Enter a radius number: ");
    scanf("%lf", &radius);

    area = pi * (radius * radius);
    circumference = 2 * pi * radius;
    circumference2 = 2 * pi * radius2;
    
    printf("\nArea of the circle is approximately: %.2lf\n", area);
    printf("Circumference of the circle with preassigned radius: %.2f\n", circumference2);
    printf("Circumference of the circle is approximately: %.2lf\n", circumference);

    return 0;
}