/* 

program to print following pattern for user inputted number using for/while/do
while loop.
    *    
   * *
  *   *
 *     *
*********

*/

#include <stdio.h>
int main()
{
    int rows;
    int row1;

    printf("Enter no. of rows : ");
    scanf("%d",&rows);
    int copy_1 = rows;

    row1 = (rows % 2 == 0) ? copy_1/2 : (copy_1+1)/2;

    // FOR LOOP //
    printf("USING FOR LOOP");
    for (int i = 0; i < row1; i++){
        printf("\n");
        for (int h = 0; h <= copy_1; h++){
            if (rows % 2 == 0 && i != row1 - 1) {
                if (h == rows/2 - i|| h == (rows/2) +1 +i) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (rows % 2 != 0 && i != row1 - 1) {
                if (h == row1 - i || h == row1 + i){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (i == row1 - 1) {
                if (h == 0) {
                    printf(" ");
                }
                else 
                {printf("*");}
            }
        }
    }
    
    // WHILE LOOP //
    printf("\nUSING WHILE LOOP\n");
    int c = 0;
    while (c < row1)
    {
        printf("\n");
        int x = 0;
        while (x <=copy_1)
        {
            if (rows % 2 == 0 && c != row1 - 1) {
                if (x == rows/2 - c|| x == (rows/2) +1 +c) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (rows % 2 != 0 && c != row1 - 1) {
                if (x == row1 - c || x == row1 + c){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (c == row1 - 1) {
                if (x == 0) {
                    printf(" ");
                }
                else 
                {printf("*");}
            }
            x++;
        }
        c++;
    }

    // DO WHILE LOOP //
    printf("\nUSING DO WHILE LOOP\n");
    int t = 0;
    do {
        printf("\n");
        int y = 0;
        do {
            if (rows % 2 == 0 && t != row1 - 1) {
                if (y == rows/2 - t|| y == (rows/2) +1 +t) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (rows % 2 != 0 && t != row1 - 1) {
                if (y == row1 - t || y == row1 + t){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (t == row1 - 1) {
                if (y == 0) {
                    printf(" ");
                }
                else 
                {printf("*");}
            }
        y++;
        }while(y <= copy_1);
    t++;
    }while(t < row1);
}