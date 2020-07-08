/*
    6 de Julho de 2020
    Prova 2 Questao 3
    Gabriel Carvalho Silva 11932438
*/


#include <stdio.h>

#define NUM_ELEMENTS 500

int areSetsEqual(int setA[], int setB[]);

int main()
{

    int setA[NUM_ELEMENTS], setB[NUM_ELEMENTS];
    int i;

    /*gets the elements of each set*/
    for (i = 0; i < NUM_ELEMENTS; i++)
        scanf("%d", &setA[i]);
    for (i = 0; i < NUM_ELEMENTS; i++)
        scanf("%d", &setB[i]);

    printf("%d\n", areSetsEqual(setA, setB));

    return 0;
}

int areSetsEqual(int setA[], int setB[])
{
    int i;

    /*if any element differs 0 is returned*/
    for (i = 0; i < NUM_ELEMENTS; i++)
        if (setA[i] != setB[i])
            return 0;
    /*if no element differs the function gets to this line and returns 1*/
    return 1;
}