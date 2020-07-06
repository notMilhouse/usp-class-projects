/*
    29 de Junho de 2020
    Prova 1 Questao 1
    Gabriel Carvalho Silva 11932438
*/

#include <stdio.h>

double sumCalc(int n){
    double sum = 0;
    int i;

    /*
        Calculates the sum, from the lower bound, 1, to the upper bound, n.
        The constants are represented with floating points in order to force casting double type before division (so precision is not lost).
    */
    for(i = 1; i <= n; i++) sum += (2.0*i)/(4.0*i-3.0);
    
    return sum;
}


int main(){

    int n; /*upper bound of summation*/ 
    scanf("%d", &n); /*gets the value of n from the user*/

    printf("%.4lf\n", sumCalc(n)); /*shows the result of the sum for a given n*/

    return 0;
}