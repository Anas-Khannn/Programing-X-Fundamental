#include <stdio.h>

struct Student
{
    int regNo;
    char name[30];
    int semester;
    float cgpa;
    char city[30];
};

int main()
{
    struct Student students[5];
    int i, regNo;
    float newCGPA;

    for (i = 0; i < 5; i++)
        scanf("%d %s %d %f %s",
              &students[i].regNo,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);

    printf("Enter registration number: ");
    scanf("%d", &regNo);

    printf("Enter new CGPA: ");
    scanf("%f", &newCGPA);

    for (i = 0; i < 5; i++)
    {
        if (students[i].regNo == regNo)
        {
            students[i].cgpa = newCGPA;
            printf("Updated: %s %.2f\n",
                   students[i].name,
                   students[i].cgpa);
        }
    }
    return 0;
}
