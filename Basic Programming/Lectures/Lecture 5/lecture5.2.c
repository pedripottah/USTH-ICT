#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    int first_item = array[1];
    int item_before_the_first = array[8]; /* random garbage number */

    printf("The item in the array is: %d\n", first_item);
    printf("The item before the first is: %d\n", item_before_the_first); 

    return 0;
}