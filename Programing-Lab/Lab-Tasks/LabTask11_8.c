#include <stdio.h>
void minmax(int a[], int n)
{
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("%d %d", min, max);
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    minmax(a, 5);
    return 0;
}
