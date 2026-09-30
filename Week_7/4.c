//program in C to read a user entered square matrix and then display it’s diagonal.
#include <stdlib.h>
#include <stdio.h>
int main(){
    int a[100][100];
    int dim;
    printf("Enter dimensions ");
    scanf("%d", &dim);

    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < dim; i++){
        printf("\n");
        for (int j = 0; j < dim; j++){
           if (i == j){
            printf("%d, ", a[i][j]);
           }
        else{printf("0, ");}
        }
    }
}
