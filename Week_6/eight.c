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
for (int i = 1; i < rows; i++){
    printf("\n");
    for (int w = 1; w <= a; w++){
        if (a % 2 != 0){
            if (w <= ((a+1)/2) - i || w >= ((a+1)/2)+i){
                printf("* ");
            }
            else {printf("  ");}
        }
        else if (a % 2 == 0){
            if (w < (a/2) - i + 1 || w > (a/2) + i){
                printf("* ");
            }
            else {printf("  ");}
        }
    }
}

for (int h = 1; h <= rows; h++){
    
    for (int j = 1; j <= a; j++){
        if (a % 2 != 0){
            if (j <= h-1 || j > a - h + 1){
                printf("* ");
            }
            else {printf("  ");}
        }
        else if (a % 2 == 0){
            if (h >= rows-1){break;}
            if (h == 1 && j == 1){printf("\n");}
            if (j <= h+1 || j > a-h-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
    }
    printf("\n");
}

// USING WHILE LOOP //
printf("\nUSING WHILE LOOP\n");
int i1 = 1;
while (i1 < rows){
    printf("\n");
    int w1 = 1;
    while (w1 <= a)
    {
        if (a % 2 != 0){
            if (w1 <= ((a+1)/2) - i1 || w1 >= ((a+1)/2)+i1){
                printf("* ");
            }
            else {printf("  ");}
        }
        else if (a % 2 == 0){
            if (w1 < (a/2) - i1 + 1 || w1 > (a/2) + i1){
                printf("* ");
            }
            else {printf("  ");}
        }
        w1++;
    }
    i1++;
}

int h1 = 1;
while (h1 <= rows)
{
    int j1 = 1;
    while (j1 <= a)
    {
        if (a % 2 != 0){
            if (j1 <= h1-1 || j1 > a - h1 + 1){
                printf("* ");
            }
            else {printf("  ");}
        }
        else if (a % 2 == 0){
            if (h1 >= rows-1){break;}
            if (h1 == 1 && j1 == 1){printf("\n");}
            if (j1 <= h1+1 || j1 > a-h1-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        j1++;
    }
    h1++;
    printf("\n");
}

// USING DO WHILE LOOP //
printf("\nUSING DO WHILE LOOP\n");
int i2 = 1;
do
{
    printf("\n");
    int w2 = 1;
    do
    {
        if (a % 2 != 0){
            if (w2 <= ((a+1)/2) - i2 || w2 >= ((a+1)/2)+i2){
                printf("* ");
            }
            else {printf("  ");}
        }
        else if (a % 2 == 0){
            if (w2 < (a/2) - i2 + 1 || w2 > (a/2) + i2){
                printf("* ");
            }
            else {printf("  ");}
        }
        w2++;
    } while (w2 <= a);
    i2++;
} while (i2 < rows);

int h2 = 1;
do
{
    int j2 = 1;
    do
    {
        if (a % 2 != 0){
            if (j2 <= h2-1 || j2 > a - h2 + 1){
                printf("* ");
            }
            else {printf("  ");}
        }
        else if (a % 2 == 0){
            if (h2 >= rows-1){break;}
            if (h2 == 1 && j2 == 1){printf("\n");}
            if (j2 <= h2+1 || j2 > a-h2-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        j2++;
    } while (j2 <= a);
    h2++;
    printf("\n");
} while (h2 <= rows);
}     
