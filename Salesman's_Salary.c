#include<stdio.h>
#include<conio.h>
#define BASE_SALAR 1500.00
#define BONUS_RATE 200.0
#define COMMISSION 0.02

int main()
{
    int quantity ;
    float gross_salary,price ;
    float bonus, commission ;
    printf("Input number sold and price\n");
    scanf("%d %f", &quantity, &price);
    bonus           =  BONUS_RATE * quantity;
    commission      =  COMMISSION * quantity * price;
    gross_salary    =  BASE_SALAR + bonus + commission;
    printf("\n");
    printf("bonus           =%6.2f\n",bonus);
    printf("commission      =%6.2f\n",commission);
    printf("Gross salary    =%6.2f\n",gross_salary);
    getch();
    return(0);
}
