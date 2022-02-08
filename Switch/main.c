#include <stdio.h>
#include <stdlib.h>

int main()
{
//    switch or Menu Driven Program

    int choice;
    int a, b;

//    Repeat : Loop

    while(1)//always true (1) // infinite times loop
    {

        printf("\n\n**********Calculator*************\n\n");
        printf("Press 1. Addition\n");
        printf("Press 2. Subtraction\n");
        printf("Press 3. Division\n");
        printf("Press 4. Multiplication\n");
        printf("Press 5. Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
               printf("Enter any value for a and b:");
               scanf("%d %d", &a, &b);

                printf("Addition is: %d\n", (a + b));
                break;

            case 2:
               printf("Enter any value for a and b:");
              scanf("%d %d", &a, &b);

                printf("Subtraction is: %d\n", (a - b));
                break;

            case 3:
                printf("Enter any value for a and b:");
                scanf("%d %d", &a, &b);

                printf("Division is: %d\n", (a / b));
                break;

            case 4:
               printf("Enter any value for a and b:");
               scanf("%d %d", &a, &b);

                printf("Multiplication is: %d\n", (a * b));
                break;

            case 5:
                exit(0); // exit the program

            default:
                printf("Invalid Choice");
        }

    }
    //printf("Outside the Switch - Block");

    return 0;
}
