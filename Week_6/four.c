#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number ");
    scanf("%d", &num);
    int num1 = num;

    //USING FOR LOOP//
    printf("USING FOR LOOP\n");
    for(int i = 2; num1 % i == 0; num1 /= 2){
        printf("%d ", i);
    }
    for(int u = 3; u <= (num1); u += 2){
        for(u; num1 % u == 0; num1 /= u){
            printf("%d ", u);
        }
    }

    // WHILE LOOP //
    printf("\nUSING WHILE LOOP\n");
    num1 = num;
    while(num1 % 2 == 0){
        num1 /= 2;
        printf("2 ");
    }
    int f = 3;
    while(f <= num1){
        while(num1 % f == 0){
            printf("%d ", f);
            num1 /= f;
        }
        f += 2;
    }

    //DO WHILE LOOP//
    num1 = num;
    int g = 3;
    printf("\nUSING DO WHILE LOOP\n");
    do {
    num1 /= 2;
    printf("2 " );
    } while(num1 % 2 == 0);
    
    do{
        if (num1 % g == 0){
            do {
                printf("%d ", g);
                num1 /= g;
            } while (num1 % g == 0);
        }
        g += 2;
    } while(g <= num1);
}
