#include <stdio.h>


int main(){

	int soma = 0, i, n, pa1, pa2, pa3;
	
	
	scanf("%d", &n);
	
	/*pa de razao 1 dado por 1 + 2 + 3 + ... + n*/
	for(i = 1; i <= n; i++){
		soma += i;
	}
	printf("%d\n", soma);
	soma = 0;
	
	/*pa de razao 2 dado por 1 + 3 + 5 + ... + (2n-1)*/
	for(i = 1; i <= n; i++){
		soma += (2*i - 1);
	}
	printf("%d\n", soma);
	soma = 0;
	
	/*sequencia dada por n*(-1)^(n-1)*/
	for(i = 1; i <= n; i++){
		if(i%2 != 0) soma += i;
		else soma += i * (-1);
	}
	printf("%d\n", soma);

	return 0;
}
