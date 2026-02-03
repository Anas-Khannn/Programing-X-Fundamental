#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][50], temp[50];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name %d :: ", i + 1);
        scanf("%s", names[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in ascending order: \n ");
    for(int i = 0; i < 5; i++) {

        printf("%s \n", names[i]);
    }

    return 0;
}
