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
    float cgpaLimit;
    int index;

    printf("Enter details of 5 students:\n");
    for(index = 0; index < 5; index++) {
        printf("Student %d (RegNo Name Semester CGPA City): ", index + 1);
        scanf("%d %s %d %f %s",
              &students[index].registrationNumber,
              students[index].name,
              &students[index].semester,
              &students[index].cgpa,
              students[index].city);
    }

    printf("Enter CGPA limit: ");
    scanf("%f", &cgpaLimit);

    printf("Students with CGPA above %.2f:\n", cgpaLimit);
    for(index = 0; index < 5; index++) {
        if(students[index].cgpa > cgpaLimit)
            printf("%s (%.2f)\n", students[index].name, students[index].cgpa);
    }

    return 0;
}
