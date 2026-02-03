#include<stdio.h>
int main(){
    int arrayone[5];
    int squaredarray[5];

    printf("Enter Array Elements: \n");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&arrayone[i]);
    }

    printf("Enter Elements To be Sqaureed: \n");
    for (int i = 0; i < 5; i++)
    {
        squaredarray[i] = arrayone[i] * arrayone[i];
    }

   // Step 3: Display both arrays
    printf("\nOriginal Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrayone[i]);
    }

    printf("\nSquared Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", squaredarray[i]);
    }

    printf("\n");

    return 0;
}