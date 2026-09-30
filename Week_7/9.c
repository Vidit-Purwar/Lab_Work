// Given an array, program to the left-rotate the elements of the array by one.

#include <stdlib.h>
#include <stdio.h>

int main(){
    unsigned short int len;
    
    int *arr = (int*)malloc(200 * sizeof(int));

    if(arr = NULL){
        fprintf(stderr, "Memory allocation failed");
        return 1; 
    }
    
    printf("Enter lenght of array: ");
    scanf("%hu", &len);
    
    arr = realloc(arr, (len + 1) * sizeof(int));

    printf("Enter array elements ");
    for(unsigned short int i = 0; i < len; i++){
        printf("Enter a[%hu]: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray you entered: ");
    for(unsigned short int i = 0; i < len ; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    arr[len] = arr[0];

    printf("Left shifted array: ");
    for(unsigned short int i = 0; i < len ; i++){
        arr[i] = arr[i + 1];
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
