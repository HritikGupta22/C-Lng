#include<stdio.h>
int main()
{   int kms; 
    float lts, avg;
    printf("enter dis in km\n");
    scanf("%d",&kms);
    printf("enter fuel in liters\n");
    scanf("%f",&lts);
    avg=(kms/lts);
    printf("Average consumption=%.3f\n",avg);
    return 0;
}