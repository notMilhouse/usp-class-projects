#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< Updated upstream
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

=======
//Prototipo das funções
int AcharSubString(char *SuperString, char *SubString, int *tamSub);
void Sanitizer(char *string);
void Menu();
void FlagInterpreter(char *flagString, short *flags);
int isolatedFind(char *SuperString, char *SubString, int *tamSub);

int main(void) 
{
	Menu();
	return 0;
}

void Menu()
{
	char Primeira[9999];
	//string principal
	char Segunda[999];
	//substring a ser encontrada na string principal
	char FlagString[8] = {'\0'};
	//Guarda o Tamanho da SubString
	int TamSubString = 0;
	//Resultado
	int IndexNaString = 0;

  

	//Desenha GUI
	printf("==================================\n");
	printf("Bem Vindo\n");
	printf("Insira o texto a ser consultado [limite 9999 caracteres]: ");
	gets(Primeira); //lê string principal
	printf("\nInsira a palavra a ser pesquisada [limite 999 caracteres]: ");
	gets(Segunda); //lê subString

	//flags 0: -i, 1: -a
	short Flags[2] = {0};
  
	
	printf("\nInsira as flags de busca [Vázio ou {-i} isolada na string]: ");
	//lê string de flags
	gets(FlagString);
	FlagInterpreter(FlagString, Flags); //interpreta string de flags
	Sanitizer(Segunda); //limpa substring

	if(Flags[0]) // se a flag 0 estiver ativada
	{
		IndexNaString = isolatedFind(Primeira, Segunda, &TamSubString);
		//printa resultado
		printf("%d\n", IndexNaString);
	}
	else // se nenhuma flag estiver ativada
	{
		IndexNaString = AcharSubString(Primeira, Segunda, &TamSubString);
		//printa resultado
		printf("%d\n", IndexNaString);
	}
}

int isolatedFind(char *SuperString, char *SubString, int *tamSub)
{
	short Casos[256] = {0};
	Casos[' '] = 1;
	Casos[','] = 1;
	Casos['.'] = 1;
	Casos[':'] = 1;
	Casos[';'] = 1;
	Casos['\0'] = 1;
	//array invertido pra caracteres que não contam para o isolamento
	
	int IndexNaString = AcharSubString(SuperString, SubString, tamSub);
	short isIsolated = (!(IndexNaString - 1) || Casos[*(SuperString + IndexNaString - 2)]) && Casos[*(SuperString + IndexNaString + *(tamSub))];
	//só é isolado se possui um desses caracteres no antes e depois da string
	return isIsolated && IndexNaString ? IndexNaString : 0;
}

void FlagInterpreter(char *flagString, short *flags)
{
	//variavel de lixo
	int ThrowAway;
	
	//se achar flag -i
	if(AcharSubString(flagString, "-i", &ThrowAway))
	{
		*(flags + 0) = 1;
	}
	//se achar flag -a
	if(AcharSubString(flagString, "-a", &ThrowAway))
	{
		*(flags + 1) = 1;
	}
}

//Remove espaços antes e depois da substring
>>>>>>> Stashed changes
void Sanitizer(char *string)
{
	short Finder[256] = {0};
	Finder[' '] = 1;
	//array inverso pra achar espaço
	char cleansedString[999];
	//subString Limpa
	int jumpIndex = 0;
	//espaços no começo da string
	int spaceStreak = 0;
	//espaços no final da string
	int i;
	for(i = 0; *(string + i + jumpIndex) != '\0'; i++)
	{
		//se caracter atual não for espaço
		if(!Finder[*(string + i + jumpIndex)])
		{
			*(cleansedString + i) = *(string + i + jumpIndex);
			//copia caracter
			spaceStreak = 0;
			//reseta streak
		}
		else
		{
			//se for começo de string
			if(i == 0)
			{
				//atualiza valores
				jumpIndex++;
				i--;
			}
			else
			{
				*(cleansedString + i) = *(string + i + jumpIndex);
				//copia caracter
				spaceStreak++;
				//aumenta streak
			}
		}
	}
	
	int LastIndex = i;
	for(i = 0; i < LastIndex; i++)
	{
		//copia string limpa de volta para string
		*(string + i) = *(cleansedString + i);
	}
	//se a streak for maior que zero
	if(spaceStreak > 0)
	{
		//corta string colocando final de string
		*(string + LastIndex - spaceStreak) = '\0';
	}
}

//função tem entrada os ponteiros do indice 0 da string principal ou superstring e da substring repectivamente
//e retorna o local na superstring em que foi encontrada a substring ou zero
int AcharSubString(char *SuperString, char *SubString, int *tamSub)
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
				*(tamSub) = 0;
				
				//não precisamos continuar navegando pelos indices da substring pois
				//já sabemos que a substring não condiz com a superstring do indice atual
				break;
			}
			*(tamSub) = j;
			
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