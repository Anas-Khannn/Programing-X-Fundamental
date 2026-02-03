#include<stdio.h>

int main(){

    int number ;
    int sum = 0;


    printf("Enter any Number(0 to stop):\n");

    while (1)
    {
        scanf("%d",&number);
        if (number == 0)
        {
            break;
        }
        sum += number;
    }

    printf("Total sum: %d\n", sum);
    return 0;
}
