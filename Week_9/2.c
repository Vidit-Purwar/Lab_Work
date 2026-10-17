#include <stdio.h>

int cube(int a){
    return a*a*a;
}

int main(){
    printf("Enter n ");
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\n%d", cube(i+1));
    }
}
