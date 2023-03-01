// building a guessing game
#include <stdio.h>

int main() {
     int secretno = 5;
     int guess;
     
     
     while(guess != secretno){
         printf("enter a number");
         scanf(" %d", &guess);
     }
     printf("You win");

    return 0;
}
