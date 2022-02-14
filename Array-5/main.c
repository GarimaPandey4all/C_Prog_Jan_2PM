#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[2][2][2], n = 2; // 3D: 8 values

    printf("Enter values in 3D-Array:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                scanf("%d", &list[i][j][k]);
            }
        }
    }

    printf("Values in 3D-Array are:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            printf("%d  ", list[i][j][k]);
        }
    }

    return 0;
}
