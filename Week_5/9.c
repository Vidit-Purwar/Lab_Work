// Introduce Simulation of Loops using Virtual Labs for Factorial Calculation and Height of Pyramid.

#include <stdio.h>
int main()
{
    int loop_type;
    int num;

    printf("\n for loop - 1");
    printf("\n while loop - 2");
    printf("\n do while loop - 3");
    printf("\n nested loop - 4");
    printf("\n enter loop type ");
    scanf("%d", &loop_type);
    printf("\n enter number ");
    scanf("%d", &num);

    if (num < 0){
        printf("undefined");
    }
    else if (num == 0) {
        printf("1");
    }
    else if (num > 0) {
        switch (loop_type)
        {
        case 1:
            int copy_1 = num;
            for (int i = 1; i < num; i++) {
                printf("\n%d * %d = %d", copy_1, (num - i), copy_1 * (num -i));
                copy_1 = copy_1 * (num - i);
            }
            break;
        
        case 2:
            int o = 1;
            int copy_2 = num;
            while (o < num) {
                printf("\n%d * %d = %d", copy_2, (num - o), copy_2 * (num -o));
                copy_2 = copy_2 * (num - o);
                o ++;
            }
            break;
        
        case 3:
            int d = 1;
            int copy_3 = num;
            do {
                printf("\n%d * %d = %d", copy_3, (num - d), copy_3 * (num -d));
                copy_3 = copy_3 * (num - d);
                d ++;
            } while (d < num);
            break;

        case 4:
            for (int h = 1; h <= num; h++){
                printf("\n");
                for (int u = 1; u <=2*num - 1; u++){
                    if (u >= num - (h - 1) && u <= num + (h - 1)){
                        if ((u - num + (h - 1)) % 2 == 0){
                            printf("*");
                        }
                        else{
                            printf("_");
                        }
                    }    
                    else {
                        printf("_");
                    }
                }
            }
        
            default:
            break;
        }
    }
}
