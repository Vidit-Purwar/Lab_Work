#include <stdio.h>

int sum(int a, int b){
    return(a + b);
}

int multiply(int a, int b){
    return(a * b);
}

int divide(int a, int b){
    return(a/b);
}

int subtract(int a, int b){
    return(a - b);
}

int main(){
    int option, num1, num2;
    printf("sum - 1, multiply  - 2, divide - 3, subtract - 4: ");
    scanf("%d", &option);
    printf("num1 ");
    scanf("%d", &num1);
    printf("num2 ");
    scanf("%d", &num2);    
    switch (option)
    {
    case 1:
        printf("%d", sum(num1, num2));
        break;
    
    case 2:
        printf("%d", multiply(num1, num2));
        break;
    
    case 3:
        printf("%d", divide(num1, num2));
        break;
    
    case 4:
        printf("%d", subtract(num1, num2));

    default:
        break;
    }
}
