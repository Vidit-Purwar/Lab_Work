#include <stdio.h>
int main(){
    int r1, r2, i1, i2;
    printf("number 1\n");
    printf("Enter real part: ");
    scanf("%d", &r1);
    printf("Enter imaginary part: ");
    scanf("%d", &i1);
    printf("\nnumber 2\n");
    printf("Enter real part: ");
    scanf("%d", &r2);
    printf("Enter imaginary part: ");
    scanf("%d", &i2);
    printf("\n( %d + %di ) + ( %d + %di ) = %d + %di\n", r1, i1, r2, i2, r1 + r2, i1 + i2);
}