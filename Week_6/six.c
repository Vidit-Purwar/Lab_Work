#include <stdio.h>


int main()
{
int counter = 1;
int month;
int non_lymod[12] = {3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
int mo;
int sum = 0;
int odd_days;
printf("This program displays calender months 2027\n");
printf("Enter month (1-12) ");
scanf("%d", &month);

printf("USING FOR LOOP");
switch (month)
{
case 1 : mo = 31; printf("\n\tJANUARY 2027"); break;
case 2 : mo = 28; printf("\n\tFEBRUARY 2027"); break;
case 3 : mo = 31; printf("\n\tMARCH 2027"); break;
case 4 : mo = 30; printf("\n\tAPRIL 2027"); break;
case 5 : mo = 31; printf("\n\tMAY 2027"); break;
case 6 : mo = 30; printf("\n\tJUNE 2027"); break;
case 7 : mo = 31; printf("\n\tJULY 2027"); break;
case 8 : mo = 31; printf("\n\tAUGUST 2027"); break;
case 9 : mo = 30; printf("\n\tSPETEMBER 2027"); break;
case 10 : mo = 31;printf("\n\tOCTOBER 2027"); break;
case 11 : mo = 30;printf("\n\tNOVEMBER 2027"); break;
case 12 : mo = 31;printf("\n\tDECEMBER 2027"); break;
default : break;
}

printf("\nFRI SAT SUN MON TUE WED THU \n");
for (int w = 0; w < month - 1; w++){
    sum += non_lymod[w];
}
if (sum > 7){
    odd_days = sum % 7;
}
else if (sum <7){
    odd_days = sum;
}
 
    // -- USING FOR LOOP -- 
    for(int i = 1; i <= mo + odd_days; i++){
        
        if (i - odd_days >= 10){
                printf("%d  ", i - odd_days);
        }
        if (i - odd_days < 10){
            if (i - odd_days> 0){printf("%d   ", i - odd_days);}
            else {printf("    ");}
        }
        if (counter % 7 == 0){
            printf("\n");
        }
        counter+=1;
    }

    // -- USING WHILE LOOP -- //
    printf("\n\nUSING WHILE LOOP\n");
    int w = 1;
    int counter1 = 1;
    while (w <= mo + odd_days){
        //printf("counter = %d ,%d\t", counter1, counter1%7);
        
        if (w - odd_days >= 10){
            printf("%d  ", w - odd_days);
        }
        if (w - odd_days < 10){
            if (w - odd_days > 0){printf("%d   ", w - odd_days);}
            else {printf("    ");}
        }
        if (counter1 % 7 == 0){
            printf("\n");
        }
        w++;
        counter1++;
    }

    // -- USING DO WHILE LOOP -- //
    printf("\n\nUSING DO WHILE LOOP\n");
    int dw = 1;
    int counter2 = 1;
    do {
        if (dw - odd_days >= 10){
            printf("%d  ", dw - odd_days);
        }
        if (dw - odd_days < 10){
            if (dw - odd_days > 0){printf("%d   ", dw - odd_days);}
            else {printf("    ");}
        }
        if (counter2 % 7 == 0){
            printf("\n");
        }
        dw++;
        counter2++;
    } while(dw <= mo + odd_days);
}
