#include <stdio.h>

struct Student
{
    int registrationNumber;
    char name[30];
    int semester;
    float cgpa;
    char city[30];
};

int main()
{
    struct Student students[5];
    int index, highestIndex = 0;

    printf("Enter student records:\n");
    for (index = 0; index < 3; index++)
    {
        scanf("%d %s %d %f %s",
              &students[index].registrationNumber,
              students[index].name,
              &students[index].semester,
              &students[index].cgpa,
              students[index].city);
    }

    for (index = 1; index < 3; index++)
    {
        if (students[index].cgpa > students[highestIndex].cgpa)
            highestIndex = index;
    }

    printf("Top student: %s with CGPA %.2f\n",
           students[highestIndex].name,
           students[highestIndex].cgpa);

    return 0;
}
