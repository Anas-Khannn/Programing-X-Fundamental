#include<stdio.h>

int main(){

    int number;
    int sum = 0;
    printf("Enter positive integers (negative to stop):\n");
    

    while (1)

    {
        scanf("%d",&number);
        if (number < 0)
        {
            printf("Number is Negative Enter a Postive One \n4");
            break;
        }

         sum += number;
    }

    printf("Sum of positive numbers: %d\n",sum);
    return 0;


        
        
}
    