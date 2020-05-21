#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    double x1, x2;

    printf("Insira os valores dos coeficientes a, b e c, respectivamente: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    double Delta = pow(b, 2) - (4 * a * c);

    if (Delta >= 0)
    {
        x1 = ((-1) * b + (sqrt(Delta))) / 2.0;
        x2 = ((-1) * b - (sqrt(Delta))) / 2.0;

        printf("As raizes sao\nX1=%.2lf\nX2=%.2lf\n\n", x1, x2);
    }else{
        printf("As raizes sao complexas\n\n");
    }

    return 0;

}