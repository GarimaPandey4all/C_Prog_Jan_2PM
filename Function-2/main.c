#include <stdio.h>
#include <stdlib.h>

//    function: particular task, reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type


//2. function with arguments and without return type

//function declaration
void add(int, int);

int main()
{
    //function calling
    add(30, 50); // 30, 50: function arguments / actual arguments

    return 0;
}

//function definition
void add(int a, int b) // int a, int b: function parameters / formal arguments
{
    printf("Addition is: %d\n", (a + b));
}
