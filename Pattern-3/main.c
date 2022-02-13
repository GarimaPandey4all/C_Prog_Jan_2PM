#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nested Loop
    //outer loop
    for(int i = 1; i <= 5; i++) // rows
    {
            //inner loop
        for(int j = 1; j <= i; j++) // columns
        {
            //printf("*");
            //printf("%d", i);
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
