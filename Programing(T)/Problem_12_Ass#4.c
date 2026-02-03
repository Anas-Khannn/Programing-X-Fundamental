#include <stdio.h>

void sortArrayAscending(int numbers[], int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
}

int main()
{
    int numbers[50], size, index;

    printf("Enter size: ");
    scanf("%d", &size);

    for (index = 0; index < size; index++)
        scanf("%d", &numbers[index]);

    sortArrayAscending(numbers, size);

    for (index = 0; index < size; index++)
        printf("%d ", numbers[index]);

    return 0;
}
