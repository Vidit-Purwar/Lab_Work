// program to print percentage and provide grade sheet 

#include <stdio.h>
int main()
{
    int hin, cse, sst, eng, mat;
    float per;
    printf("enter marks in hindi \n");
    scanf("%d", &hin );
    printf("enter marks in computer science \n");
    scanf("%d", &cse);
    printf("enter marks in social sciences \n");
    scanf("%d", &sst);
    printf("enter marks in english \n");
    scanf("%d", &eng);
    printf("enter marks in mathematics \n");
    scanf("%d", &mat);
    per = (hin + cse + sst + eng + mat)/5.0;
    if ( per >= 90){printf("Grade : A\n");}
    if ( per >= 80 && per < 90){printf("Grade : B\n");}
    if ( per >= 70 && per < 80){printf("Grade : C\n");}
    if ( per >= 60 && per < 70){printf("Grade : D\n");}
    if ( per >= 40 && per < 60){printf("Grade : E\n");}
} 
