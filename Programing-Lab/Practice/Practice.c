#include<stdio.h>
int main(){

    int number;

    printf("Enter the Size of the Array:");
    scanf("%d",&number);

    int array[number];

    printf("Enter the Elements of Array:\n");
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Array Elements are:");
    for (int i = 0; i < number; i++)
    {
        printf("%d",array[i]);
    }

    return 0;
    
    












}