#include <stdio.h>

int main()
{
    FILE *fp;
    char lines[10][100];
    int i = 0;
    fp = fopen("Anas.txt", "r");

    while (fgets(lines[i], 100, fp) != NULL)
        i++;

    fclose(fp);
    return 0;
}
