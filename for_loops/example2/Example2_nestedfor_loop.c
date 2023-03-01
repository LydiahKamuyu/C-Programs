//Displaying elements in a 2D rray using nested for loop
#include <stdio.h>

int main()
{
    int numbers[3][2] = { //2Dimentional Array
        {4, 5},
        {6, 7},
        {8, 9}
    };
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf(" %d", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}
