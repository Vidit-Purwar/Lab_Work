// program to check whether the input character is vowel or consonant

#include <stdio.h>
int main()

{
    char a;
    char l[5] = {'a', 'e', 'i', 'o', 'u'};
    int isVowel = 0;
    char i;
    printf("enter the character ");
    scanf("%c", &a);
    for (i = 0; i < 5; i++){
        if (a == l[i]){
            isVowel = 1;
            break;
        }
    }
    if (isVowel)
        {printf("it is a vowel ");}
    else
        {printf("it is a consonant ");}
}