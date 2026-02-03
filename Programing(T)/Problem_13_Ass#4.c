#include <stdio.h>

int isPrimeNumber(int number)
{
    int divisor;

    if (number <= 1)
        return 0;

    for (divisor = 2; divisor <= number / 2; divisor++)
        if (number % divisor == 0)
            return 0;

    return 1;
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (isPrimeNumber(number))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
