#include <stdio.h>
#include <stdlib.h>

int main()
{
                //    2 - rows
            //    3 - cols
            //    table or matrix
    int matrix1[3][3], matrix2[3][3], result[3][3], n = 3; // 2D: 6 values

    printf("Enter values in Matrix-1:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter values in Matrix-2:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Values in Matrix-1 are:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d  ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Values in Matrix-2 are:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d  ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Addition is:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
