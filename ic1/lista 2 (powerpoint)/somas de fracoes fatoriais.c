#include <stdio.h>

int main(){

	int n, i, j, fatorialJ;
	double sum = 0;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		fatorialJ = 1;
		for(j=1;j<=i;j++){
			fatorialJ *= j;
		}
		sum += (double)i/(double)fatorialJ;
	}

	printf("%lf\n", sum);

	return 0;
}
