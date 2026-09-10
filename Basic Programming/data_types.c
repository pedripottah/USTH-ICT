#include <stdio.h>
#include <stdbool.h>

int main() {
    // DATA TYPES

    int age = 18; // whole number, max 4 bytes
    float gpa = 3.5; // decimal number, max 4 bytes
    double pi = 3.14159; // decimal number, max 8 bytes
    char grade = 'A'; // single character, max 1 byte
    char name[] = "Some random text"; // array of characters
    bool isONLINE = 0; // 1 = true, 0 = false

    printf("Hello, World!\n");
    printf("Age: %d\n", age);
    printf("GPA: %.1f\n", gpa);
    printf("Pi: %.2f\n", pi);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    if(isONLINE) {
        printf("You are online!\n");
    }
    else {
        printf("You are offline!\n");
    }

    return 0;
}