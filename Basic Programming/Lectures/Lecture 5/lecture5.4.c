#include <stdio.h>
#include <string.h>

int main() {
    char subjects[5][20] = {"Hello", "Calculus", "Physics", "Linear Algebra"};
    int size = 4;

    for (int i = 0; i < size; i++) {
        printf("The character #%d is %s\n", i+1, subjects[i]);
    }

    printf("List:");
    for (int j = 0; j < 20; j++) {
        if (subjects[size-1][j] == '\0') // Check for null terminator
            break;
        printf("%c ", subjects[2][j]);
    }

    char student_name[] = "Nguyen Van A";
    char *myPtr = strtok(student_name, " ");
    printf("\nThe family name is %s", myPtr);

    printf("\n");
    while (myPtr != NULL) {
        printf("%s\n", myPtr);
        myPtr = strtok(NULL, " ");
    }

    return 0;
}