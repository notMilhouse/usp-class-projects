#include <stdio.h>

#define LENGTH 2
int main(){

	int A[LENGTH][LENGTH], B[LENGTH][LENGTH], M[LENGTH][LENGTH]={0}, linha, coluna, elemLinha;
	int N = LENGTH - 1;

	for(linha = 0; linha <= N; linha++)
		for(coluna = 0; coluna <= N; coluna++)
			scanf("%d", &A[linha][coluna]);
	
	for(linha = 0; linha <= N; linha++)
		for(coluna = 0; coluna <= N; coluna++)
			scanf("%d", &B[linha][coluna]);
	
	for(elemLinha = 0, linha = 0, coluna = 0; linha <= N;)
	{
		M[linha][elemLinha] += A[linha][coluna] * B[coluna][elemLinha];
		if(coluna == N)
		{
			printf("%d ", M[linha][elemLinha]);
			if (elemLinha == N)
			{
				printf("\n");
				linha++;
				elemLinha = 0;
			}else{
				elemLinha++;
			}
			coluna = 0;
			continue;
		}

		coluna++;
	}

	return 0;
}
