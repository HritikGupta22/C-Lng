#include<stdio.h>
int main()
{
    int amount, total;
    printf("enter total amount\n");
    scanf("%d",&amount);
    total = (int)amount/2000;
    printf("there are: ");
    printf("\n %d notes of 2000\n", total);
    amount = amount-(total*2000);
    total = (int)amount/500;
    printf("\n %d notes of 500\n", total);
    amount = amount-(total*500);
    total = (int)amount/100;
    printf("\n %d notes of 100\n", total);
    amount = amount-(total*100);
    total= amount/50;
    printf("\n %d notes of 50\n", total);
    amount = amount-(total*50);
    total= amount/20;
    printf("\n %d notes of 20\n", total);
    amount = amount-(total*20);
    total= amount/10;
    printf("\n %d notes of 10\n", total);
    amount = amount-(total*10);
    total= amount/5;
    printf("\n %d notes of 5\n", total);
    amount = amount-(total*5);
    total= amount/2;
    printf("\n %d notes of 2\n", total);
    amount = amount-(total*2);
    total= amount/1;
    printf("\n %d notes of 1\n", total);
    return 0;
}