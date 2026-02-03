#include <stdio.h>

void countEvenOdd(int numbers[], int size, int *evenCount, int *oddCount)
{
    int index;
    *evenCount = *oddCount = 0;

    for (index = 0; index < size; index++)
        if (numbers[index] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
}

int main()
{
    int numbers[50], size, evenCount, oddCount, index;

    printf("Enter size: ");
    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &numbers[index]);

    countEvenOdd(numbers, size, &evenCount, &oddCount);
    printf("Even: %d  Odd: %d\n", evenCount, oddCount);
    return 0;
}
