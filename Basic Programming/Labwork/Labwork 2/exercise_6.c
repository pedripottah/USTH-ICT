#include <stdio.h>

int main() {
    int num;
    enum months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    printf("Enter month in numeric format: ");
    scanf("%d", &num);

    switch(num) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            printf("31 days\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        
        case 2:
            printf("28 days\n");
            break;

        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}