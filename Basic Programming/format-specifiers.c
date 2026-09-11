#include <stdio.h>

int main() {
    int age = 18;
    float price = 26.27;
    double bignumber = 39.219321312;
    char letter = 'A';
    char name[] = "Nguyen Van A";

    printf("%d \n", age);
    printf("%.2f \n", price);
    printf("%.3lf \n", bignumber);
    printf("%c \n", letter);
    printf("%s \n", name);

//-----------------------------------------//

    // width & precision

    int uno = 1;
    int dos = 10;
    int tres = -100;

    float eins = 1.1999;
    float zwei = 10.1999;
    float drei = -100.1999;

    printf("%+05d \n", uno); // +5 digits from left, 0 fills in spaces.
    printf("%+5d \n", dos); // +5 digits from left
    printf("%+5d \n", tres); // +5 digits from left

    printf("%+010.2f \n", eins); // 10 = +10 digits from left, .2 = 2 digits after decimal, 0 fils in spaces.
    printf("%+10.2f \n", zwei); // 10 = +10 digits from left, .2 = 2 digits after decimal
    printf("%+10.2f \n \n", drei); // 10 = +10 digits from left, .2 = 2 digits after decimal
}