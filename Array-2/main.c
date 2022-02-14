#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];

    printf("Enter any value:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
//    scanf("%d", &arr[0]);
//    scanf("%d", &arr[1]);
//    scanf("%d", &arr[2]);
//    scanf("%d", &arr[3]);
//    scanf("%d", &arr[4]);

    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
