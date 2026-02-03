#include <stdio.h>
#include <string.h>
void insert(char str[], char sub[], int pos)
{
    char temp[100];
    strcpy(temp, str + pos);
    strcpy(str + pos, sub);
    strcat(str, temp);
}
void del(char str[], int pos, int n)
{
    strcpy(str + pos, str + pos + n);
}
int main()
{
    char str[100] = "HelloWorld";
    insert(str, "Test", 5);
    del(str, 5, 4);
    printf("%s", str);
    return 0;
}
