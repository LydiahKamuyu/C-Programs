// building a guessing game with only 4 chances to guess
#include <stdio.h>

int main() {
     int secretno = 10;
     int guess;
     int guesscount = 0; //the times user tries to guess secretno initial is 0.
     int guesslimit = 4; //no of times user can guess
     int outofguesses = 0; //tells whether user has any guesses left
     
     
     while(guess != secretno && outofguesses == 0){
         if(guesscount < guesslimit){
             printf("enter a number\n");
             scanf(" %d", &guess);
             guesscount++; 
             
         }else
         {
             outofguesses = 1; //breaks out of loop when outofguesses is no longer equal to 0. Run out of guesses
         }
     }
     if(outofguesses == 1)
     {
         printf("out of guesses\n");
     }else
     {
          printf("Hurry, You've Won\n");
     }
}
