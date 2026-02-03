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

    for(i = 0; i < 5; i++)
        printf("%s\n", students[i].name);

    return 0;
}
