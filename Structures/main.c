#include <stdio.h>
#include <stdlib.h>

//user defined data types: structures

struct Date { // 12
    int day; //4
    int month; // 4
    int year; // 4
}date;

//struct Date date, date2, date3;

int main()
{
//    struct Date date, date2, date3;

    date.day = 16;
    date.month = 2;
    date.year = 2022;

    printf("%d - %d - %d", date.day, date.month, date.year);

    return 0;
}
