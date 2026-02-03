#include <stdio.h>

int main() {
    int number;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    int arr[number];

    
    printf("Enter %d elements:\n", number);
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < number; i++) {
        for (int j = i + 1; j < number; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    printf("\nSorted array:\n");
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
