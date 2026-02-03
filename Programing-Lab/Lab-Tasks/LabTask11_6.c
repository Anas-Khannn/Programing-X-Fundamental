#include <stdio.h>
#include <math.h>
#define PI 3.14159265

double power(double x, int n)
{
    double p = 1;
    for (int i = 0; i < n; i++)
        p *= x;
    return p;
}
long factorial(int n)
{
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
double mysin(double x)
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        int sign = (i % 2 == 0) ? 1 : -1;
        sum += sign * power(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return sum;
}
int main()
{
    double deg;
    printf("Enter the number: ");
    scanf("%lf", &deg);
    double rad = deg * PI / 180;

    printf(" Sin Value is : %lf\n", sin(rad));
    printf(" My Sine value is : %lf", mysin(rad));
    return 0;
}
