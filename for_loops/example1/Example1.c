//Displaying values in an array using for loop
#include <stdio.h>

int main()
{
    int i;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    for(i = 0; i<8; i++)
    {
        printf("%d\n", numbers[i]);
    }
}
