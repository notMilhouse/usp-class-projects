/*Exercicio 1 da Lista 1*/
/*Gabriel Carvalho Silva*/

#include <stdio.h>

int main(){

	int a,b,c;
	printf("Insira 3 valores a, b, e c");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a+b < c) printf("A soma de a e b e menor que c\n");
	else if (a+b > c) printf("A soma de a e b e maior que c\n");
	else printf("A soma de a e b e igual a c\n"); 


	return 0;
}
