#include <stdio.h>

int main() {
    float uno, dos, tres;
    float min, max;

    printf("Enter the first number: ");
    scanf("%f", &uno);
    printf("Enter the second number: ");
    scanf("%f", &dos);
    printf("Enter the third number: ");
    scanf("%f", &tres);

    /* Suppose uno is max and min */

    min = uno;
    max = uno;

    if (min < dos && min < tres) { min = uno; }
    if (dos < min) { min = dos; }
    if (tres < min) { min = tres; }

    if (max > dos && max > tres) { max = uno; }
    if (dos > max) { max = dos; }
    if (tres > max) { max = tres; }

    printf("Minimum: %.2f\n", min);
    printf("Maximum: %.2f\n", max);

    return 0;
}