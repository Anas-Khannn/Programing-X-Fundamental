#include<stdio.h>

int main(){
    int number[10];
    int sum = 0;
    int average;

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&number[i]);
    }
    
    // sum

    for (int i = 0; i < 10; i++)
    {
        number[i] = number[i]*3;
        sum += number[i];
    }

    average = sum / 10;

    printf("Sum of the number after Xing by 3:");
    for (int i = 0; i < 10; i++)


    {
        printf("\n");
        printf("%d",number[i]);
    } 
    

    printf("\n");
    printf("Average of the number is %d:",average);

    return 0;

    






    return 0;
}