#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average, percentage;

    printf("Enter marks for the following subjects:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
