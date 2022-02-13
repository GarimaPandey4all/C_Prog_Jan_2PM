#include <stdio.h>
#include <stdlib.h>

//ASCII Table
//
//    A - 65 to Z - 90
//    a - 97 to z - 122

int main()
{
    //Nested Loop
    //outer loop
    for(char i = 'A'; i <= 'E'; i++) // rows
    {
            //inner loop
        for(char j = 'A'; j <= 'E'; j++) // columns
        {
            printf("%c", i);
            //printf("%c", j);
        }

        printf("\n");
    }

    return 0;
}
