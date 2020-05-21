#include <stdio.h>
#include <string.h>

#define length 7

int main(){
	char nome[length];
	int i;
	
	printf("Insira seu nome: ");
	
	scanf("%s", &nome);
	
	for(i = length-1; i >= 0; i--){
		printf("%c", nome[i]);
	}
	printf("\n");

	return 0;
}
