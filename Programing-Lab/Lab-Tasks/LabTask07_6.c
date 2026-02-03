#include<stdio.h>


    void inputData(int array[], int size){
        printf("Enter %d integers: \n",size);
        for (int i = 0; i < size; i++)
        {
           scanf("%d",&array[i]);
        }
        
        
    }

    
    void Display_data(int array[], int size){
        printf("Array Elements: \n");
        for (int i = 0; i < size; i++)
        {
           printf("%d" , array[i]);
        }
        
        
    }
    int main(){
        int array[5];
        inputData(array,5);
        Display_data(array,5);






        return 0;
    }








