#include<stdio.h>

int main(){
    int number;
    int count = 0;


    printf("Enter Any Number of Your Choice: ");
    scanf("%d",&number);

    if (number == 0){
         count =1;
    }
     else{
        if (number < 0)
        {
            number = -number;
        }

        while (number != 0)
        {
            number = number/10;
            count++;

            
        }
        printf("The number of digits is: %d\n", count);
        return 0;
        
        
     }

    
    
    
    
}