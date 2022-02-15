#include <stdio.h>
#include <stdlib.h>

//String: Collection of Characters or more than one character
//char str[] - string in c

int main()
{
    char name[20];

    printf("Enter your name");
//    scanf("%s", &name);

    gets(name); // get string

    puts(name);
    printf("Your name is: %s\n", name);

    return 0;
}
