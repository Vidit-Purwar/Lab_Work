//C Program to Find the Frequency of Characters in a String

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char inp[101]; 
    char *freqCap = calloc(26, 1);
    char *freqSmall = calloc(26, 1);

    if (freqCap == NULL){
        fprintf(stderr, "freqCap memory allocation failed");
    }
    if (freqSmall == NULL){
        fprintf(stderr, "freqSmall memory allocation failed");
    }

    fgets(inp, 100, stdin);
    unsigned short int len = strlen(inp);

    for(unsigned short int i = 0; i < len; i++){
        if((int)inp[i] <= 90 && inp[i] >= 65){
            freqCap[inp[i] - 65]++;
        }
        else if((int)inp[i] <= 122 && inp[i] >= 97){
            freqSmall[inp[i] - 97]++;
        }
    }

    printf("For capital letters : \n");
    for(unsigned short int i = 0; i <= 25; i++){
        if (freqCap[i]!=0){printf("%c : %d\n", i + 65, freqCap[i]);}
    }

    printf("For small letters : \n");
    for(unsigned short int i = 0; i <= 25; i++){
        if (freqSmall[i]!=0){printf("%c : %d\n", i + 97, freqSmall[i]);}
    }

    free(freqCap);
    free(freqSmall);
    return 0;
}