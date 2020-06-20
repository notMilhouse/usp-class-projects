#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Hello, do you want to find the intersection between two sets?\n\n");

	/*Define the sizes of the sets*/
	int A_setSize, B_setSize;

	printf("Insert the number of elements for the A and B sets, respectively: ");
	scanf("%d%d", &A_setSize, &B_setSize);

	/*Dynamic allocation of the sets*/
	int *A_set = (int *) calloc(A_setSize, sizeof(int));
	int *B_set = (int *) calloc(B_setSize, sizeof(int));
	int *intersectionSet = (int *) calloc((A_setSize < B_setSize) ? A_setSize : B_setSize, sizeof(int)); /*The max size of this set is the size of the smallest set between A and B, if smaller than that, will be shortened (see reference (I) in line 56) */

	/*Definition of the A and B sets*/
	int i;
	printf("Insert the %d elements for the A set: ", A_setSize);
	for(i = 0; i < A_setSize; i++){
		scanf("%d", (A_set + i));
	}

	printf("Insert the %d elements for the B set: ", B_setSize);
	for (i = 0; i < B_setSize; i++){
		scanf("%d", (B_set + i));
	}

	/*Finding the intersection elements*/
	int j, k = 0, isTested = 0;
	for(i = 0; i < A_setSize; i++){
		/*Garantees that there will be no repetitions by testing if an element has already been tested */
		for(j = i - 1; j >= 0; j--){
			if(A_set[i] == A_set[j]){
				isTested = 1;
				break;
			} else{
				isTested = 0;
			}
		}
		/*if the element has not yet been tested, then it will be compared to all elements in B*/
		if(!isTested){
			for(j = 0; j < B_setSize; j++){
				/*if a match is found, the value is added to the intersection set*/
				if(A_set[i] == B_set[j]){
					intersectionSet[k] = A_set[i];
					k++; /*the k variable holds the actual number of elements in the intersection*/
					break;
				}
			}
		}
	}

	/*(I) - the intersection set may now be resized so it uses only the needed space and dont have empty/unused indexes*/
	intersectionSet = (int *) realloc(intersectionSet, k * sizeof(int)); /*if k already equals the size of the set, nothing will change*/

	/*Now the interesection set is ready to be presented*/
	printf("\nThe intersection set will be: [");
	for(i = 0; i < k; i++){
		printf("%d", intersectionSet[i]);
		if(i < k -1) printf(", ");
	}
	printf("]\n");

	return 0;
}
