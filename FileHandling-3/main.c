#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL; //structure pointer

    char c;

    fp = fopen("file.txt", "a"); //a:append mode

    if(fp != NULL)
    {
        fprintf(fp, "%s" "%d", "Ram Kumar", 25);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
