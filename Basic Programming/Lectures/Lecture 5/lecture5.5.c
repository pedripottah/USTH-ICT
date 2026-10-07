#include <stdio.h>

int main() {
    int list[5] = {2, 4, 6, 1, 4};
    float average;

    for (int i = 0; i<5; i++) {
        printf("%d\n", list[i]);
        average += list[i];
    }

    printf("The average of the list is %.2f\n", average / 5);

    return 0;
}