// program to determine increasing and decreasing order of numbers(pair)

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number of the pair: ");
    scanf("%d", &a);

    printf("Enter second number of the pair: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("The pair is in ascending order!");
    }
    else if (a > b)
    {
        printf("The pair is in descending order!");
    }
    else
    {
        printf("Both numbers are equal!");
    }

    return 0;
}