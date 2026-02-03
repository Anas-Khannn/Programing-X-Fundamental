#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char regNumber[30];
    char subjects[10][50];
};

int main() {
    struct student s;
    int n;

    printf("Enter student name: ");
    gets(s.name);

    printf("Enter registration number: ");
    gets(s.regNumber);

    printf("Enter number of subjects: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        printf("Enter subject %d: ", i + 1);
        gets(s.subjects[i]);
    }

    printf("\nStudent Name: %s", s.name);
    printf("\nRegistration No: %s", s.regNumber);
    printf("\nSubjects:\n");

    for(int i = 0; i < n; i++) {
        printf("%s\n", s.subjects[i]);
    }

    return 0;
}
