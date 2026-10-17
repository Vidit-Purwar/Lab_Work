#include <stdio.h>

int is_geometric(int size, int a[]){
    int is_geom = 1;
    if (size > 2) {
        for(int i = 2; i < size; i++){
            if (a[i - 1] != 0 && a[i] != 0 && a[i - 2] != 0) {    
                if(a[i - 1] * a[i - 1] == a[i] * a[i - 2]){
                    is_geom = 1;
                } else {
                    is_geom = 0;
                    break;
                }
            } else {
                is_geom = 0;
                break;
            }
        }
    } else {
        is_geom = 0;
    }

    return is_geom;
}

int is_arithmetic(int size, int a[]){
    int is_arith = 1;
    if (size > 2) {
        for(int i = 2; i < size; i++){
            if(a[i] - a[i - 1] == a[i - 1] - a[i - 2]){
                is_arith = 1;
            } else {
                is_arith = 0;
                break;
            }
        }
    } else {
        is_arith = 0;
    }

    return is_arith;
}

int main(){
    int size;
    int is_arith, is_geom;
    printf("Enter array size : ");
    scanf("%d", &size);

    if (size > 0) {
        int a[size];    
        for(int i = 0; i < size; i++){
            printf("Enter element %d: ",i + 1);
            scanf("%d", &a[i]);
        }

        is_arith = is_arithmetic(size, a);
        is_geom = is_geometric(size, a);

        if (is_arith && is_geom){
            printf("Both arithmetic and geometric ");
        }
        else if(is_arith){
            printf("Arithmetic");
        }
        else if(is_geom){
            printf("Geometric");
        }
        else { printf("neither arithmetic nor geometric"); }
    } else { 
        printf("invalid size"); 
    }

    return 0;    
}
