#include <stdio.h>

int main() {
    int number;

    
    printf("Enter the last two digits of your registration number: ");
    scanf("%d", &number);

    // Check even or odd
    if (number % 2 == 0)
        printf("The number %d is Even.\n", number);
    else
        printf("The number %d is Odd.\n", number);

    return 0;
}
