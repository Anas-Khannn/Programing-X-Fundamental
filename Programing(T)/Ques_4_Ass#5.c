#include <stdio.h>

struct Student {
    int registrationNumber;
    char name[30];
    int semester;
    float cgpa;
    char city[30];
};

int main() {
    struct Student students[5];
    float totalCGPA = 0;
    int index;

    printf("Enter student data:\n");
    for(index = 0; index < 5; index++) {
        scanf("%d %s %d %f %s",
              &students[index].registrationNumber,
              students[index].name,
              &students[index].semester,
              &students[index].cgpa,
              students[index].city);
        totalCGPA += students[index].cgpa;
    }

    printf("Average CGPA: %.2f\n", totalCGPA / 5);
    return 0;
}
