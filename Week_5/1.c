// program to input a number and check positive, negative or zero using switch case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, check;
    
    printf("enter a number : ");
    scanf("%d",&num);
    
    check = abs(num)/num;
    
    switch (check)
    {
    case (-1):
        printf("negative number\n");
        break;
    case (1):
        if (num != 0) {printf("positive number\n");
        }
        else {
            printf("neither positive nor negative");
        }
        break;

    default:
        break;
    }
}
