/*
    6 de Julho de 2020
    Prova 2 Questao 4
    Gabriel Carvalho Silva 11932438
*/


#include <stdio.h>

#define NUM_ROWS 30
#define NUM_COLUMNS 40

void swapLines(int array[NUM_ROWS][NUM_COLUMNS]);

int main(){

    int array[NUM_ROWS][NUM_COLUMNS];
    int i, j;


    printf("\n Insert the array values: \n");
    for(i = 0; i < NUM_ROWS; i++)
        for(j = 0; j < NUM_COLUMNS; j++)
            scanf("%d", &array[i][j]);

    /*the array is transformed by passing a reference to its memory address*/
    swapLines(array);

    printf("\nThe new array is: \n");
    for(i = 0; i < NUM_ROWS; i++){
        for(j = 0; j < NUM_COLUMNS; j++)
            printf("%d ", array[i][j]);
        printf("\n");   
    }
    printf("\n");

    return 0;
}

void swapLines(int array[NUM_ROWS][NUM_COLUMNS]){
    int j, aux;

    /*for each column, the function will swap the element in the first line with the element in the second line*/
    for(j = 0; j < NUM_COLUMNS; j++){
        aux = array[0][j];
        array[0][j] = array[1][j];
        array[1][j] = aux;
    }
}