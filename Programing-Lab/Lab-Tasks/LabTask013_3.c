#include <stdio.h>
#include <string.h>

int main()
{
    char reg1[20], reg2[20];

    printf("Enter the first reg no :: ");
    scanf("%s", reg1);

    printf("Enter the second reg no :: ");
    scanf("%s", reg2);

    printf("The order is \n ");

    if(strcmp(reg1, reg2) > 0) {
        printf("%s%s \n ", reg2, reg1);
    } else {
        printf("%s%s \n ", reg1, reg2);
    }

    return 0;
}
