#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter value for a and b:");
    scanf("%d %d", &a, &b);

//    ==, != , >, < , >= , <=

    printf("Equal to: %d\n", a == b);
    printf("Not Equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less than: %d\n", a < b);
    printf("Greater than and equal to: %d\n", a >= b);
    printf("Less than and equal to: %d\n", a <= b);

    return 0;
}
