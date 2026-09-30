//C program to sort an array

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = (int*)calloc(100,sizeof(int));
    int len;

    if (p == NULL){
        fprintf(stderr, "Memory allocation failed");
        return 1;
    }
    
    printf("Enter size of array ");
    scanf("%d", &len);
    if (len <= 100 && len > 0){
        printf("Enter elements\n");
        for(unsigned short int i = 0; i < len; i++){
            printf("Enter element number %hu: ", i + 1);
            scanf("%d", &p[i]);

            

        }
        for(unsigned short int i = 0; i < len - 1; i++){
            for(short int j = i; j >= 0; j--){
                if (p[j + 1] > p[j]){
                    p[j + 1] = p[j + 1] + p[j];
                    p[j] = p[j + 1] - p[j];
                    p[j + 1] = p[j + 1] - p[j]; 
                }
            }
        }

        printf("Sorted array: ");
        for(unsigned short int i = 0; i < len; i++){
            printf("%d ", p[i]);
        }
    }

    else {printf("Invalid size, size must be less than 100 and more than 0");}
    
    free(p);
}
