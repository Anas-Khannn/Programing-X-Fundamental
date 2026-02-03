#include <stdio.h>

int main() {
    int target_Value = 10;      
    int row = 0;
    int  coloumn;
    int founding_Value = 0;

    printf("Searching for %d in 4x4 matrix (1 to 16)...\n", target_Value);

    while (row < 4 && !founding_Value) {
        coloumn = 0;
        while (coloumn < 4) {
            int value = row * 4 + coloumn + 1;  

            if (value == target_Value) {
                printf("Value %d found at position (%d, %d)\n", target_Value, row, coloumn);
                founding_Value = 1;
                break;  
            }
            coloumn++;
        }
        if (!founding_Value)
         row++;
    }

    if (!founding_Value) {
        printf("Value %d not found.\n", target_Value);
    }

    return 0;
}