#include <stdio.h>
#include <string.h>
int main(){

	char frase[51];
	int i, espacos_branco = 0;
	
	printf("Insira uma frase de até 50 caracteres\n");
	gets(frase);
	
	for(i = 0; i < 51 && frase[i] != '\0'; i++)
		if(frase[i] != ' ')
			printf("%c", frase[i]);
			continue;
		espacos_branco++;
	printf("Espacos: %d\n", espacos_branco);



	return 0;
}
