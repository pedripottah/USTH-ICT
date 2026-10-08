#include <stdio.h>
#include <string.h>

int main() {
    
    int age = 12;
    float GPA = 2.34;
    double random = 223.2821;
    char grade = 'A';
    char name[30] = "";
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nHello USTH World\n");
    printf("Name: %s\n", name);
    printf("The age is: %d\n", age);
    printf("The GPA is: %.2f\n", GPA);
    printf("The random number is: %lf\n", random);
    printf("The grade  is: %c\n", grade);

    printf("\nVertical return\v");
    printf("Horizontal tab\t\n");
    printf("Backspace\b\n");
    printf("Question mark\?\n");
    printf("\"Double quote\"\n");
    printf("\'Single quote\'\n");
    printf("\\Backslash\\\n");

    return 0;
}