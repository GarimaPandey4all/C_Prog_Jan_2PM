#include<stdio.h>

void main()
{
	int a, b;
	clrscr();

	printf("Enter any value for a and b:");
	scanf("%d%d", &a, &b); // used to take user input at runtime
	//& - address of operator

	printf("Subtraction of %d and %d is: %d", a, b, (a - b));

	getch();
}