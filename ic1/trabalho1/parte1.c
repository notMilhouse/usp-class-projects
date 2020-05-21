/*
	Trabalho 1 Parte 1
	Gabriel Carvalho Silva
*/

#include <stdio.h>
#include <math.h>


int main(){
	
	int usrOption; /*Variable to hold the selected menu option*/
	int isOperandsDefined = 0; /*Variable for boolean test to know whether the user entered the operands values or not*/
	int i; /*just an auxiliary variable for counting*/
	double operands[5] = {0}; /*An array containing the operands*/
	
	/*program loop, exits when usrOption equals 0*/
	do{

		/*Menu*/
		puts("\n\n[1] - Define the operands values"); 
		puts("[2] - Simple Mean");
		puts("[3] - Weighted Mean");
		puts("[4] - Standard Deviation");
		puts("[5] - Biggest Number");
		puts("[6] - Smallest Number");
		puts("[0] - Finish the application");
		printf("Choose one of the options above: ");
		scanf("%d", &usrOption);

		/*Operations*/

		switch (usrOption)
		{
			/*Finishes the application*/
			case 0:
				break;
			
			/*Define values for the operands*/
			case 1:
				
				printf("\nInsert the values for the operands: ");
				for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

				isOperandsDefined = 1;
				
				break;
			
			/*Simple Mean*/
			case 2:
			
				if(isOperandsDefined == 1){
					/*If the operands are already defined by the user, the program will just perform the operation*/
					double mean, sum = 0;
					for(i = 0; i < 5; i++) sum += operands[i];
					mean = sum / 5.0;

					printf("\nThe Simples Mean is: %.2lf\n", mean);
				} else{
					/*If the operands are not defined, then the application requests the user to do so*/

					printf("\nInsert the values for the operands: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1; /*Define as True for possible future operations*/

					/*And afterwards performs the operation*/
					double mean, sum = 0;
					for(i = 0; i < 5; i++) sum += operands[i];
					mean = sum / 5.0;

					printf("\nThe Simples Mean is: %.2lf\n", mean);
				}
			
				break;
			
			/*Weighted Mean*/
			case 3:
				if(isOperandsDefined == 1){
					/*If the operands are already defined by the user, the program will just perform the operation*/
					double weights[5] = {0}, mean, sumOperandsTimesWeights = 0, sumWeights = 0;
					printf("Insert the values for the weights, respectively: ");
					for(i = 0; i < 5; i++) scanf("%lf", &weights[i]);
					
					for(i = 0; i < 5; i++) sumWeights += weights[i];
					for(i = 0; i < 5; i++)
						sumOperandsTimesWeights += operands[i] * weights[i]; /*sum of the factors of the mean, where each factor is an operand times its weight*/

					mean = sumOperandsTimesWeights / sumWeights;

					printf("\nThe Weighted Mean is: %.2lf\n", mean);
					

				} else{
					/*If the operands are not defined, then the application requests the user to do so*/

					printf("\nInsert the values for the operands: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1; /*Define as True for possible future operations*/

					/*And afterwards performs the operation*/
					double weights[5] = {0}, mean, sumOperandsTimesWeights = 0, sumWeights = 0;
					printf("Insert the values for the weights, respectively: ");
					for(i = 0; i < 5; i++) scanf("%lf", &weights[i]);
					
					for(i = 0; i < 5; i++) sumWeights += weights[i];
					for(i = 0; i < 5; i++) sumOperandsTimesWeights += operands[i] * weights[i]; /*sum of the factors of the mean, where each factor is an operand times its weight*/

					mean = sumOperandsTimesWeights / sumWeights;

					printf("\nThe Weighted Mean is: %.2lf\n", mean);
				}

				break;

			/*Standard Deviation*/
			case 4:
				if(isOperandsDefined == 1){
					/*If the operands are already defined by the user, the program will just perform the operation*/
					double stdDeviation, sumQrtDifference = 0, media, soma = 0;
					
					/*The 'for' loop calculates the mean of the dataset*/
					for(i = 0; i < 5; i++) soma += operands[i];
					media = soma / 5.0;

					/*Calculation of the sum of the squared differences between each operand and the mean*/

					for(i = 0; i < 5; i++) sumQrtDifference += pow((operands[i]-media),2);
					
					stdDeviation = sqrt(sumQrtDifference/4.0); /*Following the formula of the sample standard deviation, the denominator is given by the number of elements in the dataset minus 5. Therefore, 5-1 = 4*/

					printf("\nThe Standard Deviation is: %.2lf\n", stdDeviation);


				} else{
					/*If the operands are not defined, then the application requests the user to do so*/

					printf("\nInsert the values for the operands: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1; /*Define as True for possible future operations*/

					/*And afterwards performs the operation*/
					double stdDeviation, sumQrtDifference = 0, media, soma = 0;
					/*calculo da media*/
					for(i = 0; i < 5; i++) soma += operands[i];
					media = soma / 5.0;

					/*Calculation of the sum of the squared differences between each operand and the mean*/

					for(i = 0; i < 5; i++) sumQrtDifference += pow((operands[i]-media),2);

					stdDeviation = sqrt(sumQrtDifference / 4.0); /*Following the formula of the sample standard deviation, the denominator is given by the number of elements in the dataset minus 5. Therefore, 5-1 = 4*/

					printf("\nThe Standard Deviation is: %.2lf\n", stdDeviation);
				}

				break;

			/*Biggest Number*/
			case 5:
				if(isOperandsDefined == 1){
					/*If the operands are already defined by the user, the program will just perform the operation*/
					double biggestNumber = operands[0];

					/*the first operand in the array will be compared to the other operands until a bigger one is found, this operand will replace the first operand and be compared to the next operands repeating the process*/
					for(i = 0; i < 5; i++)  
						if(operands[i] > biggestNumber) 
							biggestNumber = operands[i];

					printf("\nThe Biggest Number is: %.2lf\n", biggestNumber);
				} else{
					/*If the operands are not defined, then the application requests the user to do so*/

					printf("\nInsert the values for the operands: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1; /*Define as True for possible future operations*/

					/*And afterwards performs the operation*/
					double biggestNumber = operands[0];
					
					/*the first operand in the array will be compared to the other operands until a bigger one is found, this operand will replace the first operand and be compared to the next operands repeating the process*/
					for(i = 0; i < 5; i++)  
						if(operands[i] > biggestNumber) 
							biggestNumber = operands[i];

					printf("\nThe Biggest Number is: %.2lf\n", biggestNumber);
				}

				break;
			
			/*Smallest Number*/
			case 6:
				if(isOperandsDefined == 1){
					/*If the operands are already defined by the user, the program will just perform the operation*/
					double smallestNumber = operands[0];

					/*the first operand in the array will be compared to the other operands until a bigger one is found, this operand will replace the first operand and be compared to the next operands repeating the process*/
					for(i = 0; i < 5; i++)  
						if(operands[i] < smallestNumber) 
							smallestNumber = operands[i];

					printf("\nThe Smallest Number is: %.2lf\n", smallestNumber);
				} else{
					/*If the operands are not defined, then the application requests the user to do so*/

					printf("\nInsert the values for the operands: ");
					for(i = 0; i < 5; i++) scanf("%lf", &operands[i]);

					isOperandsDefined = 1; /*Define as True for possible future operations*/

					/*And afterwards performs the operation*/
					double smallestNumber = operands[0];
					
					/*the first operand in the array will be compared to the other operands until a bigger one is found, this operand will replace the first operand and be compared to the next operands repeating the process*/
					for(i = 0; i < 5; i++)  
						if(operands[i] < smallestNumber) 
							smallestNumber = operands[i];

					printf("\nThe Smallest Number is: %.2lf\n", smallestNumber);
				}

				break;
			
			/*Any value other than those defined in the menu will lead the user back to the menu*/
			default:
				printf("\n\aOpcao invalida! Voltando ao menu...\n\n");
				break;
		}

		
	}while(usrOption != 0); /*evaluates if the program should continue*/

	return 0; /*Execution Endpoint*/
}