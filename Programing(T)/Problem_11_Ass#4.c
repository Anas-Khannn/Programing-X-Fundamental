#include <stdio.h>

int countCharacterFrequency(char text[], char targetChar) {
    int index, frequency = 0;

    for (index = 0; text[index] != '\0'; index++)
        if (text[index] == targetChar)
            frequency++;

    return frequency;
}

int main() {
    char inputString[100], targetChar;

    printf("Enter string: ");
    gets(inputString);

    printf("Enter character: ");
    scanf("%c", &targetChar);

    printf("Frequency: %d\n",
           countCharacterFrequency(inputString, targetChar));
    return 0;
}
