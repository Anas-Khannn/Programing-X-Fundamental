#include <stdio.h>

int countVowels(char text[])
{
    int index, vowelCount = 0;

    for (index = 0; text[index] != '\0'; index++)
    {
        char ch = text[index];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowelCount++;
    }
    return vowelCount;
}

int main()
{
    char inputString[100];
    printf("Enter string: ");
    gets(inputString);

    printf("Vowels: %d\n", countVowels(inputString));
    return 0;
}
