#include <stdio.h>
#include <stdlib.h>

//pointer: Indirection way to access heap memory

int main()
{
    int a = 10;

    int *pvalue = &a;

    printf("%d\n", *pvalue);
    printf("%d\n", pvalue); // address of a
    printf("%d\n", &pvalue); // address of pointer

    return 0;
}
