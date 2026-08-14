//progtam in c to break no. of days into years, months and days 

#include <stdio.h>
int main()
{
    int a,y,m,d;
    printf("enter the number of days ");
    scanf("%d",&a);
    y = (a-(a%365))/365;
    printf("number of years = %d\n", y);
    m = ((a-(365*y))-((a-(365*y))%30))/30;
    printf("number of months = %d\n", m);
    d = a-((30*m)+(365*y));
    printf("number of days = %d\n",d);
}
