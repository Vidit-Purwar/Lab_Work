// C Program to remove all Characters in a String except Alphabets

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    char *inp = malloc(1024);
    //This creates 1024 bytes space in heap memory at address stored in inp

    //now if 1024 bytes is not available in heap, then inp will become address 0 or NULL
    if (inp == NULL){
        fprintf(stderr, "allocation failed\n");
        return 1;
    }
    
    fgets(inp, 1023, stdin);
    //This reads capped data from input stream and stores it in allocated address (inp)

    inp = realloc(inp, strlen(inp) + 1);
    //This reallocates the size of array just big enough to hold the string that was read

    for (int i = 0; inp[i] != '\0'; i++){
        if (inp[i] >= 'A' && inp[i] <= 'Z' || inp[i] >= 'a' && inp[i] <= 'z') {
            printf("%c", inp[i]);
        } else {
            printf(" ");
        }
    }

    free(inp);
    return 0;
}
