#include <stdio.h>

void copyString(char source[], char destination[])
{
    int index = 0;
    while ((destination[index] = source[index]) != '\0')
        index++;
}

int main()
{
    char sourceString[100], destinationString[100];

    printf("Enter string: ");
    gets(sourceString);

    copyString(sourceString, destinationString);
    printf("Copied string: %s\n", destinationString);
    return 0;
}
