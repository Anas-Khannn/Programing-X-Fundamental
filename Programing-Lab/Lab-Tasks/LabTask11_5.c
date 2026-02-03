#include <stdio.h>
long factorial(int number)
{
    long f = 1;
    for (int i = 1; i <= number; i++)
        f *= i;
    return f;
}
int main()
{
    int number;
    printf("Enter Number of your choice:");
    scanf("%d", &number);
    
    printf("Factorial of the number is: %ld", factorial(number));
    return 0;
}
