// program to read an amount and break the amount into smallest possible number of bank notes 

#include <stdio.h>
int main()
{
    int x;
    printf("Input the amount: ");
    scanf("%d",&x);
    int b = x%100;
    printf("you have %d notes of 100\n", (x-b)/100);
    x = b;
    b = b%50;
    printf("you have %d notes of 50\n", (x-b)/50);
    x = b;
    b = b%20;
    printf("you have %d notes of 20\n", (x-b)/20);
    x = b;
    b = b%10;
    printf("you have %d notes of 10\n", (x-b)/10);
    x = b;
    b = b%5;
    printf("you have %d notes of 5\n", (x-b)/5);
    x = b;
    b = b%2;
    printf("you have %d notes of 2\n", (x-b)/2);
    x = b;
    b = b%1;
    printf("you have %d notes of 1\n", x);
}
  