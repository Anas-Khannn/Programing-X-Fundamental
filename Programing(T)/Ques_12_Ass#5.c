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
    int i, count[10] = {0};

    for(i = 0; i < 5; i++) {
        scanf("%d %s %d %f %s",
              &students[i].regNo,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);
        count[students[i].semester]++;
    }

    for(i = 1; i < 10; i++)
        if(count[i] > 0)
            printf("Semester %d: %d students\n", i, count[i]);

    return 0;
}
