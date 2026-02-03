#include <stdio.h>

double getMarks()
{
    double m;
    scanf("%lf", &m);
    return m;
}

double calculateTotal(double a, double b, double c, double d, double e)
{
    return a + b + c + d + e;
}

double calculatePercentage(double total)
{
    return total / 5;
}

int main()
{
    double m1, m2, m3, m4, m5;
    printf("Enter 5 marks: ");
    m1 = getMarks();
    m2 = getMarks();
    m3 = getMarks();
    m4 = getMarks();
    m5 = getMarks();
    double total = calculateTotal(m1, m2, m3, m4, m5);
    printf("Percentage: %.2lf\n", calculatePercentage(total));
    return 0;
}
