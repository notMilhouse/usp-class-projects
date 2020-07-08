#include <stdio.h>

int findSubStr(char *str, char *subStr){
	
	short isMatch = 0; //holds 0 - false or 1 - true whether or not the substring is said to have been found 
	int posicao;
	
	int i, j;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == *subStr)
		{
			isMatch = 1;
			posicao = i + 1;
			for (j = 0; *(subStr + j) != '\0'; j++)
			{
				if (*(str + i + j) != *(subStr + j))
				{
					isMatch = 0;
					break;
				}
			}
		}
		if (isMatch != 0)
			break;
	}

	return isMatch ? posicao : 0;
}

int main(){

	char *str = "mmenor";
	char *subStr = "menor";

	

	printf("%s\n%s\n\n", str, subStr);char *str = "mmenor";
	char *subStr = "menor";
	printf("%d\n", findSubStr(str, subStr));

	return 0;
}
