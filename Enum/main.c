#include <stdio.h>
#include <stdlib.h>

//user defined data types
//Enumeration: enum : group of constants

int main()
{
    enum Week {
        Monday = 1,
        Tuesday = 5,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    enum Week today = Wednesday;

    printf("%d", today);

    return 0;
}
