/*program to print hollow mirrored inverted right triangle star pattern series of n
rows using for/while/do while loop.*/

#include <stdio.h>
int main()
{
    int rows;
    int y = 0;

    printf("Enter number of rows : ");
    scanf("%d",&rows);
    
    // FOR LOOP // 
printf("USING FOR LOOP\n");
    for (int i = 1; i <= rows; i++) {
        for (int t = 1; t < i; t++){
            printf(" ");
        }
        for (int o = 0; o <= rows - i; o++) {
            printf("*");
        }
        printf("\n");
    }
    // WHILE LOOP //
printf("USING WHILE LOOP\n");
    while (y < rows) { 
        int z = 0; 
        int spc = 0;
        while (spc < y) {
            printf(" ");
            spc++;
        }
        while (z < rows-y) {
            printf("*");
            z++;
        } 
        y++;
        printf("\n");
    }
    // DO WHILE LOOP //
printf("USING DO WHILE LOOP\n");
int a = 0;
do{
    int h = 0;
    int spc1 = 0;
    a++;
    do{
        printf("*");
        h++;
    }while(h <= rows - a);
    printf("\n");
    do{
        printf(" ");
        spc1++;
    }while(spc1 <a);
}while(a < rows);
}
