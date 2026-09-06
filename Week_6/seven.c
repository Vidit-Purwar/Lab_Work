#include <stdio.h>
int main()
{
int a;
int rows;
printf("enter no. of rows ");
scanf("%d", &a);
rows = (a % 2 == 0) ? a/2 : (a+1)/2;

// USING FOR LOOP //
printf("\nUSING FOR LOOP");
for (int i = 1; i <= rows; i++){
    printf("\n");
    for (int w = 1; w <= a; w++){
        if (a % 2 != 0){
            if (w <= ((a+1)/2) - i || w >= ((a+1)/2)+i){
                printf("  ");
            }
            else {printf("* ");}
        }
        else if (a % 2 == 0){
            if (w < (a/2) - i + 1 || w > (a/2) + i){
                printf("  ");
            }
            else {printf("* ");}
        }
    }
}

// USING WHILE LOOP //
printf("\n\nUSING WHILE LOOP");
int c = 1;
while(c <= rows){
    printf("\n");
    int b = 1;
    while (b <= a)
    {
        if (a % 2 != 0){
            if (b <= ((a+1)/2) - c || b >= ((a+1)/2)+c){
                printf("  ");
            }
            else {printf("* ");}
        }
        else if (a % 2 == 0){
            if (b < (a/2) - c + 1 || b > (a/2) + c){
                printf("  ");
            }
            else {printf("* ");}
        }
        b++;
    }
    c++;    
}

// USING DO WHILE LOOP //
printf("\n\nUSING DO WHILE LOOP");
int h = 1;
do{
    printf("\n");
    int j = 1;
    do {
        if (a % 2 != 0){
            if (j <= ((a+1)/2) - h || j >= ((a+1)/2)+h){
                printf("  ");
            }
            else {printf("* ");}
        }
        else if (a % 2 == 0){
            if (j < (a/2) - h + 1 || j > (a/2) + h){
                printf("  ");
            }
            else {printf("* ");}
        }
        j++;
    }while(j <= a);
h++;
}while(h <= rows);
}