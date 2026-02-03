#include <stdio.h>

struct Student {
    int regNo;
    char name[30];
    int semester;
    float cgpa;
    char city[30];
};

int main() {
    struct Student students[5];
    int i;

    for(i = 0; i < 5; i++)
        scanf("%d %s %d %f %s",
              &students[i].regNo,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);

    printf("Passed Students:\n");
    for(i = 0; i < 5; i++)
        if(students[i].cgpa >= 2.0)
            printf("%s\n", students[i].name);

    printf("Failed Students:\n");
    for(i = 0; i < 5; i++)
        if(students[i].cgpa < 2.0)
            printf("%s\n", students[i].name);

    return 0;
}
