/*A program that continuously prints characters until it equates to logical false. logical false being 'c' */

#include<stdio.h>

int main()
{
	int a;
	a = ' '; //variable set to space character. Needs to be something else other than 'c' character
	
	printf("enter a character\n");
	do
	{
		a = getc(stdin);
		putchar(a);
	}while(a != 'c');

	return 0;
}
