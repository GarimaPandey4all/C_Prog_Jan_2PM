#include <stdio.h>
#include <stdlib.h>

//user defined data types: union

union Date { // 4
    int day; //4
    int month; // 4
    int year; // 4
}date;

//union Date date, date2, date3;

int main()
{
//    union Date date, date2, date3;

    date.day = 16;
    printf("%d - ", date.day);
    date.month = 2;
    printf("%d - ", date.month);
    date.year = 2022;
    printf("%d", date.year);

    //printf("%d - %d - %d", date.day, date.month, date.year);

    return 0;
}
