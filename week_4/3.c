// program to check whether a given number is even or odd 

#include <stdio.h>
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    a = a%2;
    if (a==0)
    {printf("number is even ");}
    else
    {printf("number is odd ");}
}
