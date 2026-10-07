#include <stdio.h>

int main() {
    /* PRINT OUT A MATRIX */

    int matrix [3] [3] = { {3, 4, 5}, 
                           {2, 7, 8} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}