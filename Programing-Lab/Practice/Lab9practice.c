#include <stdio.h>

int main() {
    
    int array1[3][2] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    
    int array2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Elements of Array 1:\n");
    
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 2; j++) {
            printf("%d ", array1[i][j]);
        }
        printf("\n"); 
    }

    printf("\nElements of Array 2:\n");
    
    for (int i = 0; i < 2; i++) {
       
        for (int j = 0; j < 3; j++) {
            printf("%d ", array2[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}