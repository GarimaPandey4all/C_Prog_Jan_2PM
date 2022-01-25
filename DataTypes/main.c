#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; // 4 bytes
    float b = 45.67f; // 4 bytes
    double c = 67.89; // 8 bytes
    char ch = 'A'; // 1 byte

//    "Apple" - collection of characters - String
//    'A' - only one character - character - char

    //void - null or empty

    printf("A is: %d\n", a);
    printf("B is: %.2f\n", b);
    printf("C is: %.2lf\n", c); // lf- long float
    printf("CH is: %c\n", ch);

    return 0;
}
