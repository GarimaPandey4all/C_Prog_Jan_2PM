#include <stdio.h>
#include <stdlib.h>

int main()
{
//    shorthand
//    Ternary (3) Operator:

        //? :
//    exp - 1      exp - 2  exp - 3
//    (condition) ? true : false;

    int n;

    printf("Enter any number:");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");

    return 0;
}
