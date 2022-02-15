#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10] = "gaRiMa";
    char str2[10];

    printf("Length is: %d\n", strlen(str));
    printf("Uppercase is: %s\n", strupr(str));
    printf("Lowercase is: %s\n", strlwr(str));

    printf("String 1 is copying in String 2: %s\n", strcpy(str2, str));
    printf("String 1 is copying in String 2: %s\n", strcpy(str2, "Ram"));

    printf("String Concatenation/Joining: %s\n", strcat(str, str2));

//    ASCII Table
//
//    a: 97 to 122
//    A: 65 to 90
//
//    abc
//    aab
//    011

    if(strcmp(str, str2) == 0)
    {
        printf("Strings are same");
    }
    else {
        printf("Strings are not same");
    }

    return 0;
}
