#include <stdio.h>
int main() {
    int a[5], b[5], sum[5], dot = 0;
    printf("Enter 5 integers for first array:\n");
    for(int i=0; i<5; i++) scanf("%d", &a[i]);
    printf("Enter 5 integers for second array:\n");
    for(int i=0; i<5; i++) scanf("%d", &b[i]);
    printf("Sum of arrays:\n");
    for(int i=0; i<5; i++) {
        sum[i] = a[i] + b[i];
        printf("%d ", sum[i]);
        dot += a[i] * b[i];
    }
    printf("\nDot Product = %d\n", dot);
    return 0;
}
