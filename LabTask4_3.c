#include <stdio.h>

int main() {
    int units;
    float bill;

   
    printf("Please enter the total number of consumed units :: ");
    scanf("%d", &units);

    int firstSlab = 0, secondSlab = 0, thirdSlab = 0;

    
    if (units <= 100) {
        firstSlab = units;
        bill = units * 7.0;
    } 
    else if (units <= 150) {
        firstSlab = 100;
        secondSlab = units - 100;
        bill = (100 * 7.0) + (secondSlab * 10.0);
    } 
    else {
        firstSlab = 100;
        secondSlab = 50;
        thirdSlab = units - 150;
        bill = (100 * 7.0) + (50 * 10.0) + (thirdSlab * 15.0);
    }

    // Display results
    printf("\n-------- A Typical Display -------\n");
    printf("Please enter the total number of consumed units :: %d\n", units);
    printf("Units in First Slab :: %d\n", firstSlab);
    printf("Units in Second Slab :: %d\n", secondSlab);
    printf("Units in Third Slab :: %d\n", thirdSlab);
    printf("Total Bill :: %.0f\n", bill);

    return 0;
}
