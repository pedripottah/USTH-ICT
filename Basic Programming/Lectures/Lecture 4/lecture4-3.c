#include <stdio.h>

/* COUNTDOWN FUNCTION */
void countdown(int input) {
    for (int i=input; i>=0; i--) {
        printf("%d\n", i);
    }
}

int main() {
    int number;

    printf("Input the number: ");
    scanf("%d", &number);

    countdown(number);

    return 0;
}