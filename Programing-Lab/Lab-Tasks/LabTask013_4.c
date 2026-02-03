#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    do
    {
        printf("Enter your name :: ");
        fgets(name, sizeof(name), stdin);
    } while (strlen(name) <= 1);

    printf("Welcome %s", name);
    return 0;
}
