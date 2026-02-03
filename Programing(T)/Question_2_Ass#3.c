#include <stdio.h>

double getPrincipal()
{
    double p;
    printf("Enter principal: ");
    scanf("%lf", &p);
    return p;
}

double getRate()
{
    double r;
    printf("Enter rate: ");
    scanf("%lf", &r);
    return r;
}

double getTime()
{
    double t;
    printf("Enter time (years): ");
    scanf("%lf", &t);
    return t;
}

double calculateInterest(double p, double r, double t)
{
    return (p * r * t) / 100;
}

void displayInterest(double p, double r, double t, double si)
{
    printf("Simple Interest: %.2lf\n", si);
}

int main()
{
    double p = getPrincipal();
    double r = getRate();
    double t = getTime();
    double si = calculateInterest(p, r, t);
    displayInterest(p, r, t, si);
    return 0;
}
