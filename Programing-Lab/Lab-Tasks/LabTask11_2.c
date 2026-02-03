#include <stdio.h>
void message(int number)
{
    for (int i = 0; i < number; i++)
        printf("Hello World!\n");
}
int main()
{
    int number;
    scanf("%d", &number);
    message(number);
    return 0;
}
