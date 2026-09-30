#include <stdio.h>

/* ADDITION FUNCTION */
int addition(int num1, int num2) {
    int sum;
    sum = num1 + num2;

    return sum;
}

int main() {
    int var1, var2;
    int result;

    printf("Enter value for num1: ");
    scanf("%d", &var1);
    printf("\nEnter value for num2: ");
    scanf("%d", &var2);

    result = addition(var1, var2);

    printf("\nThe result of %d+%d is %d\n\n", var1, var2, result);

    return 0;
}