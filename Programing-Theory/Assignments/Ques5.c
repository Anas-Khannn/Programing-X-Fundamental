#include<stdio.h>

int main(){

    int number;
    printf("Enter Number:");
    scanf("%d",&number);

    int i = number;
    int j;



    while (i<= 10)
    {
        j=1;
        
        printf("Multiplication of The number %d is:\n",i);

        while (j<=10)
        {
            int result = i*j;
            printf("%d x %d = %d\n",i,j,result);
            j++;

        }

        i++;
        
    }
    

    return 0;
}