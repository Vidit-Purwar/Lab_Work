// program to check if user is eligible for voting 

#include <stdio.h>
int main()
{
    int age;
    printf("enter age ");
    scanf("%d", &age);
    if (age >=18)
    {printf("you are eligible for voting");}
    else{printf("you are note eligible for voting");}
}
