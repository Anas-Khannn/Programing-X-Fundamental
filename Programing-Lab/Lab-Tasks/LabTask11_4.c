#include <stdio.h>
int sumRange(int a, int b)
{
    int sum = 0;
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    for (int i = a; i <= b; i++)
        sum += i;
    return sum;
}
int main()
{
      int a, b;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Sum of all numbers: %d", sumRange(a, b));
    return 0;
}
