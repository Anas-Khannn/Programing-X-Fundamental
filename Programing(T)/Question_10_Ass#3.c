#include <stdio.h>

double getUnitsConsumed()
{
    double u;
    printf("Enter units: ");
    scanf("%lf", &u);
    return u;
}

double calculateBill(double u)
{
    if (u <= 100)
        return u * 5;
    else if (u <= 200)
        return 500 + (u - 100) * 8;
    else
        return 1300 + (u - 200) * 10;
}

int main()
{
    double u = getUnitsConsumed();
    printf("Bill: Rs %.2lf\n", calculateBill(u));
    return 0;
}
