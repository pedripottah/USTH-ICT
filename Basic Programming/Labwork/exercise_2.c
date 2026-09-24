#include <stdio.h>
#include <string.h>

int main() {
    
    int age = 12;
    float GPA = 2.34;
    double random = 223.2821;
    char Grade = 'A';
    char name[30] = "";
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nHello USTH World\n");
    printf("Name: %s\n", name);

    printf("Vertical return\v");
    printf("Horizontal tab\t\n");
    printf("Backspace\b\n");
    printf("Question mark\?\n");
    printf("\"Double quote\"\n");
    printf("\'Single quote\'\n");
    printf("\\Backslash\\\n");

    return 0;
}