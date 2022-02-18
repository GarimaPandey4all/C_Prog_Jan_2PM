#include <stdio.h>
#include <stdlib.h>

//DMA: Dynamic Memory Allocation, (Heap Memory of RAM)
//
//1. Malloc: Memory Allocation
//
//The malloc() function reserves the block of memory of the specified memory of bytes. And it
//returns a pointer of void which can be casted into pointer of any type / form.
//
//syntax:
//
//    ptr = (castType *)malloc(n * size);
//
//2. Calloc: Contiguous Memory Allocation
//
//The calloc() function reserves the block of memory of the specified memory of bytes and
//also initialized them with zero. And it returns a pointer of void which can be casted
//into pointer of any type / form.
//
//syntax:
//
//    ptr = (castType *)calloc(n, size);
//
//3. Realloc: Re-Allocate the already created memory

int main()
{
    int size;
    char *text = NULL;

    printf("Enter limit of the text:");
    scanf("%d", &size);

    //Memory Allocation
    text = (char *)malloc(size * sizeof(char));

    if(text != NULL)
    {
        printf("Enter some text:");
        scanf(" ");
        gets(text);

        printf("Inputted text is: %s", text);
    }

    //Memory Deallocation
    free(text);
    text = NULL;

    return 0;
}
