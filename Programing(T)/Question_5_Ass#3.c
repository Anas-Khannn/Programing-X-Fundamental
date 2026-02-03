#include <stdio.h>

double getNumber()
{
    double n;
    scanf("%lf", &n);
    return n;
}

double calculateAverage(double a, double b, double c)
{
    return (a + b + c) / 3;
}

void displayAverage(double a, double b, double c, double avg)
{
    printf("Average: %.2lf\n", avg);
}

int main()
{
    double a, b, c;
    printf("Enter three numbers: ");
    a = getNumber();
    b = getNumber();
    c = getNumber();
    displayAverage(a, b, c, calculateAverage(a, b, c));
    return 0;
}
