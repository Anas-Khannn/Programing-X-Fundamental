#include <stdio.h>

int main() {
    float sub_total = 0.0;
    float sales_tax;
    float total;

    float arrayList[5] = {12.95, 24.95, 6.95, 14.95, 3.95};

    // Display each item and calculate subtotal
    printf("List of the items:\n");
    for (int i = 0; i < 5; i++) {
        printf("Item %d price: $%.2f\n", i + 1, arrayList[i]);
        sub_total = sub_total + arrayList[i];  // add each price to subtotal
    }

    // Calculate sales tax and total
    sales_tax = (6.0 / 100.0) * sub_total;
    total = sub_total + sales_tax;

    // Print the results
    printf("\nSubtotal = $%.2f\n", sub_total);
    printf("Sales Tax (6%%) = $%.2f\n", sales_tax);
    printf("Total = $%.2f\n", total);

    return 0;
}
