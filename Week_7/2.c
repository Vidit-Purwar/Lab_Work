// C program to find the length of the string without using the actual function

#include <stdio.h>
int main(){
    //in place of 8, can be any natural no.
    char inp[100];
    unsigned short int i = 0;

    printf("max size of input = %hu", sizeof(inp) - 1);
    printf("\nEnter string: ");

    fgets(inp, 100, stdin);

    while (inp[i] != '\0'){
        i++;
    }

    // if i becomes 0 then i - 1 become -1 which will print 65535 on terminal
    if (i >0 && inp[i - 1] == '\n'){
        printf("length of string = %hu", i - 1);
    } else {
        printf("length of string = %hu", i);
    }
}
