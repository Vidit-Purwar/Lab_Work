// program to operate single character by using switch statement.

#include <stdio.h>
int main()
{
    char a;
    printf("enter a character : ");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        printf("vowel\n");
        break;
    case 'e' :
        printf("vowel\n");
        break;
    case 'i' :
        printf("vowel\n");
        break;
    case 'o' :
        printf("vowel\n");
        break;
    case 'u' :
        printf("vowel\n");
        break;
    default:
        printf("consonant");
        break;
    }
}