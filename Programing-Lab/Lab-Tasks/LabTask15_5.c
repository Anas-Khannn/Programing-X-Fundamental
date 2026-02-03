#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    fp = fopen("Anas.txt", "r");

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            words++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Characters=%d Words=%d Lines=%d", chars, words+1, lines);
    return 0;
}
