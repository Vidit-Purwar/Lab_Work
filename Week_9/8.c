#include <stdio.h>

int main(){
    int range;
    printf("enter range ");
    scanf("%d", &range);

    int a = 0;
    int b = 1;
    int c = a+b;
    printf("*\n");
    for(int i = 0; i < range; i++){
        for(int j = 0; j < c; j++){
            printf("*");
        }
        printf("\n");
        a = b;
        b = c;
        c = a + b;
    }
}