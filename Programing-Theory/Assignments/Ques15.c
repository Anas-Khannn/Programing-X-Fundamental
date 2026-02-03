#include <stdio.h>

int main() {
    int size = 5;
    int row = 0;
    int sum = 0;

    printf("Calculating sum of diagonal elements in 5x5 matrix (1 to 25)...\n");

    while (row < size) {
        int col = 0;
        while (col < size) {
            int value = row * size + col + 1;  

            if (row == col) {  
                sum += value;
                break;         
            }
            col++;
        }
        row++;
    }

    printf("Sum of diagonal elements: %d\n", sum);
    

    return 0;
}