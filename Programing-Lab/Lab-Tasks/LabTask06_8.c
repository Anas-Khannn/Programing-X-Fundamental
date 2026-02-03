#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (y): ");
    scanf("%lf", &y);

    result = pow(x, y);
    printf("%.0lf ^ %.0lf = %.0lf\n", x, y, result);
    return 0;
}
