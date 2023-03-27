#include <stdio.h>
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    if (month > 12 || month < 1)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (day > 31 || day < 1)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (month == 2 && day == 29 && !(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        day++;

    switch (month - 1)
    {
        case 11:
            day += 30;
        case 10:
            day += 31;
        case 9:
            day += 30;
        case 8:
            day += 31;
        case 7:
            day += 31;
        case 6:
            day += 30;
        case 5:
            day += 31;
        case 4:
            day += 30;
        case 3:
            day += 31;
        case 2:
            day += 28;
        case 1:
            day += 31;
    }

    printf("Day of the year: %d\n", day);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        printf("Remaining days: %d\n", 366 - day);
    else
        printf("Remaining days: %d\n", 365 - day);
}
