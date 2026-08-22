/*program to create a simple calculator which performs addition, subtraction,
multiplication and division operations on two input numbers using switch case.*/

#include <stdio.h>
int main()
{
    int a,b;
    char opr;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("enter the operation (*,+,-,/) : ");
    scanf(" %c", &opr);

    switch (opr)
    {
    case '*':
        printf("%d", a*b);
        break;
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '/':
        if (b != 0) {
            printf("%d", a/b);
        }
        else{
            printf("Undefined");
        }
        break;
    default:
        break;
    }
}
