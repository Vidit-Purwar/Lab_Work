// program to find all roots of a Quadratic equation using switch case.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,dis;
    int check;

    printf("Enter the coeffecient of x^(2) : ");
    scanf("%f", &a);
    printf("\nEnter the coefficient of x : ");
    scanf("%f", &b);
    printf("\nEnter the constant term : ");
    scanf("%f", &c);

    dis = (b * b) - (4 * a * c);
    check = abs(dis)/dis;

    switch (check)
    {
    case (1 || 0):
        printf("\nfirst solution = %f, second solution = %f", (-b + sqrt(dis))/(2*a), (-b - sqrt(dis))/(2*a));
        break;
    case (-1):
        printf("\nfirst solution = %f + (%f)i, second solution = %f - (%f)i, where i = square root of -1", -b/(2*a), (sqrt((-1)*dis))/(2*a),  b/(2*a), -(sqrt((-1)*dis))/(2*a));
        break;
    default:
        break;
    }
}
