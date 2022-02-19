#include <stdio.h>
#include <stdlib.h>

int main()
{
//    n = 121 = 121 = P
//    n = 123 = 321 = NP

    int n, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    int temp = n;

    while(n > 0)
    {
//        n = 121 = 121
        int r = n % 10;// 1, 2, 1
        sum = sum * 10 + r; // 1, 12, 121
        n = n / 10; // 12, 1, 0
    }

    if(sum == temp)
    {
        printf("Palindrome Number");
    }
    else {
        printf("Not Palindrome Number");
    }

    return 0;
}
