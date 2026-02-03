#include <stdio.h>

int main() {
    int number;
    int i; 
 
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1) {
        printf("Neither prime nor composite.\n");
        return 0;
    }

    for(i = 2; i <= number / 2; i++) {
        if(number % i == 0) {
            count++;
            break;
        }
    }

    if(count == 0)
        printf("%d is a Prime number.\n", number);
    else
        printf("%d is a Composite number.\n", number);

    return 0;
}
