#include <stdio.h>
#include <math.h>

int prime_check(int a){
    int is_prime = 1;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}

int main(){
    printf("Enter number ");
    int num;
    scanf("%d", &num);
    for(int i = 2; i < num; i++){
        if((prime_check(i) + prime_check(num - i)) == 2){
            printf("\n%d = %d + %d", num, i, num - i);
        }
    }
}
