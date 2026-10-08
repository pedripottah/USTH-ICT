#include <stdio.h>

int main() {
   float value1, value2;
   
   printf("Enter the first value: ");
   scanf("%f", &value1);
   printf("Enter the second value: ");
   scanf("%f", &value2);

   value1 = value1+value2;
   value2 = value1-value2;
   value1 = value1-value2;

   printf("\nThe first value is %.2f\n", value1);
   printf("The first value is %.2f\n", value2);

   return 0;
}