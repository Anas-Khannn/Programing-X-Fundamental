#include <stdio.h>

double getCelsius()
{
    double c;
    printf("Enter Celsius: ");
    scanf("%lf", &c);
    return c;
}

double convertToFahrenheit(double c)
{
    return (c * 9 / 5) + 32;
}

void displayTemperature(double c, double f)
{
    printf("Fahrenheit: %.2lf\n", f);
}

int main()
{
    double c = getCelsius();
    double f = convertToFahrenheit(c);
    displayTemperature(c, f);
    return 0;
}
