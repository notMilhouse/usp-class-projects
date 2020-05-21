#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int subStringPos(char *superString, char *subString){
    int posSubString;
    for(; *superString != "\0"; superString++){
        for(;*superString != " "; superString++){
            if(*superString != *subString) break;
        }
    }

}

int main(){

    return 0;
}