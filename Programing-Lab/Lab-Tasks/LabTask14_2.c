#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char regNumber[30];
    char subjects[10][50];
};

void display(struct student s, int count) {
    printf("------------------------------\n");
    printf("Student Name :: %s\n", s.name);
    printf("Student Reg No :: %s\n", s.regNumber);
    printf("%s has enrolled the following %d subjects;\n", s.name, count);

    for(int i = 0; i < count; i++) {
        printf("%s\n", s.subjects[i]);
    }
    printf("------------------------------\n");
}

int main() {
    struct student s;
    int n;

    printf("Enter name: ");
    gets(s.name);

    printf("Enter reg number: ");
    gets(s.regNumber);

    printf("Enter number of subjects: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        printf("Enter subject %d: ", i + 1);
        gets(s.subjects[i]);
    }

    display(s, n);
    return 0;
}
