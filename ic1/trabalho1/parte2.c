/*
    Trabalho 1 Parte 2
    Gabriel Carvalho Silva
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); /*Generates the seed for the random number*/
    int secretNumber = rand() % 101; /*Secret Number Declaration and Generation*/

    
    int usrGuess, usrAttempts = 1; /*a variable to store each guess the user makes and another for how many guesses the user makes*/

    /*Welcome message*/
    printf("A secret number between 0 and 100 was selected.\nTo win this game, find out which number it is!\n"); 
    
    /*The program loop. It only stops when the user manages to guess the secret number*/
    do
    {
        /*reads the user guess*/
        printf("Your guess: ");
        scanf("%d", &usrGuess);

        if(usrGuess != secretNumber){
            /*if the user miss the right number, the next attempt will be counted*/
            usrAttempts++;
            /*Then, a hint stating whether the secret number is smaller or greater than the guessed number will appear*/
            if(usrGuess > secretNumber){
                printf("The secret number is smaller than the one you guessed!Try again\n");
            } else{
                printf("The secret number is greater than the one you guessed!Try again\n");
            }
        
        }

    } while (usrGuess != secretNumber);

    printf("\nCongratulations, you guessed it right!\nNumber of attempts: %d\n\n", usrAttempts);
    
    return 0;
}
