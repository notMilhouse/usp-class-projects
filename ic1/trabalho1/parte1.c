/*
	Trabalho 1 Parte 1
	Gabriel Carvalho Silva
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int usrOption, isOperandsDefined = 0, i;
	double operands[5];
	
	/*program loop*/
	do{

		/*Menu*/
		puts("\n\n[1] - Inserir valores para calculo");
		puts("[2] - Media Simples");
		puts("[3] - Media Ponderada");
		puts("[4] - Desvio Padrao");
		puts("[5] - Maior Numero");
		puts("[6] - Menor Numero");
		puts("[0] - Encerrar programa");
		printf("Escolha uma das operacoes acima: ");
		scanf("%d", &usrOption);

		/*Operacoes*/

		switch (usrOption)
		{
			/*Encerrar o programa*/
			case 0:
				break;
			
			/*inserir valores*/
			case 1:
				
				printf("\nInsira os valores dos operandos: ");
				for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

				isOperandsDefined = 1;
				
				break;
			
			/*Media simples*/
			case 2:
			
				if(isOperandsDefined == 1){
					/*basta efetuar a operacao*/
					double media, soma = 0;
					for(i = 0; i < 5; i++) soma += operands[i];
					media = soma / 5.0;

					printf("\nMedia Simples eh: %.2lf\n", media);
				} else{
					/*pedir valores antes de calcular*/

					printf("\nInsira os valores dos operandos: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1;

					/*agora sim efetua a operacao*/
					double media, soma = 0;
					for(i = 0; i < 5; i++) soma += operands[i];
					media = soma / 5.0;

					printf("\nMedia Simples eh: %.2lf\n", media);
				}
			
				break;
			
			/*Media Ponderada*/
			case 3:
				if(isOperandsDefined == 1){
					/*basta efetuar a operacao*/
					double weights[5], media, somaFatores = 0, somaPesos = 0;
					printf("Insira os pesos dos operandos, respectivamente: ");
					for(i = 0; i < 5; i++) scanf("%lf", &weights[i]);
					
					for(i = 0; i < 5; i++) somaPesos += weights[i];
					for(i = 0; i < 5; i++) somaFatores += operands[i] * weights[i];

					media = somaFatores / somaPesos;

					printf("\nMedia Ponderada eh: %.2lf\n", media);
					

				} else{
					/*pedir valores antes de calcular*/

					printf("Insira os valores dos operandos: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1;

					/*agora sim efetua a operacao*/
					double weights[5], media, somaFatores = 0, somaPesos = 0;
					printf("Insira os pesos dos operandos, respectivamente: ");
					for(i = 0; i < 5; i++) scanf("%lf", &weights[i]);
					
					for(i = 0; i < 5; i++) somaPesos += weights[i];
					for(i = 0; i < 5; i++) somaFatores += operands[i] * weights[i];

					media = somaFatores / somaPesos;

					printf("\nMedia Ponderada eh: %.2lf\n", media);
				}

				break;

			/*Desvio Padrao*/
			case 4:
				if(isOperandsDefined == 1){
					/*basta efetuar a operacao*/
					double stdDeviation, sumQrtDifference = 0, media, soma = 0;
					/*calculo da media*/
					for(i = 0; i < 5; i++) soma += operands[i];
					media = soma / 5.0;

					/*calculo da soma dos quadrados das diferencas entre operands[i] e media*/

					for(i = 0; i < 5; i++) sumQrtDifference += pow((operands[i]-media),2);
					
					stdDeviation = sqrt(sumQrtDifference/4);

					printf("\nDesvio Padrao eh: %.2lf\n", stdDeviation);


				} else{
					/*pedir valores antes de calcular*/

					printf("Insira os valores dos operandos: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1;

					/*agora sim efetua a operacao*/
					double stdDeviation, sumQrtDifference = 0, media, soma = 0;
					/*calculo da media*/
					for(i = 0; i < 5; i++) soma += operands[i];
					media = soma / 5.0;

					/*calculo da soma dos quadrados das diferencas entre operands[i] e media*/

					for(i = 0; i < 5; i++) sumQrtDifference += pow((operands[i]-media),2);
					
					stdDeviation = sqrt(sumQrtDifference/4.0);

					printf("\nDesvio Padrao eh: %.2lf\n", stdDeviation);
				}

				break;

			/*Maior Numero*/
			case 5:
				if(isOperandsDefined == 1){
					/*basta efetuar a operacao*/
					double maior;
					
					for(i = 0; i < 5; i++)  
						if(operands[i] > maior) 
							maior = operands[i];

					printf("\nO maior eh: %.2lf\n", maior);
				} else{
					/*pedir valores antes de calcular*/

					printf("Insira os valores dos operandos: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1;

					/*agora sim efetua a operacao*/
					double maior = operands[0];
					
					for(i = 0; i < 5; i++)  
						if(operands[i] > maior) 
							maior = operands[i];

					printf("\nO maior eh: %.2lf\n", maior);
				}

				break;
			
			/*Menor Numero*/
			case 6:
				if(isOperandsDefined == 1){
					/*basta efetuar a operacao*/
					double menor = operands[0];

					for(i = 0; i < 5; i++)  
						if(operands[i] < menor) 
							menor = operands[i];

					printf("\nO menor eh: %.2lf\n", menor);
				} else{
					/*pedir valores antes de calcular*/

					printf("Insira os valores dos operandos: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1;

					/*agora sim efetua a operacao*/
					double menor = operands[0];

					for(i = 0; i < 5; i++)  
						if(operands[i] < menor) 
							menor = operands[i];

					printf("\nO menor eh: %.2lf\n", menor);
				}

				break;
			
			/*Qualquer numero que nao os do menu*/
			default:
				printf("\n\aOpcao invalida! Voltando ao menu...\n\n");
				break;
		}

		
	}while(usrOption != 0);

	return 0;
}
