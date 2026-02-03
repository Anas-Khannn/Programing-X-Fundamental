#include <stdio.h>

double getNumber()
{
    double n;
    scanf("%lf", &n);
    return n;
}

double findMaximum(double a, double b, double c)
{
    return (a > b && a > c) ? a : (b > c ? b : c);
}

double findMinimum(double a, double b, double c)
{
    return (a < b && a < c) ? a : (b < c ? b : c);
}

int main()
{
    double a, b, c;
    printf("Enter three numbers: ");
    a = getNumber();
    b = getNumber();
    c = getNumber();
    printf("Max: %.2lf Min: %.2lf\n", findMaximum(a, b, c), findMinimum(a, b, c));
    return 0;
}
