// program to check if it's a leap year or not

#include <stdio.h>
int main()
{
    int yr;
    printf("enter the year ");
    scanf("%d", &yr);
    if (yr%4==0){printf("leap year");}
    else {printf("not a leap year");}
}