#include<stdio.h>
int main(){

    int number;
    int i = 1;
    long factorial = 1;

    printf("Enter The Number: ");
    scanf("%d",&number);


    if (number < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else{
        while (i <= number)
        {
            factorial = factorial*i;
            i++;

        }

        printf("Factorial of %d is %d\n", number, factorial);
        
    }

    return 0;




}