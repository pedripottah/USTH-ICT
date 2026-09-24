#include <stdio.h>

int main(void) {
    // Simple function to check absolute values and sorted

    int a,b = 0;

    printf("Enter first integer, both positive and negative values are accepted: ");
    scanf("%d", &a);

    printf("\nEnter second integer, both positive and negative values are accepted: ");
    scanf("%d", &b);

    if (a >= 0 && b >= 0) {
        printf("The absolute value of %d is: %d\n", a, a);
        printf("The absolute value of %d is: %d\n", b, b);
    } else if (a <= 0 && b <= 0) {
        printf("The absolute value of %d is: %d\n", 0-a, 0-a);
        printf("The absolute value of %d is: %d\n", 0-b, 0-b); }


//------------------------------------------------------------//

    if (a < b) {
        printf("\nSorted numbers are: %d %d\n", a, b);
    }

    else {
        printf("\nSorted numbers are %d %d\n", b, a);
    }

    return 0;
}