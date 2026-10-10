#include <stdio.h>

int main() {
    int num;
    enum months {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    printf("Enter month in numeric format: ");
    scanf("%d", &num);

    switch(num) {
        case Jan: 
        case Mar: 
        case May: 
        case Jul: 
        case Aug: 
        case Oct: 
        case Dec:
            printf("31 days\n");
            break;

        case Apr:
        case Jun:
        case Sep:
        case Nov:
            printf("30 days\n");
            break;
        
        case Feb:
            printf("28 or 29 days\n");
            break;

        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
}