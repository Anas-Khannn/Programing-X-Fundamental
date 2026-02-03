#include<stdio.h>

int main(){

    int i = 1;
    int j;

    int number = 0;
    int sum = 0;

    printf("Enter Elements of 3x3 Matrix: \n");


    while (i <= 3)
    {
        j = 1;

        while (j<= 3)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&number);

            sum += number;
            j++;
        }
        i++;
        
    }
    printf("\nSum of all elements in the 3x3 matrix = %d\n", sum);



    return 0;
}