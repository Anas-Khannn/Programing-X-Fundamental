#include <stdio.h>

double getLength()
{
    double l;
    printf("Enter length: ");
    scanf("%lf", &l);
    return l;
}

double getWidth()
{
    double w;
    printf("Enter width: ");
    scanf("%lf", &w);
    return w;
}

double calculatePerimeter(double l, double w)
{
    return 2 * (l + w);
}

void displayPerimeter(double l, double w, double p)
{
    printf("Perimeter: %.2lf\n", p);
}

int main()
{
    double l = getLength();
    double w = getWidth();
    displayPerimeter(l, w, calculatePerimeter(l, w));
    return 0;
}
