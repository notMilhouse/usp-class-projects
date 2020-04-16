#include <stdio.h>

int main(){

    double notaParcial1, notaParcial2;
    scanf("%lf%lf", &notaParcial1, &notaParcial2);

    double media = (2*notaParcial1 + 3*notaParcial2)/5.0;

    if(media >= 5){
        printf("Aprovado\n");
    }else{
        if (media >= 3){
            printf("Recuperacao\n");
        } else{
            printf("Reprovado\n");
        }
    }


    return 0;
}