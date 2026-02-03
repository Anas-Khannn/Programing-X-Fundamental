#include <stdio.h>

struct Student {
    int registrationNumber;
    char name[30];
    int semester;
    float cgpa;
    char city[30];
};

int main() {
    struct Student students[5], temp;
    int i, j;

    printf("Enter student records:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d %s %d %f %s",
              &students[i].registrationNumber,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(students[i].cgpa < students[j].cgpa) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("Merit List:\n");
    for(i = 0; i < 5; i++)
        printf("%s - %.2f\n", students[i].name, students[i].cgpa);

    return 0;
}
