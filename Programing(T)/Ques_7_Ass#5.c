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
    int i, searchRegNo, found = 0;

    for(i = 0; i < 5; i++)
        scanf("%d %s %d %f %s",
              &students[i].regNo,
              students[i].name,
              &students[i].semester,
              &students[i].cgpa,
              students[i].city);

    printf("Enter registration number to search: ");
    scanf("%d", &searchRegNo);

    for(i = 0; i < 5; i++) {
        if(students[i].regNo == searchRegNo) {
            printf("Record Found:\n");
            printf("%s %d %.2f %s\n",
                   students[i].name,
                   students[i].semester,
                   students[i].cgpa,
                   students[i].city);
            found = 1;
        }
    }

    if(found == 0)
        printf("Student not found.\n");

    return 0;
}
