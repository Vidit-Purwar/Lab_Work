//C program to multiply two square matrices.

#include <stdio.h>
int main(){
    int a[3][3] = {{1, 3, 4}, {5, 9, 8}, {2, 6, 7}};
    int b[3][3] = {{12, 3, 4},{2, 55, 9},{1, 3, 2}};
    int c[3][3];
    

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int d = 0;
            for (int k = 0; k < 3; k++){
                d += a[i][k]*b[k][j];
            }
            c[i][j] = d;
        }
    }

    for (int i = 0; i < 3; i++){
        printf("\n");
        for (int j = 0; j < 3; j++){
            printf("%d ", c[i][j]);
        }
    }

}
