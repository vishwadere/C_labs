/*
 C program to convert given number of days to a measure of time given
 in years,months, weeks and days.
 */
#include <stdio.h>
void main()
{
    int ndays, year, month, week, days;
 
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    month = (ndays%365) / 30;
    week =(ndays % 365) / 7;
    days =(ndays % 365) % 7;
    printf ("it is equivalent to %d years,%d months %d weeks and %d days", year,month, week, days);
}
