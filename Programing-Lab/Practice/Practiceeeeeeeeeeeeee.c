#include <stdio.h>

void addNum(int number_1, int number_2)
{
    int sum = number_1 + number_2;
    printf("Sum is: %d\n",sum);
    
}

int main()
{
    int enterNumber;
    printf("Enter the first number: ");
    scanf("%d", &enterNumber);

    int enterNumber2;
    printf("Enter the second number: ");
    scanf("%d", &enterNumber2);

    addNum(enterNumber, enterNumber2);
    

    return 0;
}
