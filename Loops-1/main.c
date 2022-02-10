#include <stdio.h>
#include <stdlib.h>

//loops: Iteration or repeatition
//
//1. for

//    for(intialization; condition; increment/decrement)
//    {
//
//    }
//2. while

//    initialization
//    int i = 1;
//
//    while(condition)
//    {
//        loop body
//        i++;
//    }

//3. do while

int main()
{
    int i = 1, n;

    printf("Enter any number:");
    scanf("%d", &n);

    do {

        printf("%d * %d = %d\n", n, i, n * i);
        i++;

    }while(11 <= 10); // 2 <= 10


//    for(;;)
//    {
//
//    }
//    while(1)
//    {
//
//    }
//    while(i <= 10)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        i++;
//    }

//    for(;;)
//    for(i = 1; i <= 10; i++)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        printf("Hello World\n");
//    }

    return 0;
}
