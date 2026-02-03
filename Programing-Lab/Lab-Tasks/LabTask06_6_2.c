#include <stdio.h>

int main() {
    int number, i = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(i <= number) {
        printf("%d\t", i);
        i++;
    }
    return 0;
}
