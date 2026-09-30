// program in C to store and display a 3-dimensional array.

#include <stdio.h>
int main()
{
int a[3][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}}};
for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++ ){
    printf("\n");
    for(int j = 0 ; j <sizeof(a[0])/sizeof(a[0][0]); j++){
        printf("\n");
        for(int k = 0 ; k < sizeof(a[0][0])/sizeof(a[0][0][0]); k++){
            printf("%d ", a[i][j][k]);
        }
    }
}
printf("\n");
}