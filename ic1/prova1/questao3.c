/*
    29 de Junho de 2020
    Prova 1 Questao 3
    Gabriel Carvalho Silva 11932438
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c; /*the coeficients of the equation*/
    double delta;
    double x1, x2;

    scanf("%lf%lf%lf", &a, &b, &c); /*gets the coeficients from the user */

    delta = pow(b, 2) - 4*a*c; /* calculates the equation's delta */
    if(delta < 0){
        printf("No real roots!\n");
    }
    else if(!delta){ /*if delta equals 0, both roots have the same value*/
        x1 = -b/(2*a);
        printf("Both roots are equal to %.2lf", x1);
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Roots are:\n\tx1 =  %.2lf\n\tx2 = %.2lf\n", x1, x2);
    }

    return 0;

}
