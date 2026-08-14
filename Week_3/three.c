//program in C to calculate emplyee salary and print employee id

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter employee id ");
    scanf("%d", &a);
    printf("enter total worked hours in a month ");
    scanf("%f.2", &b);
    printf("enter the amount recieved per hour ");
    scanf("%f.2", &c);
    printf("emplyee id %d", a);
    printf("Salary US$ %f.2", b*c);
}
