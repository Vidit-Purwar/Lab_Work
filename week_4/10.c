// program to check validity of triangle

#include <stdio.h>
int main()
{
    float a,b,c;
    printf("enter the first side of the triangle ");
    scanf("%f%f%f", &a,&b,&c);
    if (a + b > c && b + c > a && c + a > b){
        printf("The triangle is VALID");
    }
    else {
        printf("The triangle is invalid");
    }
}