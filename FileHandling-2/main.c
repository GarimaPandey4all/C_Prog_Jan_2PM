#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL; //structure pointer

    char c;

    fp = fopen("file.txt", "w"); //w:write mode

    if(fp != NULL)
    {
        fprintf(fp, "%s" "%d", "Ram Kumar", 25);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
