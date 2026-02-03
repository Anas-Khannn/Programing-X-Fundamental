#include <stdio.h>

int main() {
    int row = 1;
    int Coloumn;
    int Count;
    int i;
    int prime_number;
    int prime_count;
    int num;

    while (row <= 5) {
        Coloumn = 1;
        num = 2;
        prime_count = 0;

        while (prime_count < 5) {
            i = 2;
            Count = 0;

            while (i <= num / 2) {
                if (num % i == 0) {
                    Count++;
                    break;
                }
                i++;
            }

            if (Count == 0) {
                printf("%d\t",num);
                prime_count++;
            }

            num++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
