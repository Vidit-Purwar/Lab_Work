//C program to count total number of vowels and consonants in a string.

#include <stdio.h>
#include <string.h>

int main(){
    unsigned short int vowels = 0, consons = 0;
    char inp[101];

    fgets(inp, 100, stdin);
    unsigned short int len = strlen(inp);

    for (unsigned short int i = 0; i < len; i++){
        if ((int)inp[i] <= 122 && (int)inp[i] >= 97){
            inp[i] = (char)((int)inp[i] - 32); 
        }
    }
    

    for (unsigned short int i = 0; i < len; i++){
        if ((int)inp[i] == 65 || (int)inp[i] == 69 || (int)inp[i] == 73 || (int)inp[i] == 79 || (int)inp[i] == 85){
            vowels++;
        }
        else if ((int)inp[i] <= 90 && (int)inp[i] >= 65) {consons ++;}
    }

    printf("consonants: %d", consons);
    printf("\nvowels: %d", vowels);
}