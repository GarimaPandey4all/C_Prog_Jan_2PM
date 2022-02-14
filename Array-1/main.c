#include <stdio.h>
#include <stdlib.h>

//Array: It is a collection of similar types of data.
//It is used to store multiple values in a single variable.

//int a[5]; // [] - closed bracket or subscript operator
// 5: size of the array

int main()
{
    //int arr[5]; // array declaration

    //traditional way of initialization
    int arr2[5] = {1, 2, 3, 4, 5}; // array declare and initialize

    printf("1 value: %d\n", arr2[0]);
    printf("2 value: %d\n", arr2[1]);
    printf("3 value: %d\n", arr2[2]);
    printf("4 value: %d\n", arr2[3]);
    printf("5 value: %d\n", arr2[4]);

    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", arr2[i]);
    }

    // compile time initialization
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

     for(int i = 0; i < 7; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
