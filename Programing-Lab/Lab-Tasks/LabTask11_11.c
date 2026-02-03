#include <stdio.h>
#include <math.h>

void roots(float a, float b, float c)
{
    float d, r1, r2, real, img;

    d = b*b - 4*a*c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }
    else
    {
        real = -b / (2*a);
        img = sqrt(-d) / (2*a);
        printf("Roots are imaginary\n");
        printf("Real part = %.2f\n", real);
        printf("Imaginary part = %.2f\n", img);
    }
}

int main()
{
    float a, b, c;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter coefficient c: ");
    scanf("%f", &c);

    roots(a, b, c);

    return 0;
}
