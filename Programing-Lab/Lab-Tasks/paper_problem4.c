#include <stdio.h>

int main() {
    // Step 1: Declare variables
    float distance = 350.0;        // km
    float fuelEfficiency = 15.0;   // km per liter
    float fuelPrice = 1.25;        // $ per liter
    float litersUsed, totalCost;

    // Step 2: Calculate total liters of fuel
    litersUsed = distance / fuelEfficiency;

    // Step 3: Calculate total cost of fuel
    totalCost = litersUsed * fuelPrice;

    // Step 4: Display results
    printf("Total liters of fuel used: %.2f liters\n", litersUsed);
    printf("Total cost of the trip: $%.2f\n", totalCost);

    return 0;
}
