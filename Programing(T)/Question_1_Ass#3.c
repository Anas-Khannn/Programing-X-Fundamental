#include <stdio.h>
#define PI 3.14159

double getRadius()
{
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);
    return r;
}

double calculateArea(double r)
{
    return PI * r * r;
}

void displayResult(double r, double area)
{
    printf("Radius: %.2lf\nArea: %.2lf\n", r, area);
}

int main()
{
    double r = getRadius();
    double area = calculateArea(r);
    displayResult(r, area);
    return 0;
}
