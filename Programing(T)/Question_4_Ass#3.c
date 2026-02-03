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

double getHeight()
{
    double h;
    printf("Enter height: ");
    scanf("%lf", &h);
    return h;
}

double calculateVolume(double l, double w, double h)
{
    return l * w * h;
}

void displayVolume(double l, double w, double h, double v)
{
    printf("Volume: %.2lf\n", v);
}

int main()
{
    double l = getLength();
    double w = getWidth();
    double h = getHeight();
    double v = calculateVolume(l, w, h);
    displayVolume(l, w, h, v);
    return 0;
}
