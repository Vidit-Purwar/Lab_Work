// program in C to calculate rectangle's area and perimeter using height & width 

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the height of the rectangle ");
    scanf("%d",&a);
    printf("enter the width of the rectangle ");
    scanf("%d",&b);
    printf("\nthe perimeter of the rectangle is %d", 2*(a+b));
    printf("\nthe area of the rectangle is %d ", a*b);
}