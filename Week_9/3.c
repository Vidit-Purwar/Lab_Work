#include <stdio.h>
#include <stdlib.h>

int i = 0;

int *octal (int b){
    int *a = (int*)calloc(100, 4);
    
    do{i++;
    a[i] = b % 8;
b/=8;
}while(b/8 != 0);
a[i + 1] = b%8;
return a;
}

int main(){
    printf("Enter number ");
    int n;
    int *a;
    scanf("%d", &n);
    a = octal(n);
    for(int j = i+1; j > 0; j--){
        printf("%d", a[j]);
    }
}
