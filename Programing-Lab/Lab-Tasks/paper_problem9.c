#include<stdio.h>

int main(){
        int array[10];
        int sum =0;

        printf("Enter 10 elements of the array:|n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d :" ,i+1);
            scanf("%d",&array[i]);
        }

        for (int i = 0; i < 10; i++)
        {
            array[i] += 2;
            sum += array[i];
        }
         // Step 3: Display the updated array
    printf("\nUpdated Array (each element +2): ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",array[i]);
    }

    // Step 4: Display the sum
    printf("\nSum of all elements: %d\n", sum);
        
        
}