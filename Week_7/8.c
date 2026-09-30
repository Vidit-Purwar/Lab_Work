//C program to find the frequency of each element in an array.

#include <stdio.h>
int main(){
    int a[] = {1, 2, 3, 5, 2, 9, 7, 3, 5, 1};

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        int count = 0;
        for (int j = 0; j < sizeof(a)/sizeof(a[0]); j++){
            if (a[i] == a[j + i] && (j + i) < sizeof(a)/sizeof(a[0])){
                count += 1;
                if(i + j != i){a[i + j] = 0;}
                }
        }if(a[i] != 0){printf("%d occurs %d time\n", a[i], count);}

    }
}