#include <stdio.h>

void convertToUppercase(char text[])
{
    int index;
    for (index = 0; text[index] != '\0'; index++)
        if (text[index] >= 'a' && text[index] <= 'z')
            text[index] -= 32;
}

int main()
{
    char inputString[100];
    printf("Enter string: ");
    gets(inputString);

    convertToUppercase(inputString);
    printf("Uppercase: %s\n", inputString);
    return 0;
}
