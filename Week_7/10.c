//C program to find the second smallest element in a one-dimensional array.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int *arr = NULL;
    unsigned short int len;

    arr = (int*)(malloc(100 * sizeof(int)));
    if (arr == NULL){
        fprintf(stderr, "Memory allocation failed");
        return 1;
    }

    printf("Enter size of array ");
    scanf("%hu", &len);

    if (len > 0)
    {   arr = realloc(arr, len * sizeof(int));

        printf("Enter array elements \n");
        for(unsigned short int i = 0; i < len; i++){
            printf("element %hu = ", i+1);
            scanf("%d", &arr[i]);
        }

        printf("array you entered: ");
        for (unsigned short int i = 0; i < len; i++){
        printf("%d ", arr[i]);
        }

        //sorting 
        for(unsigned short int i = 0; i < len - 1; i++){
            for(short int j = i; j != -1; j--){
                if(arr[j] > arr[j + 1]){
                    arr[j] = arr[j] + arr[j + 1];
                    arr[j+1] = arr[j] - arr[j + 1];
                    arr[j] = arr[j] - arr[j + 1];
                }
            }
        }    

        if(len > 2){printf("\nsecond smallest element = %d", arr[1]);}
        else{printf("\nsecond smallest not exist, the only element is %d", arr[0]);}
    } 
        
    else { 
        printf("\nSize of array cannot be less than or equal to zero ");  
    }

    free(arr);
    return 0;
}