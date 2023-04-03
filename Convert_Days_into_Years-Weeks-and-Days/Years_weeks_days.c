#include <stdio.h>

int main()
{
	int nodays;
	int years;
	int weeks;
	int DaysInweek = 7;
	int days;

    printf("Enter the number of nodays: ");
	scanf("%d", &nodays);
	years = nodays / 365;
	weeks = (nodays % 365) / DaysInweek;
	days = (nodays % 365) % DaysInweek;
	
	printf("%ddays is equivalent to %dyears %dweeks %ddays \n", nodays, years, weeks, days);
	
}
