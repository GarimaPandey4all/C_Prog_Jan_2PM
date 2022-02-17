#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 100;

    int *pvalue = NULL;

    pvalue = &value;

    printf("%d\n", *pvalue);

    *pvalue = 300;

    printf("%d\n", *pvalue);

    printf("%d\n", value);

    *pvalue = *pvalue + 500;

    printf("%d", *pvalue);

    return 0;
}
