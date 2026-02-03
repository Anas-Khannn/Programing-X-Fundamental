#include <stdio.h>

struct date
{
    int day, month, year;
};

void inputDate(struct date *d)
{
    printf("Enter day month year: ");
    scanf("%d %d %d", &d->day, &d->month, &d->year);
}

void displayDate(struct date d)
{
    printf("Date: %02d-%02d-%02d\n", d.day, d.month, d.year % 100);
}

int isLeapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int checkDate(struct date d)
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (d.month < 1 || d.month > 12)
        return 0;

    if (isLeapYear(d.year) && d.month == 2)
        daysInMonth[1] = 29;

    if (d.day < 1 || d.day > daysInMonth[d.month - 1])
        return 0;

    return 1;
}

int main()
{
    struct date d;
    inputDate(&d);

    if (checkDate(d))
    {
        displayDate(d);
        printf("Valid Date\n");
    }
    else
    {
        printf("Invalid Date\n");
    }

    return 0;
}
