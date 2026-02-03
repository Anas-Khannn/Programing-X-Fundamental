#include <stdio.h>

double getPrice()
{
    double p;
    printf("Enter price: ");
    scanf("%lf", &p);
    return p;
}

double getTaxRate()
{
    double r;
    printf("Enter tax rate: ");
    scanf("%lf", &r);
    return r;
}

double calculateTotalPrice(double p, double r)
{
    return p + (p * r / 100);
}

int main()
{
    double p = getPrice();
    double r = getTaxRate();
    printf("Final Price: %.2lf\n", calculateTotalPrice(p, r));
    return 0;
}
