
/*Riya Gharat                   03/03/2015
  N00901846

  5.59
  This program is a simple guessing game. The computer generates a random
  number between 1 and 20. The user has 5 tries to guess the number. The
  program can tell the user if it is greater than, less than, or equal to
  the number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Declarations
void guessTheNum(int a);

// Declare Global Variables
int randomNum;

int main(){  // main

// Local Variables
        int userInput;

        srand(time(NULL));
        randomNum = (rand() % 20) +1;

        printf("I am thinking of a number between 1 and 20.\n");
        printf("Can you guess what it is?        ");
        scanf("%d", &userInput);

// Calling Function
        guessTheNum(userInput);

        return 0;
}  //end main

void guessTheNum(int a){   // guessTheNum

// Local Variables
        for(int i = 0; i < 4 || a == randomNum; i++){
                if(a > randomNum){
                        printf("Your guess is high. Try again:   ");
                        scanf("%d", &a);

                }else if(a < randomNum){
                        printf("Your guess is low. Try again:    ");
                        scanf("%d", &a);

                }else if(a == randomNum){
                        printf("\nCongratulations! You did it!\n");
                        break;
                }
                if(i == 3){
                        printf("Sorry. The number was %d.\n", randomNum);
                        printf("You should have gotten it by now.\n");
                        printf("Better luck next time.\n");
                        break;
                }
        }
}  // end guessTheNum
