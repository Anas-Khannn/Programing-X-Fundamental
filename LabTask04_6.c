#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    // Input operands
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    // Perform operation
    switch(op) {
        case '+':
            printf("Sum = %.2f\n", num1 + num2);
            printf("Average = %.2f\n", (num1 + num2) / 2);
            break;
        case '-':
            printf("Difference = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Product = %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Quotient = %.2f\n", num1 / num2);
            else
                printf("Division by zero is not allowed!\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Remainder = %d\n", (int)num1 % (int)num2);
            else
                printf("Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
