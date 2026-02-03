#include <stdio.h>

int main() {

    int array[7];
    int sum = 0;   
    float average;

    printf("Enter 7 elements of the array:\n");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];  
    }

    // Even numbers:
    printf("\nEven Numbers Are:\n");
    for (int i = 0; i < 7; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d ", array[i]);
        }
    }

    // Odd numbers:
    printf("\nOdd Numbers Are:\n");
    for (int i = 0; i < 7; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d ", array[i]);
        }
    }

    // Average
    average = sum / 7.0;

    printf("\n\nSum = %d", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}
