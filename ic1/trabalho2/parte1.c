#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototipo da função
int AcharSubString(char *SuperString, char *SubString);
void Sanitizer(char *string);

int main(void) 
{
  char Primeira[9999] = "estava esperando esta estelar espera que es dessa estrela";
  //string principal
  char Segunda[999] = "       essa     ";
  //substring a ser encontrada na string principal
  
  //retira os espaços q talvez existam antes e depois da string
  Sanitizer(Segunda);
  printf("'%s'\n", Segunda);
  
  printf("Local %d\n", AcharSubString(Primeira, Segunda));
  //printa o local que o indice da substring dentro da string principal ou zero se não for encontrada
  return 0;
}

void Sanitizer(char *string)
{
	short Finder[256] = {0};
	Finder[' '] = 1;
	char cleansedString[999];
	int i;
	int jumpIndex = 0;
	int spaceStreak = 0;
	for(i = 0; *(string + i + jumpIndex) != '\0'; i++)
	{
		if(!Finder[*(string + i + jumpIndex)])
		{
			*(cleansedString + i) = *(string + i + jumpIndex);
			spaceStreak = 0;
		}
		else
		{
			if(i == 0)
			{
				jumpIndex++;
        i--;
			}
			else
			{
        *(cleansedString + i) = *(string + i + jumpIndex);
				spaceStreak++;
			}
		}
	}

  int LastIndex = i;
	for(i = 0; i < LastIndex; i++)
	{
		*(string + i) = *(cleansedString + i);
	}
	if(spaceStreak > 0)
	{
		*(string + LastIndex - spaceStreak) = '\0';
	}
}

//função tem entrada os ponteiros do indice 0 da string principal ou superstring e da substring repectivamente
//e retorna o local na superstring em que foi encontrada a substring ou zero
int AcharSubString(char *SuperString, char *SubString)
{
	int Stack;
	//Stack[0] indica se a substring foi encontrada na superstring
	//stack[1] indica o indice atual dentro da superstring
	
	//laço que navega pelos indices na superstring
	for(int i = 0; *(SuperString + i) != '\0'; i++)
	{
		Stack = 1;
		//assumimos que a substring será encontrada no indice atual
		
		//laço que navega pelos indices da substring
		for(int j = 0; *(SubString + j) != '\0'; j++)
		{
        //printf("%d: %c  %c\n", i+j, *(SubString + j), *(SuperString+i+j));
		
			//caso o indice atual da substring não seja igual o indice atual da superstring
			if(*(SuperString+i+j) != *(SubString+j)) 
			{
				//sabemos que a substring não foi encontrada no indice atual da superstring
				Stack = 0;
				
				//não precisamos continuar navegando pelos indices da substring pois
				//já sabemos que a substring não condiz com a superstring do indice atual
				break;
			}
			
		}
		//se a variavel ainda for 1 sabemos que todos os caracteres da superstring no indice atual
		//são iguais aos caracteres da substring, portanto achamos o indice correspondente
		if(Stack)
		{
			//nesse caso retornamos o indice atual da superstring
			return i;
		}
	}
	//se nada for encontrado retornamos 0
	return 0;
}
