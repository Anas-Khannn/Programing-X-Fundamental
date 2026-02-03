#include <stdio.h>

int main()
{
    FILE *fp, *even, *odd;
    int n;
    fp = fopen("numbers.txt", "r");
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    while (fscanf(fp, "%d", &n) != EOF)
    {
        if (n % 2 == 0)
            fprintf(even, "%d ", n);
        else
            fprintf(odd, "%d ", n);
    }

    fclose(fp);
    fclose(even);
    fclose(odd);
    return 0;
}
