#include <stdio.h>

int main(void) {
    int x = 0;

int number;

do
{
    printf("Enter a positive number: ");
    scanf("%d", &number);
}
while (number <= 0);

    return 0;
}