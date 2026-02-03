#include <stdio.h>

struct Student {
    int regNo;
    char name[30];
    int semester;
    float cgpa;
    char city[30];
};

int main() {
    struct Student students[5], highCGPA[5];
    int i, count = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d %s %d %f %s",
              &students[i].regNo,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);

        if(students[i].cgpa > 3.0)
            highCGPA[count++] = students[i];
    }

    for(i = 0; i < count; i++)
        printf("%s %.2f\n", highCGPA[i].name, highCGPA[i].cgpa);

    return 0;
}
