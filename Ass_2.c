#include <stdio.h>

int main() {
    int start, end;

    // Taking input from user
    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    // Ensure start is smaller than end (swap if needed)
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Outer loop for tables
    for (int i = start; i <= end; i++) {
        printf("\n---table of %d---\n", i);

        // Inner loop for multiplication
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
