/*
*  C program to Print Diamond Pattern using For loop
*/
#include <stdio.h>

int main()
{
    int number, i, j, count = 1;
    
    printf("enter number \n");
    
    scanf("%d", &number);
    printf("\n");
    
    count = number - 1;
    
    for(i = 1; i <= number; i++ )
    {

        for(j = 1; j <= count; j++)
            printf(" ");
            count--;
            for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
            printf("\n");
    }
    count = 1;
    for (i = 1; i <= number - 1; i++)
    {
        for(j = 1; j <= count; j++)
        printf(" ");
        count++;
        for(j = 1; j <= 2 * (number - i) - 1; j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
