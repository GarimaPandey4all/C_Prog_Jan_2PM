#include <stdio.h>
#include <stdlib.h>

//variable: vary or change
//
//int a = 10;
//
//a = 50;

//constant: fixed value



int main()
{
    int a = 40;
    const float pi = 3.14f;

    printf("a is: %d\n", a);

    a = 50;

    printf("a is: %d\n", a);

    printf("%f\n", pi);

    //pi = 56.7f; // error

    printf("%f\n", pi);

    return 0;
}
