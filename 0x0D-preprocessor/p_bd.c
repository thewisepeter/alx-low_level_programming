#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today;
    
    today.day = 21;
    today.month = 3;
    
    if (today.month == 3 && today.day == 21 )
    {
        printf ("Happy Birthday Genius Peter!!!\n");
    }
    return (0);
