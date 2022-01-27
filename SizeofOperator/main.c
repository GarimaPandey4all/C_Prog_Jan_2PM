#include <stdio.h>
#include <stdlib.h>

//1 byte = 8 bits
//
//int: 16 bit - compiler (2 bytes) or 32 bit compiler (4 bytes)

int main()
{
    int a = 10;

    printf("Int is: %d\n", sizeof(int));
    printf("Size of a is: %d\n", sizeof(a));
    printf("Float is: %d\n", sizeof(float));
    printf("Double is: %d\n", sizeof(double));
    printf("Char is: %d\n", sizeof(char));

    return 0;
}
