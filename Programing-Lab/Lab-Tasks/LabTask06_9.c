#include <stdio.h>

int main() {
    int lower, upper, sum = 0;
    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    for(int i = lower; i <= upper; i++) {
        sum += i;
    }

    printf("Sum of numbers from %d to %d = %d\n", lower, upper, sum);
    return 0;
}
