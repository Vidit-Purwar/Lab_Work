// salary calculator 

#include <stdio.h>
int main()
{
    int slry, a;
    printf("enter basic salary ");
    scanf("%d", &slry);
    if (slry <= 10000){
        a = slry + 0.2*slry + 0.8*slry;
    }    
    if (slry >= 10001 && slry <=20000){
        a = slry + 0.25*slry + 0.9*slry;
    }
    if (slry >= 20001){
        a = slry + 0.3*slry + 0.95*slry;
    }
    printf("your gross salary is %d", a);
}