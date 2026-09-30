#include <stdio.h>

void say_hello(int times) {
    printf("\n");
    for (int i = 0; i<times; i++) {
        printf("%d. ", i+1);
        printf("We are in session #4\n");
        printf("Hello from inside function\n-------------------\n");
    }
}