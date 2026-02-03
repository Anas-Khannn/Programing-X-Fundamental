#include <stdio.h>

double getSpeed()
{
    double s;
    printf("Enter speed: ");
    scanf("%lf", &s);
    return s;
}

double getTime()
{
    double t;
    printf("Enter time: ");
    scanf("%lf", &t);
    return t;
}

double calculateDistance(double s, double t)
{
    return s * t;
}

void displayDistance(double s, double t, double d)
{
    printf("Distance: %.2lf\n", d);
}

int main()
{
    double s = getSpeed();
    double t = getTime();
    displayDistance(s, t, calculateDistance(s, t));
    return 0;
}
