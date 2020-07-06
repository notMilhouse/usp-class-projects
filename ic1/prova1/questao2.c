/*
    29 de Junho de 2020
    Prova 1 Questao 2
    Gabriel Carvalho Silva 11932438
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createsHashMap(short *hashMap){
    int i;
    short inConsonantIntervals = 0, isUpperCaseConsonant = 0, isLowerCaseConsonant = 0;
    /*Basically the hashmap hold indexes in the range of the ascii table's elements and then if the index equals the decimal value of a consonant, the hashmap[i] element receives 1 (true)*/
    for(i = 0; i < 256; i++){
        /*
            ASCII Table intervals with consonants
            [66,68]
            [70,72]
            [74,78]
            [80,84]
            [86,90]

            [98,100]
            [102,104]
            [106,110]
            [112,116]
            [118,122]
        */

        isUpperCaseConsonant = ((i >= 66) && (i <= 68)) || ((i >= 70) && (i <= 72)) || ((i >= 74) && (i <= 78)) || ((i >= 80) && (i <= 84)) || ((i >= 86) && (i <= 90));

        isLowerCaseConsonant = ((i >= 98) && (i <= 100)) || ((i >= 102) && (i <= 104)) || ((i >= 106) && (i <= 110)) || ((i >= 112) && (i <= 116)) || ((i >= 118) && (i <= 122));

        inConsonantIntervals = isUpperCaseConsonant || isLowerCaseConsonant;

        if(inConsonantIntervals) *(hashMap + i) = 1;
    }
}

void printSentenceConsonants(char *sentence, short *consonantMap){
    int i;

    /*the decimal value of the character in sentence[i] will serve as the index of the hashmap element which the value equals 1 if sentence[i] is equals a consonant in the ascii table*/
    for(i = 0; *(sentence + i) != '\0'; i++){
        if(consonantMap[*(sentence + i)]){
            printf("%c", *(sentence + i));
        }
    }
    printf("\n");
}

int main(){
    /*definition of the hash map - consonantMap[i] = 1 (true) where i equals the decimal value of a consonant in the ASCII table */
    short consonantMap[256] = {0};
    createsHashMap(consonantMap);

    char sentence[1024];
    gets(sentence);

    printSentenceConsonants(sentence, consonantMap);

    return 0;
}