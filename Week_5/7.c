/*program to print sum of digits of a number entered by a user using
for/while/do while loop.*/

#include <stdio.h>
int main()
{
    int a;
    int sum = 0;

    printf("Enter number ");
    scanf("%d", &a);

    int copy1 = a;

    /* -- USING WHILE LOOP -- */
    printf("\n\nUSING WHILE LOOP");
    while (copy1 != 0){
        sum += copy1 % 10;
        copy1 /= 10;
    }
    printf("\n%d", sum);
    
    int copy2 = a;
    sum = 0;

    /* -- USING FOR LOOP -- */
    printf("\n\nUSING FOR LOOP");
    for (int copy2 = a; copy2 != 0; copy2 /= 10){
        sum += copy2 % 10;
    }
    printf("\n%d", sum);

    sum = 0;

    /* -- USING DO WHILE LOOP  -- */
    printf("\n\nUSING DO WHILE LOOP");
    do{
        sum += a%10;
        a /= 10;
    }while (a != 0);
    printf("\n%d", sum);
}
