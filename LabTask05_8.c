#include <stdio.h>

int main() {
    int a, b;
    char choice;

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    printf("\nEnter operation (+, -, *, /): ");
    scanf(" %c", &choice); 

    switch (choice) {
        case '+': {
            int sum = a + b;
            printf("Result: %d + %d = %d\n", a, b, sum);
            break;
        }
        case '-': {
            int diff = a - b;
            printf("Result: %d - %d = %d\n", a, b, diff);
            break;
        }
        case '*': {
            int prod = a * b;
            printf("Result: %d * %d = %d\n", a, b, prod);
            break;
        }
        case '/': {
            if (b != 0) {
                float div = (float)a / b;
                printf("Result: %d / %d = %.2f\n", a, b, div);
            } else {
                printf("Error: Division by zero not allowed!\n");
            }
            break;
        }
        default:
            printf("Invalid operation! Please enter +, -, *, or /\n");
    }

    return 0;
}
