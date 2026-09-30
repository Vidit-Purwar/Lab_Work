//C program to find the sum and average of n numbers using arrays.

#include <stdio.h>
int main(){
    int a[9] = {2, 4, 1, 6, 20, 9}, sum= 0;
    printf("sum of the array elements = ");
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        sum += a[i];
    }
    printf("%d", sum);
    printf("\naverage of elements = %d", sum/(sizeof(a)/sizeof(a[0])));
}