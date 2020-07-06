/*
    29 de Junho de 2020
    Prova 1 Questao 4
    Gabriel Carvalho Silva 11932438
*/

#include <stdio.h>
#include <stdlib.h>

void maior_menor(int *set, int n, int *maior, int *menor)
{
    int i;

    *maior = *set;
    *menor = *set;

    /*compare all elements in the array*/
    for (i = 0; i < n; i++)
    {
        if (*(set + i) < *menor)
        {
            *menor = *(set + i);
        }
        else if (*(set + i) > *maior)
        {
            *maior = *(set + i);
        }
    }
}

int main(){

    int n, maior, menor; /*the number of elements in the array*/
    scanf("%d", &n);

    /*allocation of the set with n elements*/
    int *set = (int *) calloc(n, sizeof(int));

    /*gets the elements of the set from the user*/
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", (set + i));
    }

    maior_menor(set, n, &maior, &menor); /*defines the biggest and smallest values by reference*/
    printf("The biggest value in the set is %d and the smallest is %d\n", maior, menor);

    return 0;
}