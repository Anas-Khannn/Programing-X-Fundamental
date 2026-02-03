#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex inputComplex() {
    struct complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void displayComplex(struct complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct complex addComplex(struct complex a, struct complex b) {
    struct complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

int main() {
    struct complex c1, c2, result;

    c1 = inputComplex();
    c2 = inputComplex();

    result = addComplex(c1, c2);

    printf("Sum = ");
    displayComplex(result);

    return 0;
}
