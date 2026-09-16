#include <stdio.h>

int main() {

    // AN EXAMPLE OF DATA TYPES, OPERATORS, AND FORMAT SPECIFIERS COMBINED

    const float Revenue_Per_150 = 4.5f;
    short JanSold = 23500;
    short FebSold = 19300;
    short MarSold = 21600;
    float RevQuarter = 0.0f;
    float QuarterSold = JanSold + FebSold + MarSold;

    /* Output monthly sales and total for the quarter */
    printf("\nStock sold in\n Jan: %d\n Feb: %d\n Mar: %d", JanSold, FebSold, MarSold);
    printf("\nTotal stock sold in first quarter: %.0f", QuarterSold);

    /* Calculate the total revenue for the quarter and output it */
    RevQuarter = QuarterSold/150 * Revenue_Per_150;
    printf("\nSales revenue this quarter is: $%.2f\n", RevQuarter);


    // AN EXAMPLE OF ENUMARION (enum) - A DATA TYPE TO DEFINE A LIST OF KEY WORDS

    enum DayInWeek {Sun = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum DayInWeek today = Wednesday;
    enum DayInWeek tomorrow = today + 1;

    printf("\n-------------------------------------------\n");
    printf("\n Hello, today is %d! and tomorrow is %d\n", today, tomorrow);


    // AN EXAMPLE OF RELATIONAL OPERATORS

    int a = 22;
    int b = 11;

    printf("\n-------------------------------------------\n");
    printf("\nValue of a == b is %d\n", a==b);
    printf("Value of a != b is %d\n", a!=b);
    printf("Value of a >= b is %d\n", a>=b);    
    printf("Value of a < b is %d\n", a<b);

    return 0;
    

    // AN EXAMPLE OF LOGICAL OPERATORS
    
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 || number <= 20) {
        printf("The number is in the range of 10 to 20");
    } else {
        printf("The number is outside the range!");
    }

}