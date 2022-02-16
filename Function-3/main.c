#include <stdio.h>
#include <stdlib.h>

//    function: particular task, reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type


//3. function without arguments and with return type

//function declaration
int add();

int main()
{
    //function calling
    int result = add();

    printf("Addition is: %d", result);

    return 0;
}

//function definition
int add()
{
    int a, b;

    printf("Enter value for a and b:");
    scanf("%d %d", &a, &b);

    return (a + b);
}
