#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file1.txt", "w");
    fprintf(fp, "Hello, this is me Anas Khan From Cs Section B.");
    fclose(fp);
    return 0;
}
