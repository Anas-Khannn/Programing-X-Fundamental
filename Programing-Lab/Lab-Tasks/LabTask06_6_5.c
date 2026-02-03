#include <stdio.h>

int main() {
    int number, i = 2, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1) {
        printf("Neither prime nor composite.\n");
        return 0;
    }

    while(i <= number / 2) {
        if(number % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime)
        printf("%d is a Prime number.\n", number);
    else
        printf("%d is a Composite number.\n", number);

    return 0;
}
