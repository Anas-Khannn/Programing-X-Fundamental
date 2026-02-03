#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        printf("%d\t", i);
        if(i % 5 == 0) {
            printf("\n"); 
        }
    }
    return 0;
}
