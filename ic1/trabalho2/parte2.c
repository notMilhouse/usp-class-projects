#include <stdio.h>


void defineSet(int *setGiven, int setSize); //reads the elements of a given set
void defineIntersection(int *setA, int setASize, int *setB, int setBSize, int *setsIntersection, int setsIntersectionSize); //finds the intersection between 2 given sets A and B
int isAlreadyTested(int setElement, int *setGiven); //tests if a given element of a set has already been tested due to value repetition
int isElementInSet(int element, int *setGiven); //tests if a given element belongs to a set
void showSet(int *setGiven); //prints the elements of a set 


int main(){
	int n,m,l;
	int i, j, k = 0, isTested = 0;

	printf("Insert the number of elements for the A and B sets, respectively");
	scanf("%d%d", &n, &m);

	int aSet[n], bSet[m];
	
	for(i = 0; i < n; i++){
		scanf("%d", (aSet + i));
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d", (bSet + i));
	}

	l = (m > n) ? m : n;
	int intersectionSet[l];

	
	for(i = 0; i < n; i++){
		for(j = i - 1; j >= 0; j--){
			if(aSet[j] == aSet[i]){
				printf("Tested already");
				isTested = 1;
				break;
			} else{
				isTested = 0;
			}
		}
		if(isTested == 1) continue;

		for(j = 0; j < m; j++){
			if(aSet[i] == bSet[j]){
				intersectionSet[k] = aSet[i];
				k++;
				break;
			}
		}
	}
	for(i = 0; i < k; i++){
		printf("%d ", intersectionSet[i]);
	}
	printf("\n");


	return 0;
}