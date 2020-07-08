/*
    6 de Julho de 2020
    Prova 2 Questao 2
    Gabriel Carvalho Silva 11932438
*/


#include <stdio.h>

#define NUM_ELEMENTS 100
#define MULTIPLIER 11


int multiples(int set[NUM_ELEMENTS], int multiplier);

int main(){

    int X[NUM_ELEMENTS];
    int i;

    /*gets array elements from user*/
    for(i = 0; i < NUM_ELEMENTS; i++) scanf("%d", &X[i]);

    /*receives the returned number of multiples*/
    int numMultiples = multiples(X, MULTIPLIER);

    printf("The number of multiples of %d in the X set is: %d\n", MULTIPLIER, numMultiples);

    return 0;
}

int multiples(int set[NUM_ELEMENTS], int multiplier){
    int i, countMultiples = 0;
    
    /*every time a multiple is found 1 is added to the counter of multiples*
    /*to find a multiple, each element is divided by the multiplier and it will be said to be a multiple if the remainder equals 0*/
    for(i = 0; i < NUM_ELEMENTS; i++){
        if(!(set[i] % multiplier)) countMultiples++;
    }

    return countMultiples;
}