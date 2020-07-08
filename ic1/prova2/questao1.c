/*
    6 de Julho de 2020
    Prova 2 Questao 1
    Gabriel Carvalho Silva 11932438
*/


#include <stdio.h>


int main(){

    int numbers[3], aux; /*Array with the elements and an auxiliary variable to hold values temporarily*/
    int i, j;
    
    for(i = 0; i < 3; i++) scanf("%d", &numbers[i]); /*get the elements from user input*/
    

    /*sort the elements by comparing each other*/
    if(numbers[0] > numbers[1]){
        aux = numbers[0];
        numbers[0] = numbers[1];
        numbers[1] = aux;
    }
    if(numbers[1] > numbers[2]){
        aux = numbers[1];
        numbers[1] = numbers[2];
        numbers[2] = aux;
    }
    /*compare first and second elements again in order to rearrange them if necessary*/
    if (numbers[0] > numbers[1]){
        aux = numbers[0];
        numbers[0] = numbers[1];
        numbers[1] = aux;
    }

    /*prints the elements in ascending order*/
    for(i = 0; i < 3; i++) printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}