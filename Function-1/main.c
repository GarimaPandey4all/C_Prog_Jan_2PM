#include <stdio.h>
#include <stdlib.h>

//    function: particular task, reuseability

//function has four types:
//
//    1. function without arguments and without return type
//    2. function with arguments and without return type
//    3. function without arguments and with return type
//    4. function with arguments and with return type


//1. function without arguments and without return type

//function declaration
void add();

int main()
{
    //function calling
    add();
    add();
    add();

    return 0;
}

//void - no return
//without return type of the function

//function definition
void add()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition is: %d\n", (a + b));
}
