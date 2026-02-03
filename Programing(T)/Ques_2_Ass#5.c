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
    int targetSemester, index;

    printf("Enter student details:\n");
    for (index = 0; index < 5; index++)
    {
        scanf("%d %s %d %f %s",
              &students[index].registrationNumber,
              students[index].name,
              &students[index].semester,
              &students[index].cgpa,
              students[index].city);
    }

    printf("Enter semester to search: ");
    scanf("%d", &targetSemester);

    printf("Students in semester %d:\n", targetSemester);
    for (index = 0; index < 5; index++)
    {
        if (students[index].semester == targetSemester)
            printf("%s\n", students[index].name);
    }

    return 0;
}
