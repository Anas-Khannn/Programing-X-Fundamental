#include <stdio.h>

int getStringLength(char text[]) {
    int index = 0;
    while (text[index] != '\0')
        index++;
    return index;
}

int main() {
    char inputString[100];
    printf("Enter string: ");
    gets(inputString);

    printf("Length: %d\n", getStringLength(inputString));
    return 0;
}
