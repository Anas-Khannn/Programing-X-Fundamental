#include <stdio.h>

int main()
{
    int input_number;
    printf("Enter a number: ");
    scanf("%d", &input_number);

    switch (input_number % 2)
    {
    case 0:
        printf("%d is Even.\n", input_number);
        break;
    case 1:
        printf("%d is Odd.\n", input_number);
        break;
    }

    return 0;
}
