#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int subStringPos(char *superString, char *subString){
    int posSubString, i, j;
    for(i = 0, j = 0; (superString + i) != "\0"; i++, j++){
        for (; (superString + j) != " " && (subString + j) != "\0"; j++)
        {
            /* if(*(superString + j) != *(subString + j)) break; */
            printf("%d", j);
        }
    }
    
}

int main(){


    subStringPos("teste", "tes");

    return 0;
}