/*A program that displays characters A to H giving their numeric value*/

#include <stdio.h>

int main()
{
	int a;
	a = 65;

	do
	{
		printf("The character %c contains numeric value of %d\n", a, a);
		a++;
	}while(a < 73);

	return 0;
}

