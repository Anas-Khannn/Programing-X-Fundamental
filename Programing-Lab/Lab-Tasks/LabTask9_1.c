#include <stdio.h>

int main() {
    int array[3][5];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    printf("\nMatrix form:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
