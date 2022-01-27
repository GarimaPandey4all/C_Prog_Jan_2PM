#include<stdio.h>

void main()
{
	unsigned short int x = 65535; // x = 0
	clrscr();
//	%d - integer, signed
	printf("x is: %d\n", x); // 0
//        %u - unsigned
	printf("x is: %u\n", x); // 0

	getch();
}