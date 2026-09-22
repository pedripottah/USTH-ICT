#include <stdio.h>

int main() {
    int age = 0;
    float GPA = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &GPA);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n%d\n", age);
    printf("%.1f\n", GPA);
    printf("%c\n", grade);

    return 0;
}