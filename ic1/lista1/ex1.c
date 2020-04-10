/*Exercicio 1 da Lista 1*/
/*Gabriel Carvalho Silva*/

#include <stdio.h>

int main(){

	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	
	if (a+b < c) printf("A soma de a e b e menor que c");
	else if (a+b > c) printf("A soma de a e b e maior que c");
	else printf("A soma de a e b e igual a c"); 


	return 0;
}
