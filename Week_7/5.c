//C program to read elements in a matrix and find sum of upper triangular matrix.

#include <stdio.h>
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, sum = 0;
    
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        printf("\n");
        for (int j = 0; j < sizeof(a[0])/sizeof(a[0][0]); j++){
          if(i <=j) { printf("%d ", a[i][j]);
        sum += a[i][j];}
        else {printf("  ");}
        }

    }
    printf("\nsum of upper triangular matrix = %d", sum);
}
