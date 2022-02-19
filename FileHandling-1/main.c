#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL; //structure pointer

    char c;

    fp = fopen("file.txt", "r"); //r:read mode

    if(fp == NULL)
    {
        printf("Error in Opening file");
        exit(0);
    }

    while((c = fgetc(fp)) != EOF) // EOF: End of file
    {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
