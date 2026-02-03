#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_Value;
    int  guessed_Value;
    
    
srand(time(NULL));
    secret_Value = rand() % 100 + 1;  
    
    printf("Guess the number between 1 and 100!\n");
    
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guessed_Value);
        
        if (guessed_Value == secret_Value) {
            printf("Congratulations! You guessed it!\n");
            break;  
        }
        else if (guessed_Value < secret_Value) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("Too high! Try again.\n");
        }
    }
    
    return 0;
}