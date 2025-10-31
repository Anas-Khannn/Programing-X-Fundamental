/*



                                            Programming Fundamental
                                            Assignment 1

                        Submitted By

                        Name:	                       ANAS KHAN
                        Registration No.	           10-001-2025-02683
                        Semester:	                 1st Semester, BS Computer Science
                        Section:	                    B
                        Submission Date:	           19-10-2025 

                        Submitted To                 Sir Usman

*/
#include <stdio.h>

int main()
{

    int First_number;
    int Second_number;

    printf("Enter The First Number: ");
    scanf("%d", &First_number);

    printf("Enter The Second Number: ");
    scanf("%d", &Second_number);

    if (First_number > Second_number)
    {
        printf("Descending order from %d to %d:\n", First_number, Second_number);
        for (int i = First_number; i >= Second_number; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else if (Second_number > First_number)
    {
        printf("Ascending order from %d to %d:\n", First_number, Second_number);
        for (int i = First_number; i <= Second_number; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else
    {
        printf("Both numbers are equal: %d\n", First_number);
    }

    return 0;
}
