#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter value for a and b:");
    scanf("%d %d", &a, &b);

//    &&, ||, !

//    a = 5, b = 21
//                                    0      &&  1 = 0
    printf("AND Logical is: %d\n", (a > 10 && b > 20));//0
//                                        0 || 1 = 1
    printf("OR Logical is: %d\n", (a > 10 || b > 20)); // 1

//    1 = 0, 0 = 1
    printf("Not Logical is: %d\n", !(a > 10 && b > 20)); // 1

    return 0;
}
