#include <stdio.h>

int main()
{

    int number[8];
    int highest_number;
    int lowest_number;

    printf("Enter 8 Elements of the Arrray: \n");
    for (int i = 0; i < 8; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    highest_number = number[0];
    lowest_number = number[0];

    for (int i = 0; i < 8; i++)
    {
        if (number[i] > highest_number)
        {
            highest_number = number[i];
        }
        if (number[i] < lowest_number)
        {
            lowest_number = number[i];
        }

       
    }
     printf("\nLargest number: %d\n", highest_number);
       
        printf("Smallest number: %d\n", lowest_number);

    return 0;
}