#include <stdio.h>

int main() {
    // Step 1: Store book prices in variables
    float book1 = 10.99;
    float book2 = 15.50;
    float book3 = 8.25;
    float book4 = 12.40;

    // Step 2: Display each price
    printf("=== Bookstore Price List ===\n");
    printf("Book 1: $%.2f\n", book1);
    printf("Book 2: $%.2f\n", book2);
    printf("Book 3: $%.2f\n", book3);
    printf("Book 4: $%.2f\n", book4);

    // Step 3: Calculate subtotal
    float subtotal = book1 + book2 + book3 + book4;

    // Step 4: Calculate 7% tax and total
    float tax = subtotal * 0.07;
    float total = subtotal + tax;

    // Step 5: Display results
    printf("\nSubtotal: $%.2f\n", subtotal);
    printf("Sales Tax (7%%): $%.2f\n", tax);
    printf("Total Amount to Pay: $%.2f\n", total);

    return 0;
}
