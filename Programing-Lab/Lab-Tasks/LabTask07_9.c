#include<stdio.h>

int main(){
     
    int count = 0;
    int array[10];
    
    printf("Enter 10 elements of the array: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 5)
        {
            count++;
        }
    }

    printf("Number 5 appears %d times\n", count);
    return 0;
}
