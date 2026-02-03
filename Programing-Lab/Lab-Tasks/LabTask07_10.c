#include <stdio.h>
int main()
{
    int array[10];
    int greater = 0;
    int lesser = 0;
    int minimum;
    int maximum;
    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);
       minimum = maximum = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > 5)
            greater++;
        else if (array[i] < 5)
            lesser++;
        if (array[i] < minimum)
            minimum = array[i];
        if (array[i] > maximum)
            maximum = array[i];
    }
    printf("Greater than 5: %d\nLess than 5: %d\nMin: %d\nMax: %d\n", greater, lesser, minimum, maximum);
    return 0;
}
