#include <stdio.h>
int main() {
    int array[5];
    printf("Enter 5 integers:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", &array[i]);
    }
    printf("Elements Divisble by 2 are:\n");
    for(int i=0; i<5; i++) {
        if (array[i] % 2 == 0)
        {
           printf("%d ", array[i]); 
        }
        
        
    }
    return 0;
}
