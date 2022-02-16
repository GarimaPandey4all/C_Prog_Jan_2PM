#include <stdio.h>
#include <stdlib.h>

//    function: particular task, reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type


// 4. function with arguments and with return type

//function declaration
int add(int, int);

int main()
{
    //function calling
    int result = add(10, 40);

    printf("Addition is: %d", result);

    return 0;
}

//function definition
int add(int a, int b)
{
    return (a + b);
}
