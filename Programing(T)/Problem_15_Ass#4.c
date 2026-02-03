#include <stdio.h>

void removeSpaces(char text[]) {
    int readIndex, writeIndex = 0;

    for (readIndex = 0; text[readIndex] != '\0'; readIndex++)
        if (text[readIndex] != ' ')
            text[writeIndex++] = text[readIndex];

    text[writeIndex] = '\0';
}

int main() {
    char inputString[100];

    printf("Enter string: ");
    gets(inputString);

    removeSpaces(inputString);
    printf("Without spaces: %s\n", inputString);
    return 0;
}
