#include <stdio.h>

int main(){
    long long int a[100] ={0, 1};
    int range;
    printf("Enter range ");
    scanf("%d", &range);
    for(int i = 2; i <range; i++){
        a[i] = a[i - 1] + a[i - 2];
    }

    for(int i = 0; i < range; i++){
        printf("\n%d ", a[i]);
    }
}
