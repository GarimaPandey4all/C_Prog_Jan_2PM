#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL; //structure pointer

    char c;

    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        printf("Error in Opening file");
        exit(0);
    }

    int linesCount = 0;
    while((c = fgetc(fp)) != EOF) // EOF: End of file
    {
        if(c == '\n')
        {
            linesCount++;
        }
    }

    printf("Total Line Count of the File is: %d", linesCount+1);

    fclose(fp);
    fp = NULL;

    return 0;
}
