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

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if(count > (N * N)/2)
    {
        printf("Sparse Matrix");
    }
    else {
        printf("Not Sparse Matrix");
    }

    return 0;
}
