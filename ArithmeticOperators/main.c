#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

//    +, -, *, /, %(modulus: it gives remainder), ++(Increment), --(Decrement)

    //a = 4, b = 5

    printf("Modulus is: %d\n", (a % b));  // 4

//    Pre and Post Increment
//    a = 4, pre - ++a = 4 + 1 = 5
//    b = 5, post - b++ = 5 + 1 = 6
//
//    Pre and Post Decrement
//    a = 4, pre: --a = 4 - 1 = 3
//    b = 5, post: b-- = 5 - 1 = 4

    printf("Pre-Increment: %d\n", ++a); // 5
    printf("Post-Increment: %d\n", a++); // 5
    printf("a is: %d\n", a); // 6

    printf("Pre-Decrement: %d\n", --b); // 4
    printf("Post-Decrement: %d\n", b--); // 4
    printf("b is: %d\n", b); // 3

    return 0;
}
