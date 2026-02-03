#include<stdio.h>

int main(){

    int i =1;
    int j;
    int number;

    printf("Enter Number from(1-5):");
    scanf("%d",&number);


    while (i <= 5)
    {
        j=1;

        while (j<=i)
        {
           printf("*");
           j++;
        }

        printf("\n");
        i++;
    }

        return 0;
        
    }
    













