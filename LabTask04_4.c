#include <stdio.h>

int main() {
    int num1, num2, reverse = 0, temp;

    
    printf("Enter the last two digits of your registration number: ");
    scanf("%d", &num1);

    // Reverse the number
    temp = num1;
    while (temp != 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }
    num2 = reverse;

    printf("\nFirst Number: %d\n", num1);
    printf("Second Number (Reverse): %d\n", num2);

    // Find maximum
    if (num1 > num2)
        printf("Maximum Number is: %d\n", num1);
    else
        printf("Maximum Number is: %d\n", num2);

    return 0;
}
