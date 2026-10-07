#include <stdio.h>

int main() {
    /* 1-D ARRAY PRINTING OUT 5 VALUES (0, 1, 2, 3, 4)*/

    int A[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i<5; i++) {
        printf("%d\n", i);
    }

    int a = A[1];
    printf("Value of A[0]: %d", a);

    return 0;
}