#include <stdio.h>

int main() {
    int n;
    float arr[100], sum = 0, mean;
    float *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    ptr = arr;

    for(int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    mean = sum / n;

    printf("Sum = %.2f Mean = %.2f", sum, mean);
    return 0;
}
