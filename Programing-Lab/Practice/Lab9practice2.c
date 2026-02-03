#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int Array[rows][columns];

    // Input Array
    printf("\nEnter elements of Array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("Array[%d][%d] = ", i, j);
            scanf("%d", &Array[i][j]);
        }
    }

    // Print Array
    printf("\n--- Array Elements ---\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", Array[i][j]);
        }
        printf("\n");
    }

    // Print Even Numbers
    printf("\nEven Numbers:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if (Array[i][j] % 2 == 0)
                printf("%d ", Array[i][j]);
        }
    }

    // Print Odd Numbers
    printf("\nOdd Numbers:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            if (Array[i][j] % 2 != 0)
                printf("%d ", Array[i][j]);
        }
    }

    // Sum & Average
    int sum = 0;
    int totalElements = rows * columns;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            sum += Array[i][j];
        }
    }

    float average = (float)sum / totalElements;

    printf("\n\nSum of array elements = %d", sum);
    printf("\nAverage of array elements = %.2f\n", average);

    return 0;
}
