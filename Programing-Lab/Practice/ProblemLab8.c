#include <stdio.h>

int main()
{
    int number;
    int multiplication_product;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        multiplication_product = number * i;

        printf("%d x %d = %d --> ", number, i, multiplication_product);

        
        switch (multiplication_product > 50 ? 1 : multiplication_product > 10 ? 2  : multiplication_product >= 0   ? 3: 4)
        {

        case 1:
            printf("Large\n");
            break;
        case 2:
            printf("Medium\n");
            break;
        case 3:
            printf("Small\n");
            break;
        case 4:
            printf("Negative\n");
            break;
        default:
            printf("This won't print\n");
            break;
        }
    }
    return 0;
}