#include <stdio.h>

int main(void) {
    enum WD {Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat};
    enum WD d = 0;

    printf("Enter a day in the week (1-7): ");
    scanf("%d", &d);

    switch(d) 
    {
    
    case Sun:
        printf("Today is break day\n");
        break;

    case Mon:
        printf("Today we have Calculus I\n");
        break;

    case 3:
    case 4:
    case 5:
    case Fri:
    case Sat:
        printf("There is nothing here\n");
        break;
    
    default:
        printf("Today is");
    
    }
}