/*
    Trabalho 1 Parte 2
    Gabriel Carvalho Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); /*Gera a semente para o numero aleatorio*/
    int numSecreto = rand() % 101; /*Declaracao do numero a ser adivinhado*/
    printf("o numero secreto eh %d\n", numSecreto);
    
    int palpite, tentativas = 1;

    printf("Um numero secreto de 0 a 100 foi escolhido!\nDescubra qual numero eh dando palpites!\n");
    do
    {
        printf("De um palpite: ");
        scanf("%d", &palpite);

        if(palpite != numSecreto){
            tentativas++;
            if(palpite > numSecreto){
                printf("O numero secreto eh menor que o seu palpite!\n");
            } else{
                printf("O numero secreto eh maior que o seu palpite!\n");
            }
        
        }

    } while (palpite != numSecreto);

    printf("\nParabens voce acertou o numero secreto!\nNumero de tentativas: %d\n\n", tentativas);
    
    return 0;
}
