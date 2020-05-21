#include <stdio.h>

int main(){

	int n, k;
	int combinacao;
	
	int fatorialN = 1;
	int fatorialK = 1;
	int fatorialNK = 1;
	
	
	printf("Insira n e k");
	scanf("%d%d", &n, &k);

	
	int i;
	for(i=0;i<n;i++){
		fatorialN *= n--;		
	}
	for(i=0;i<k;i++){
		fatorialK *= k--;		
	}
	int nk = n-k;
	for(i=0;i<nk;i++){
		fatorialNK *= nk--;		
	}	
	
	combinacao = fatorialN/(fatorialK*fatorialNK);
	
	
	printf("Combinacao = %d\n", combinacao);
	
	
	

	return 0;
}
