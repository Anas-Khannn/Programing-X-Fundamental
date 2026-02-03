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
    int i, j;

    for(i = 0; i < 5; i++)
        scanf("%d %s %d %f %s",
              &students[i].regNo,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);

    for(i = 0; i < 5; i++)
        for(j = i + 1; j < 5; j++)
            if(students[i].cgpa == students[j].cgpa)
                printf("%s and %s (%.2f)\n",
                       students[i].name,
                       students[j].name,
                       students[i].cgpa);

    return 0;
}
