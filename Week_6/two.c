/*program to count frequency of digits in an integer number given by user using
for/while/do while loop.*/

#include <stdio.h>
int main()
{
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    int zero = 0;
    int inp;
    int inp1;
    int counter;

    printf("enter number : ");
    scanf("%d", &inp);
    inp1 = inp;

    // FOR LOOP //
    printf("USING FOR LOOP\n");
    for (inp1; inp1 != 0; inp1 /= 10){
        counter = inp1%10;
        switch (counter)
        {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            case 0:
                zero++;
                break;
            default:
                break;
        }
    }
    printf("zero : %d\none : %d\ntwo : %d\nthree : %d\nfour : %d\nfive : %d\nsix : %d\nseven : %d\neight : %d\nnine : %d\n",zero,one,two,three,four,five,six,seven,eight,nine);

    // WHILE LOOP //
    one = 0;
    two = 0;
    three = 0;
    four = 0;
    five = 0;
    six = 0;
    seven = 0;
    eight = 0;
    nine = 0;
    zero = 0;
    counter = 0;
    inp1 =inp;
    
printf("USING WHILE LOOP\n");
while (inp1 != 0)
{
    counter = inp1%10;
    inp1 /= 10;
    switch (counter)
        {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            case 0:
                zero++;
                break;
            default:
                break;
        }
}
printf("zero : %d\none : %d\ntwo : %d\nthree : %d\nfour : %d\nfive : %d\nsix : %d\nseven : %d\neight : %d\nnine : %d\n",zero,one,two,three,four,five,six,seven,eight,nine);


    // DO WHILE LOOP //
    counter = 0 ;
    inp1 = inp;
    one = 0;
    two = 0;
    three = 0;
    four = 0;
    five = 0;
    six = 0;
    seven = 0;
    eight = 0;
    nine = 0;
    zero = 0;
    printf("USING DO-WHILE LOOP\n");
    
    do {
        counter = inp1%10;
        inp1 /= 10;
        switch (counter)
        {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            case 0:
                zero++;
                break;
        
            default:
                break;
        }
    
    }while (inp1 != 0);
    printf("zero : %d\none : %d\ntwo : %d\nthree : %d\nfour : %d\nfive : %d\nsix : %d\nseven : %d\neight : %d\nnine : %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
}
