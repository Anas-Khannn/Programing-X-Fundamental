#include <stdio.h>

int main() {
    int number;
    int reversed_number = 0; 
    int  remainder_ofanumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder_ofanumber= number % 10;              
        reversed_number = reversed_number * 10 + remainder_ofanumber; 
        number = number / 10;                 
    }

    printf("Reversed number: %d\n",reversed_number);

    return 0;
}
