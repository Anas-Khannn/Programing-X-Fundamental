#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;
    src = fopen("file1.txt", "r");
    dest = fopen("copy.txt", "w");

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}
