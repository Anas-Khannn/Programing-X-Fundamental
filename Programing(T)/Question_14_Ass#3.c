#include <stdio.h>

double getDistance() {
    double d;
    printf("Enter distance: ");
    scanf("%lf", &d);
    return d;
}

double getFuelUsed() {
    double f;
    printf("Enter fuel: ");
    scanf("%lf", &f);
    return f;
}

double calculateConsumption(double d, double f) {
    return d / f;
}

int main() {
    double d = getDistance();
    double f = getFuelUsed();
    printf("Consumption: %.2lf km/l\n", calculateConsumption(d, f));
    return 0;
}
