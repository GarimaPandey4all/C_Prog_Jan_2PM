#include <stdio.h>
#include <stdlib.h>

//5! = 5 * 4 * 3 * 2 * 1 = 120

int main()
{
    int fact = 1, n;

    printf("Enter any number:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial is: %d", fact);

    return 0;
}
