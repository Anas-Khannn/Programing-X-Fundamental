#include <stdio.h>
#include <string.h>

struct date {
    int day, month, year;
};

struct student {
    char name[50];
    char regNumber[30];
    struct date dob;
};

void inputStudent(struct student *s) {
    printf("Enter name: ");
    gets(s->name);

    printf("Enter reg number: ");
    gets(s->regNumber);

    printf("Enter DOB (day month year): ");
    scanf("%d %d %d", &s->dob.day, &s->dob.month, &s->dob.year);
}

void displayStudent(struct student s) {
    printf("Student Name: %s\n", s.name);
    printf("Registration No: %s\n", s.regNumber);
    printf("DOB: %02d-%02d-%d\n", s.dob.day, s.dob.month, s.dob.year);
}

int main() {
    struct student s;
    inputStudent(&s);
    displayStudent(s);
    return 0;
}
