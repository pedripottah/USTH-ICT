#include <stdio.h>

int main(void) {
    int number = 0;
    int rebmun = 0;

    printf("\nEnter a positive integer: ");
    scanf("%d", &number);

    do {
        number++;
        printf("The current number is %d \n", number);
    }

    while(number < 100); /*Continue while temp>0*/

    return 0;
}