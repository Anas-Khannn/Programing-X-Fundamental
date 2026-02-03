#include <stdio.h>

int main() {
    float total_payment = 0;
    float Taxamount = 0;
    float final_pay = 0;

    int hourly_rate = 15;
    int Hours_worked;

    // Input hours worked
    printf("How many hours did the employee work (hourly basis): ");
    scanf("%d", &Hours_worked);

    // Total payment before tax
    total_payment = hourly_rate * Hours_worked;
    printf("Total payment before tax: $%.2f\n", total_payment);

    // Tax amount (10%)
    Taxamount = (10.0 / 100.0) * total_payment;
    printf("Tax amount (10%%): $%.2f\n", Taxamount);

    // Final pay after tax
    final_pay = total_payment - Taxamount;
    printf("Final pay after deduction: $%.2f\n", final_pay);

    return 0;
}
