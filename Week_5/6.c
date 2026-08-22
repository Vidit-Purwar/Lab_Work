/*Program that will take an integer number from user as input then print the
table of that number using for/while/do while loop.*/

#include <stdio.h>
int main()
{
    int a;
    int i = 1;
    
    printf("enter a number ");
    scanf("%d", &a);

    /* -- USING FOR LOOP -- */
    printf("\nUSING FOR LOOP");
    for (i ; i <= 10; i++){
        printf("\n%d * %d = %d", a, i, i*a);
        if (i == 10){
            break;
        }
    }

    i = 0;
    /* -- USING WHILE LOOP -- */
    printf("\n\nUSING WHILE LOOP");
    while (i != 11){
        printf("\n%d x %d = %d", a, i, a*i);
        i++;
    }

    i = 0;
    /* -- USING DO WHILE LOOP -- */
    printf("\n\nUSING DO WHILE LOOP");
    do {
        printf("\n%d x %d = %d", a, i, a*i);
        i++;
    }while(i != 11);
}
