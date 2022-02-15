#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sparse Matrix

    int N = 3, matrix[N][N], i, j, count = 0;

    printf("Enter Values:\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Values:\n");
    for(i = 0; i <N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Principle Diagonal: \n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(i == j)
            {
                printf("%d  ", matrix[i][j]);
            }
        }
    }

    return 0;
}
