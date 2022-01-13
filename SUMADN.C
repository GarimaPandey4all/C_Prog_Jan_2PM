#include<stdio.h>

void main()
{
	//variable- container - it is used to store some value.
//        vary or change
	// int - integer value/data
	int a = 100, b = 200, c; // variables declaration and initalization
	clrscr();
	c = a + b;
//	%d: format specifier for integer value
	//printf("Sum %d is: ", c);

	printf("Sum of %d and %d is: %d", a, b, c);

	getch();
}