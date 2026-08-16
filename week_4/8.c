// program to tell minimum number of notes to be paid 

#include <stdio.h>
int main()
{
    int amt;
    int mny_lft;
    printf("enter the amount ");
    scanf("%d", &amt);
    int fvhn = (amt - (amt % 500))/500;
    printf(" 500 : %d\n", fvhn);
    mny_lft = amt - fvhn*500;
    int onhn = (mny_lft - (mny_lft % 100))/100;
    printf(" 100 : %d\n", onhn);
    mny_lft  = amt - fvhn*500 - onhn*100;
    int ffty = (mny_lft - (mny_lft % 50))/50;
    printf(" 50 : %d\n", ffty);
    mny_lft = amt - fvhn*500 - onhn*100 - ffty*50;
    int twnty = (mny_lft - (mny_lft % 20))/20;
    printf(" 20 : %d\n", twnty);
    mny_lft = amt - fvhn*500 - onhn*100 - ffty*50 - twnty*20;
    int ten = (mny_lft - (mny_lft%10))/10;
    printf(" 10 : %d\n", ten);
    mny_lft = amt - fvhn*500 - onhn*100 - ffty*50 - twnty*20 - ten*10;
    int fve = (mny_lft - (mny_lft % 5))/5;
    printf(" 5 : %d\n", fve);
    mny_lft = amt - fvhn*500 - onhn*100 - ffty*50 - twnty*20 - ten*10 - fve*5;
    int two = (mny_lft - (mny_lft % 2))/2;
    printf(" 2 : %d\n", two);
    mny_lft = amt - fvhn*500 - onhn*100 - ffty*50 - twnty*20 - ten*10 - fve*5 - two*2;
    printf(" 1 : %d\n", mny_lft);
}