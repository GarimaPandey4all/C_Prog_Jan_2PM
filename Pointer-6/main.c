#include <stdio.h>
#include <stdlib.h>

void add(int* , int*);

int main()
{
    int a = 10, b = 20;
    //add(10, 20); // call by value
    add(&a, &b); // call by reference/address

    return 0;
}

void add(int *a, int *b)
{
    printf("Addition is: %d", (*a + *b));
}
