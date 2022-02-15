#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Symmetric Matrix

    int matrix[3][3], temp[3][3], i, j, symmetric = 1;

    printf("Enter Values:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Values:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            temp[j][i] = matrix[i][j];
        }
    }

    printf("Transpose Matrix Values:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d  ", temp[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matrix[i][j] != temp[i][j])
            {
                symmetric++; // 2
                break;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Symmetric Matrix");
    }
    else {
        printf("Not Symmetric Matrix");
    }

    return 0;
}
