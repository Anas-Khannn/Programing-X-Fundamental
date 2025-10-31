#include <stdio.h>

int main()
{
    int given_year;
    printf("Enter a year: ");
    scanf("%d", &given_year);

    if ((given_year % 4 == 0 && given_year % 100 != 0) || (given_year % 400 == 0))
        printf("%d is a leap year.\n", given_year);
    else
        printf("%d is not a leap year.\n", given_year);

    return 0;
}
