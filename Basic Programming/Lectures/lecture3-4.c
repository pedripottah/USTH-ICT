#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i=0; i<=99; i+=2) {
        printf("%d\n", i);
        sum += i;
    }
    
    printf("\nSum of even integers below or equal to 99 is: %d\n\n", sum);

    return 0;
}