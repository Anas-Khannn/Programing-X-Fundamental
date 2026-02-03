#include <stdio.h>

int countWords(char sentence[])
{
    int index, wordCount = 0;

    for (index = 0; sentence[index] != '\0'; index++)
        if ((index == 0 && sentence[index] != ' ') ||
            (sentence[index] != ' ' && sentence[index - 1] == ' '))
            wordCount++;

    return wordCount;
}

int main()
{
    char sentence[200];
    printf("Enter sentence: ");
    gets(sentence);

    printf("Words: %d\n", countWords(sentence));
    return 0;
}
