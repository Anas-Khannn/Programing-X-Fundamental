#include <stdio.h>

double getWeight()
{
    double w;
    printf("Enter weight: ");
    scanf("%lf", &w);
    return w;
}

double getHeight()
{
    double h;
    printf("Enter height: ");
    scanf("%lf", &h);
    return h;
}

double calculateBMI(double w, double h)
{
    return w / (h * h);
}

int main()
{
    double w = getWeight();
    double h = getHeight();
    printf("BMI: %.2lf\n", calculateBMI(w, h));
    return 0;
}
