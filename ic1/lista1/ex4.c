#include <stdio.h>


int main()
{
    double salario, ferias, fgtsMensal, fgtsAnual, inss, transporte, total;
    printf("Insira o valor do salario: ");
    scanf("%lf", &salario);

    ferias = salario*4.0/3.0;
    fgtsMensal = salario*0.08;
    fgtsAnual = salario*12*0.08;
    inss = salario*0.08;
    transporte = salario*0.06;
    total = 12*(salario + fgtsMensal + inss + transporte) + fgtsAnual + ferias; 

    printf("Total: %lf", total);

    return 0;
}
