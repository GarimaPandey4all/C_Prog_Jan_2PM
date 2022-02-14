#include <stdio.h>
#include <stdlib.h>

int main()
{
    //array: 1d and multile dimensional array(2d, 3d, 4d, 5d.....)

    int days[12] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};

    for(int i = 0; i < 12; i++)
    {
        printf("%d month has %d days\n", i+1, days[i]);
    }

    return 0;
}
