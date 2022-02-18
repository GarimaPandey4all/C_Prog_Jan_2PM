#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var[3] = {1, 2, 3};
    int *ptr[3], i;

    for(i = 0; i < 3; i++)
    {
        ptr[i] = &var[i];
    }

    for(i = 0; i < 3; i++)
    {
        printf("%d  ", *ptr[i]);
    }

    return 0;
}
