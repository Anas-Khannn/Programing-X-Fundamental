#include <stdio.h>

int reverseNumber(int number)
{
    int reversedNumber = 0;

    while (number != 0)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }
    return reversedNumber;
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Reverse: %d\n", reverseNumber(number));
    return 0;
}
