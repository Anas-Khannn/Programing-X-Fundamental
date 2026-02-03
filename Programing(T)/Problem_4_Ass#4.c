#include <stdio.h>

int isPalindrome(char text[])
{
    int start = 0, end = 0;

    while (text[end] != '\0')
        end++;
    end--;

    while (start < end)
    {
        if (text[start] != text[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char inputString[100];
    printf("Enter string: ");
    gets(inputString);

    if (isPalindrome(inputString))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
