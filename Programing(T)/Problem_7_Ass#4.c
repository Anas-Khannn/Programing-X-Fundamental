#include <stdio.h>

int findLargestElement(int numbers[], int size)
{
    int index, largest = numbers[0];

    for (index = 1; index < size; index++)
        if (numbers[index] > largest)
            largest = numbers[index];

    return largest;
}

int main()
{
    int numbers[50], size, index;

    printf("Enter size: ");
    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &numbers[index]);

    printf("Largest: %d\n", findLargestElement(numbers, size));
    return 0;
}
