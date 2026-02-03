#include <stdio.h>

void countPNZ(int numbers[], int size,
              int *positiveCount, int *negativeCount, int *zeroCount)
{
    int index;
    *positiveCount = *negativeCount = *zeroCount = 0;

    for (index = 0; index < size; index++)
    {
        if (numbers[index] > 0)
            (*positiveCount)++;
        else if (numbers[index] < 0)
            (*negativeCount)++;
        else
            (*zeroCount)++;
    }
}

int main()
{
    int numbers[50], size, positiveCount, negativeCount, zeroCount, index;

    printf("Enter size: ");
    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &numbers[index]);

    countPNZ(numbers, size, &positiveCount, &negativeCount, &zeroCount);

    printf("Positive:%d Negative:%d Zero:%d\n",
           positiveCount, negativeCount, zeroCount);
    return 0;
}
