//swaping two string characters
#include <stdio.h>
#include <string.h>

int main()
{
   char x[15] = "milk";
   char y[15] = "coffee";
   char temp[15];
   
   strcpy(temp, x);
   strcpy(x, y);
   strcpy(y, temp);
   
   printf("X is : %s\n", x);
   printf("Y is : %s\n", y);
    return 0;
}
