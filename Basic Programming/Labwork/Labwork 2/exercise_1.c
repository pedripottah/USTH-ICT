#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    printf("Enter Celsius temperature: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * (1.8)) + 32;

    printf("%.2f°C is equivalent to around %.2f°F\n", celsius, fahrenheit);

    return 0;
}