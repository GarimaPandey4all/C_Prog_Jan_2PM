#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter value for a and b:");
    scanf("%d %d", &a, &b);

    printf("AND Bitwise: %d\n", (a & b));
    printf("OR Bitwise: %d\n", (a | b));
    printf("X-OR Bitwise: %d\n", (a ^ b));
    printf("Left Shift Bitwise: %d\n", (a<<1));
    printf("Right Shift Bitwise: %d\n", (a>>1));

//    & (AND), |(OR), <<(Left Shift), >> (Right Shift), ^ (X-OR)

//    Binary - 0, 1 (2)
//    Bit - 0, 1, 1, 1
//
//    1 byte = 8 bits
//
//    Decimal convert into Binary
//
//    .......,.....2 ^ 7, 2 ^ 6, 2 ^ 5 , 2 ^ 4 , 2 ^ 3 , 2 ^ 2 , 2 ^ 1 , 2 ^ 0
//
//    ........512 256 128 64 32 16 8 4 2 1
//                                   1
//    a = 4, b = 5
//
//    4 = 0000 0100
//    5 = 0000 0101 &
//        0000 0100 = 4
//
//    4 = 0000 0100
//    5 = 0000 0101 |
//        0000 0101 = 5
//
//    4 = 0000 0100
//    5 = 0000 0101 ^
//        0000 0001 = 1
//
//    OR(Inclusive) vs X-OR(Exclusive OR)
//
//    1                   1
//    1                   1
//    1                   0
//
//
//    Left Shift , <<
//
//    a << 1
//
//    4 << 1
//
//            0000 0100 <<
//            0000 1000 = 8
//
//    Shortcut Left Shift
//
//    a * 2 ^ shift
//    = 4 * 2 ^ 1 = 8
//
//    Right Shift , >>
//
//    a >> 1
//
//    4 >> 1
//
//            0000 0100 >>
//            0000 0010 = 2
//
//    Shortcut Right Shift
//
//    a / 2 ^ shift
//    = 4 / 2 ^ 1 = 2

    return 0;
}
