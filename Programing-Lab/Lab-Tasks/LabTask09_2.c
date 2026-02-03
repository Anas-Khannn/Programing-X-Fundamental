#include <stdio.h>

void inputMatrix(int arr[3][5]) {
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 5; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
}

void displayMatrix(int arr[3][5]) {
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

int main() {
    int matrix[3][5];

    inputMatrix(matrix);
    printf("\nMatrix:\n");
    displayMatrix(matrix);

    return 0;
}
