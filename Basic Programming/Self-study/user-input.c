#include <stdio.h>
#include <string.h>

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

    getchar(); // this fixes the skipping "enter name" problem, and the same as \n.
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // fixes the line spacing shit

    printf("\n%d\n", age);
    printf("%.1f\n", GPA);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}