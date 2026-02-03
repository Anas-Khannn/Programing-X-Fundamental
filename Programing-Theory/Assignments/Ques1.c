#include<stdio.h>

int main(){

    int number;
    int sum = 0;
    int i=1;

    while (i <=20){
        
        sum += i;
        i++;
    
    }
    printf("The sum of the first 20 natural numbers is: %d\n", sum);

    return 0;
    

}