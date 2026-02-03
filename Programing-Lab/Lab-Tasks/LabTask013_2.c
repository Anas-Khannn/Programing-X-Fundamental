#include <stdio.h>

int main() {
    char first[50], last[50];
    int choice;

    printf("Enter your first name :: ");
    scanf("%s", first);

    printf("Enter your last name :: ");
    scanf("%s", last);

    printf("Which format you prefer; \n ");
    printf("1. FirstName LastName \n " );
    printf("2. LastName, FirstName \n");
    printf("Enter your choice :: \n ");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Welcome %s %s", first, last);
    else if(choice == 2)
        printf("Welcome %s, %s", last, first);
    else
        printf("Invalid choice");

    return 0;
}

