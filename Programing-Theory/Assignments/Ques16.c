#include <stdio.h>

int main() {
    int row = 0;

    while (row < 3) {  
        int coloumn = 0;
        char ch = 'a';

        while (coloumn < 26) {
            printf("%c ",ch);
            if (ch == 'z') {
                break;  
            }
            ch++;
            coloumn++;
        }
        printf("\n");
        row++;
    }

    return 0;
}