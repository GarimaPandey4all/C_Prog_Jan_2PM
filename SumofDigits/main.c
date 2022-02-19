#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    while(n > 0)
    {
//        n = 121 = 1 + 2 + 1 = 4
        int r = n % 10;// 1, 2, 1
        sum = sum + r; // 1+2 = 3 + 1 = 4
        n = n / 10; // 12, 1, 0
    }

    printf("Sum of Digits is: %d", sum);

    return 0;
}
