#include <stdio.h>

int main() {
    int isfound = 0;    
    int Target_one;      
    int array[5];

    printf("Enter Array Elements: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter Number to Search The element: \n");
    scanf("%d", &Target_one);

    for (int i = 0; i < 5; i++) {
        if (array[i] == Target_one) {   
            printf("Element found at index %d\n", i);
            isfound = 1;
            break;
        }
    }

    if (!isfound) {
        printf("Element not found\n");
    }

    return 0;
}
