#include <stdio.h>
int main()
{
    int num;
    int f_val, f_val1, f_val2;
    int l_val, l_val1, l_val2;
    
    printf("Enter the number ");
    scanf("%d", &num);

    int num1 = num;

    //USING FOR LOOP//
    printf("USING FOR LOOP ");
    for(int i = 1; num1 % 10 != 0; num1 /= 10, i++){
        if (i == 1){
            f_val = num1 % 10;
        }
        if (num1 < 10){
            l_val = num1;
        }
    }
    printf("\n%d + %d = %d ",f_val, l_val, f_val + l_val);

    //USING WHILE LOOP//
    num1 = num;
    printf("\nUSING WHILE LOOP");
    int y = 1;
    while (num1 % 10 != 0)
    {
        if (y == 1){
            f_val1 = num1 % 10;
        }
        y++;
        if (num1 < 10){
            l_val1 = num1;
        }
        num1 /= 10;    
    }
    printf("\n%d + %d = %d ",f_val1, l_val1, f_val1 + l_val1);

    //USING DO WHILE LOOP//
    int z = 1;
    num1 = num;
    printf("\nUSING DO WHILE LOOP");
    do{
        if (z == 1){
            f_val2 = num1 % 10;
        }
        z++;
        if (num1 < 10) {
            l_val2 = num1;
        }
        num1 /= 10;
    }while(num1 % 10 != 0);
    printf("\n%d + %d = %d ",f_val1, l_val1, f_val1 + l_val1);
}