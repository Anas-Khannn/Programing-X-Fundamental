#include <stdio.h>

double getBasicSalary()
{
    double s;
    printf("Enter basic salary: ");
    scanf("%lf", &s);
    return s;
}

double calculateAllowance(double s)
{
    return 0.2 * s;
}

double calculateDeduction(double s)
{
    return 0.1 * s;
}

double calculateNetSalary(double s, double a, double d)
{
    return s + a - d;
}

void displaySalarySlip(double s, double a, double d, double n)
{
    printf("Net Salary: %.2lf\n", n);
}

int main()
{
    double s = getBasicSalary();
    double a = calculateAllowance(s);
    double d = calculateDeduction(s);
    displaySalarySlip(s, a, d, calculateNetSalary(s, a, d));
    return 0;
}
