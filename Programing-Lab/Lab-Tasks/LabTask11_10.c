#include <stdio.h>
int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum == n;
}
void divisors(int n)
{
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            printf("%d ", i);
}
int main()
{
    int count = 0, n = 1;
    while (count < 5)
    {
        if (isPerfect(n))
        {
            printf("%d: ", n);
            divisors(n);
            printf("\n");
            count++;
        }
        n++;
    }
    return 0;
}
