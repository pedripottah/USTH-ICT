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

    if (min < dos && min < tres) {
        printf("Minimum is %.2f\n", uno);
    }
    else if (min > dos) {
        printf("Minimum is %.2f\n", dos);
    }
    else if (min > tres) {
        printf("Minimum is %.2f\n", tres);
    }


    if (max > dos && max > tres) {
        printf("Maximum is %.2f\n", uno); 
    }
    else if (max < dos) {
        printf("Maximum is %.2f\n", dos);
    }
    else if (max < tres) {
        printf("Maximum is %.2f\n", tres);
    }

    return 0;
}