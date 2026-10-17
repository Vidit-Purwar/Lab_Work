#include <stdio.h>

int cube(int a){
    return a*a*a;
}

int main(){
    printf("enter number ");
    int a;
    scanf("%d", &a);
    printf("%d", cube(a));
}
