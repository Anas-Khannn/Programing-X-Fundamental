#include <stdio.h>

int main() {


    int number;
     int num_1 = 5;
     int num_2 = 7;
    int num_3 = 11;


    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number % 5 == 0) && (number % 7 == 0) && (number % 11 != 0)) {
        printf("The number %d is a Number Divisible by both 5 and 7 and not on 11.\n", number);
    } else {
        printf("The number %d does not satisfy all conditions.\n", number);
    }

    return 0;
}
