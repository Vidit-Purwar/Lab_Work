// program to find sum of odd numbers between 1 to n, where n will be given by user (using for/while/do while loop).

#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 0, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* -- USING FOR LOOP -- */
    for (int i = 1; i <= n; i += 2) {
        a += i;
    }
    printf("For loop sum = %d\n", a);

    /* -- USING WHILE LOOP -- */
    int i = 1;
    while (i <= n) {
        b += i;
        i += 2;
    }
    printf("While loop sum = %d\n", b);

    /* -- USING DO-WHILE LOOP -- */
    i = 1;
    if (n >= 1) {
        do {
            c += i;
            i += 2;
        } while (i <= n);
    }
    printf("Do-while loop sum = %d\n", c);
}