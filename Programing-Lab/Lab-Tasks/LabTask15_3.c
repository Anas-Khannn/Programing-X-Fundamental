#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char c1, c2;
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if (c1 != c2) {
            printf("Files are not identical");
            return 0;
        }
    }
    printf("Files are identical");
    fclose(f1);
    fclose(f2);
    return 0;
}
