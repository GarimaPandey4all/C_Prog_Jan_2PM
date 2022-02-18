#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int a = 10;
    int b = 20;

    //pointer to a constant: value can't be changed
    //const int *ptr = &a;

    //*ptr = 30; // error

    //Constant Pointer: address can't be changed
    int *const ptr = &a;

    //ptr = &b; // error

    a = 30;


    return 0;
}
