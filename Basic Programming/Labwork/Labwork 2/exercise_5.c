#include <stdio.h>

int main() {
    float a,b,c,d,e,f;
    float x_solution;
    float y_solution;

    printf("ax+by=c\nEnter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("Enter value for c: ");
    scanf("%f", &c);

    printf("\ndx+ey=f\nEnter value for d: ");
    scanf("%f", &d);
    printf("Enter value for e: ");
    scanf("%f", &e);
    printf("Enter value for f: ");
    scanf("%f", &f);

    if (-1*(a/b) == -1*(d/e) && (c/b) != (f/e)) {
        printf("\nFor %.2fx + %.2fy = %.2f\n", a, b, c);
        printf("For %.2fx + %.2fy = %.2f\n", d, e, f);
        printf("--> No solutions\n");
    }

    else if (-1*(a/b) == -1*(d/e) && (c/b) == (f/e)) {
        printf("\nFor %.2fx + %.2fy = %.2f\n", a, b, c);
        printf("For %.2fx + %.2fy = %.2f\n", d, e, f);
        printf("--> Infinitely many solutions\n");
    }

    else if (((a*e)-(b*d)) != 0) {
        x_solution = ((c*e) - (b*f))/((a*e) - (b*d));
        y_solution = ((a*f) - (c*d))/((a*e) - (b*d));

        printf("\nFor %.2fx + %.2fy = %.2f\n", a, b, c);
        printf("For %.2fx + %.2fy = %.2f\n", d, e, f);
        printf("--> The solution to the system of equations is: (%.2f, %.2f)\n", x_solution, y_solution);
    }

    return 0;
}